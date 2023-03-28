#pragma once
#ifndef MICA_DATAGRAM_DATAGRAM_SERVER_IMPL_H_
#define MICA_DATAGRAM_DATAGRAM_SERVER_IMPL_H_
#include "mica/eaet/eaet.h"
#include "sys/time.h"
#include "mica/datagram/mlp.h"

#define BLUE         "\033[0;32;34m"
#define RED          "\033[0;32;31m"
#define NONE         "\033[m"

namespace mica {
namespace datagram {
template <class StaticConfig>
DatagramServer<StaticConfig>::DatagramServer(const ::mica::util::Config& config,
                                             Processor* processor,
                                             Network* network,
                                             DirectoryClient* dir_client)
    : config_(config),
      processor_(processor),
      network_(network),
      dir_client_(dir_client) {
  // assert(::mica::util::lcore.lcore_count() <= StaticConfig::kMaxLCoreCount);

  stopwatch_.init_start();

  directory_refresh_interval_ = ::mica::util::safe_cast<uint32_t>(
      config.get("directory_refresh_interval").get_uint64(1));
  directory_refresh_lcore_ = ::mica::util::safe_cast<uint16_t>(
      config.get("directory_refresh_lcore")
          .get_uint64(::mica::util::lcore.lcore_count() - 1));

  rebalance_interval_ = ::mica::util::safe_cast<uint32_t>(
      config.get("rebalance_interval").get_uint64(0));

  flush_status_report_ = config.get("flush_status_report").get_bool(true);
  kTenantCount = processor_->get_tenant_count();
  assert(kTenantCount <= ::mica::table::BasicLTableConfig::kMaxTenantCount);
  generate_server_info();

  stopwatch_.init_end();
}

template <class StaticConfig>
DatagramServer<StaticConfig>::~DatagramServer() {}

template <class StaticConfig>
void DatagramServer<StaticConfig>::generate_server_info() {
  std::ostringstream oss;
  oss << '{';

  oss << "\"concurrent_read\":";
  oss << (processor_->get_concurrent_read() ? "true" : "false");

  oss << ", \"concurrent_write\":";
  oss << (processor_->get_concurrent_write() ? "true" : "false");

  oss << ", \"partitions\":[";
  size_t table_count = processor_->get_table_count();
  for (size_t i = 0; i < table_count; i++) {
    if (i != 0) oss << ',';
    uint16_t lcore_id = processor_->get_owner_lcore_id(i);
    oss << '[' << i << ',' << lcore_id << ']';
  }
  oss << ']';

  oss << ", \"endpoints\":[";
  auto eids = network_->get_endpoints();
  for (size_t i = 0; i < eids.size(); i++) {
    auto& ei = network_->get_endpoint_info(eids[i]);
    if (i != 0) oss << ',';
    oss << '[' << eids[i] << ',' << ei.owner_lcore_id << ",\""
        << ::mica::network::NetworkAddress::str_mac_addr(ei.mac_addr) << "\",\""
        << ::mica::network::NetworkAddress::str_ipv4_addr(ei.ipv4_addr) << "\","
        << ei.udp_port << ']';
  }
  oss << ']';

  oss << '}';

  server_info_ = oss.str();

  if (StaticConfig::kVerbose) printf("server_info: %s\n", server_info_.c_str());
}

template <class StaticConfig>
void DatagramServer<StaticConfig>::directory_proc_wrapper(void* arg) {
  auto server = reinterpret_cast<DatagramServer<StaticConfig>*>(arg);
  server->directory_proc();
}

template <class StaticConfig>
void DatagramServer<StaticConfig>::directory_proc() {
  ::mica::util::lcore.pin_thread(directory_refresh_lcore_);

  if (directory_refresh_interval_ == 0) return;

  uint64_t last_rebalance = stopwatch_.now();

  while (!stopping_) {
    uint64_t now = stopwatch_.now();
    if (rebalance_interval_ != 0 &&
        stopwatch_.diff_in_cycles(now, last_rebalance) >=
            rebalance_interval_ * stopwatch_.c_1_sec()) {
      printf("rebalancing\n");
      last_rebalance = now;

      processor_->rebalance_load();
      processor_->wait_for_pending_owner_lcore_changes();

      generate_server_info();
      dir_client_->register_server(server_info_.c_str());
    } else
      dir_client_->refresh_server();

    for (uint32_t i = 0; i < directory_refresh_interval_ && !stopping_; i++) {
      sleep(1);
    }
  }
}

template <class StaticConfig>
void DatagramServer<StaticConfig>::run() {
  // TODO: Implement a non-DPDK option.
  uint16_t lcore_count =
      static_cast<uint16_t>(::mica::util::lcore.lcore_count());
  // Register at the directory and keep it updated.
  stopping_ = false;
  dir_client_->register_server(server_info_.c_str());
  directory_thread_ = std::thread(directory_proc_wrapper, this);

  reset_status();
  //reset_tenant_status();

  // Launch workers.
  std::vector<std::pair<DatagramServer<StaticConfig>*, uint16_t>> args(
      lcore_count);
  for (uint16_t lcore_id = 0; lcore_id < lcore_count; lcore_id++) {
    args[lcore_id].first = this;
    args[lcore_id].second = lcore_id;
  }
  size_t table_count = processor_->get_table_count();
  for (uint16_t lcore_id = 1; lcore_id < lcore_count; lcore_id++) {
    if (!rte_lcore_is_enabled(static_cast<uint8_t>(lcore_id))) continue;
    if(lcore_id == table_count){
      rte_eal_remote_launch(clean_up_worker_proc_wrapper, &args[lcore_id], lcore_id);
      continue;
    }
    rte_eal_remote_launch(worker_proc_wrapper, &args[lcore_id], lcore_id);
  }
  worker_proc_wrapper(&args[0]);

  rte_eal_mp_wait_lcore();

  // Clean up.
  stopping_ = true;
  directory_thread_.join();
  dir_client_->unregister_server();
}

template <class StaticConfig>
int DatagramServer<StaticConfig>::worker_proc_wrapper(void* arg) {
  auto v =
      reinterpret_cast<std::pair<DatagramServer<StaticConfig>*, uint16_t>*>(
          arg);
  v->first->worker_proc(v->second);
  return 0;
}

template <class StaticConfig>
void DatagramServer<StaticConfig>::worker_proc(uint16_t lcore_id) {
  ::mica::util::lcore.pin_thread(lcore_id);

  printf("worker running on lcore %" PRIu16 "\n", lcore_id);

  // Find endpoints owned by this lcore.
  std::vector<EndpointId> my_eids;
  {
    auto eids = network_->get_endpoints();
    for (size_t i = 0; i < eids.size(); i++) {
      auto& ei = network_->get_endpoint_info(eids[i]);
      if (ei.owner_lcore_id == lcore_id) my_eids.push_back(eids[i]);
    }
  }
  if (my_eids.size() == 0) {
    if (StaticConfig::kVerbose)
      printf("no endpoints found for lcore %" PRIu16 "\n", lcore_id);
    return;
  }

  // Initialize RX/TX states.
  std::vector<RXTXState> rx_tx_states(my_eids.size());
  for (size_t i = 0; i < my_eids.size(); i++) {
    rx_tx_states[i].eid = my_eids[i];
    rx_tx_states[i].pending_tx.count = 0;
  }

  uint64_t last_status_report = stopwatch_.now();
  uint32_t report_status_check = 0;
  const uint32_t report_status_check_max = 0xffff;

  RequestAccessor ra(this, &worker_stats_[lcore_id], lcore_id);

  size_t next_index = 0;
  while (!stopping_) {
    auto& rx_tx_state = rx_tx_states[next_index];

    // Choose the next endpoint.
    if (++next_index == rx_tx_states.size()) next_index = 0;

    // Receive requests.
    std::array<PacketBuffer*, StaticConfig::kRXBurst> bufs;
    uint16_t count =
        network_->receive(rx_tx_state.eid, bufs.data(), StaticConfig::kRXBurst);
    uint64_t now = stopwatch_.now();

    if (count > 0) {
      if (StaticConfig::filterVerbose){ 
      //if (::mica::util::lcore.lcore_id()!=0){//xhj
        printf("lcore %2zu: received %" PRIu16 " packets\n",
               ::mica::util::lcore.lcore_id(), count);
        /*
        print the udp port of the first packet
        */
        printf("[\n");
        //auto mac = reinterpret_cast<const rte_ether_hdr*>(bufs[0]->get_data());
        printf("--------------rte_eth_rx_burst of 40:----------\n");
        // printf("mac s_addr:%s , d_addr: %s \n",str_mac_addr(mac->s_addr),str_mac_addr(mac->d_addr));

        // auto ip = reinterpret_cast<const rte_ipv4_hdr*>(bufs[0]->get_data() + sizeof(rte_ether_hdr));
        // printf("src_ip= %u; dst_ip = %u\n", ip->src_addr,ip->dst_addr);

        auto udp = reinterpret_cast<const rte_udp_hdr*>(bufs[0]->get_data() + sizeof(rte_ether_hdr) + sizeof(rte_ipv4_hdr));
        printf("src_port = %u; dst_port = %u\n", rte_be_to_cpu_16(udp->src_port), rte_be_to_cpu_16(udp->dst_port));
        printf("]\n");
      }
      // Process requests and possibly send responses.
      ra.setup(&rx_tx_state, &bufs, count, now);
      processor_->process(ra);
    }

    check_pending_tx_min(rx_tx_state);
    check_pending_tx_timeout(rx_tx_state, now);

    // See if we need to report the status.
    if (lcore_id == 0 && ++report_status_check >= report_status_check_max) {
      report_status_check = 0;

      double time_diff = stopwatch_.diff(now, last_status_report);
      if (time_diff >= 1.) {
        last_status_report = now;
        report_status(time_diff);
        report_tenant_status(time_diff);
      }
    }

    processor_->apply_pending_owner_lcore_changes();

    worker_stats_[lcore_id].alive = 1;
  }

  // Clean up.
  for (auto& rx_tx_state : rx_tx_states) release_pending_tx(rx_tx_state);
}

template <class StaticConfig>
int DatagramServer<StaticConfig>::clean_up_worker_proc_wrapper(void* arg) {
  auto v =
      reinterpret_cast<std::pair<DatagramServer<StaticConfig>*, uint16_t>*>(
          arg);
  v->first->clean_up_worker(v->second);
  //auto server = reinterpret_cast<DatagramServer<StaticConfig>*>(arg);
  //server->clean_up_worker(0);
  return 0;
}

template <class StaticConfig>
void DatagramServer<StaticConfig>::check_memory_resizing(){
  size_t partition_count = processor_->get_table_count();
  size_t tenant_count = kTenantCount;
  for(uint16_t partition_number = 0; partition_number < partition_count; partition_number++){
    ::mica::processor::BasicPartitionsConfig::Table* tmp_table = processor_->get_table(partition_number);
    for(size_t tenant_id = 0; tenant_id < tenant_count; tenant_id++){
      ::mica::processor::BasicPartitionsConfig::Table::Pool* tmp_pool = tmp_table->get_pool(tenant_id);
      if(tmp_pool->eaet_calculation == 1){//需要计算
        double theta = 0;
        tmp_pool->set_new_log_size(tmp_pool->memory_estimation(partition_number, &theta));
        tmp_pool->eaet_calculation = 2;//计算完毕
        printf("out theta = %lf\n", theta);
        tenants_theta[tenant_id] += theta;
        tenants_theta_calculate_number[tenant_id]++;
        printf(BLUE"clean up worker help lcore%d tenant%d compute size!\n"NONE, partition_number, tenant_id);
      }
    }
  }
}

template <class StaticConfig>
void DatagramServer<StaticConfig>::clean_up_worker(uint16_t lcore_id){
  ::mica::util::lcore.pin_thread(lcore_id);
  printf(BLUE"clean up worker running on lcore %" PRIu16 "\n"NONE, lcore_id);
  size_t partition_count = processor_->get_table_count();
  size_t partition_id = 0;
  size_t partition_mask = partition_count - 1;

  uint64_t eaet_calculation_mask = 16 - 1;

  uint64_t bucket_mask = processor_->get_table(0)->get_bucket_mask();
  uint64_t bucket_number = bucket_mask + 1;
  uint32_t bucket_index = 0;
  const uint32_t clean_number = 32768 * 8;

  uint64_t time_count = 0;
  
  while(true){
    //sleep(1);
    //time_count++;
    //if(!(time_count & eaet_calculation_mask)) check_memory_resizing();
    check_memory_resizing();
    //printf(BLUE"cleaning partition %d index %d\n"NONE, partition_id, bucket_index);
    processor_->get_table(partition_id)->cleanup_specified_bucket(bucket_index, clean_number);
    bucket_index += clean_number;
    if(bucket_index >= bucket_number){//清完一个table
      bucket_index = 0;
      partition_id = (partition_id + 1) & partition_mask;
    }
  }
  
  printf(RED"clean up worker now do nothing!\n"NONE);
  return;
}

template <class StaticConfig>
void DatagramServer<StaticConfig>::check_pending_tx_full(
    RXTXState& rx_tx_state) {
  if (rx_tx_state.pending_tx.count != StaticConfig::kTXBurst) return;

  network_->send(rx_tx_state.eid, rx_tx_state.pending_tx.bufs.data(),
                 rx_tx_state.pending_tx.count);
  if (StaticConfig::kVerbose)
    printf("lcore %2zu: sent %" PRIu16 " packets\n",
           ::mica::util::lcore.lcore_id(), rx_tx_state.pending_tx.count);
  rx_tx_state.pending_tx.count = 0;
}

template <class StaticConfig>
void DatagramServer<StaticConfig>::check_pending_tx_min(
    RXTXState& rx_tx_state) {
  if (rx_tx_state.pending_tx.count != StaticConfig::kTXMinBurst) return;

  network_->send(rx_tx_state.eid, rx_tx_state.pending_tx.bufs.data(),
                 rx_tx_state.pending_tx.count);
  if (StaticConfig::kVerbose)
    printf("lcore %2zu: sent %" PRIu16 " packets\n",
           ::mica::util::lcore.lcore_id(), rx_tx_state.pending_tx.count);
  rx_tx_state.pending_tx.count = 0;
}

template <class StaticConfig>
void DatagramServer<StaticConfig>::check_pending_tx_timeout(
    RXTXState& rx_tx_state, uint64_t now) {
  if (rx_tx_state.pending_tx.count == 0) return;

  uint64_t age =
      stopwatch_.diff_in_cycles(now, rx_tx_state.pending_tx.oldest_time);
  if (age < stopwatch_.c_1_usec() * StaticConfig::kTXBurstTimeout) return;

  network_->send(rx_tx_state.eid, rx_tx_state.pending_tx.bufs.data(),
                 rx_tx_state.pending_tx.count);
  if (StaticConfig::kVerbose)
    printf("lcore %2zu: sent %" PRIu16 " packets\n",
           ::mica::util::lcore.lcore_id(), rx_tx_state.pending_tx.count);
  rx_tx_state.pending_tx.count = 0;
}

template <class StaticConfig>
void DatagramServer<StaticConfig>::release_pending_tx(RXTXState& rx_tx_state) {
  for (uint16_t i = 0; i < rx_tx_state.pending_tx.count; i++)
    network_->release(rx_tx_state.pending_tx.bufs[i]);
}

template <class StaticConfig>
void DatagramServer<StaticConfig>::reset_status() {
  //worker_stats_.resize(0);
  worker_stats_.resize(::mica::util::lcore.lcore_count());
  tenants_info_.resize(kTenantCount);
  tenants_theta.resize(kTenantCount);
  tenants_theta_calculate_number.resize(kTenantCount);
  for(size_t i = 0; i < worker_stats_.size(); ++i){
    worker_stats_[i].tenant_stats_ = new TenantStats[kTenantCount];
  }

  //endpoint_stats_.resize(0);
  endpoint_stats_.resize(Network::kMaxEndpointCount, {0, 0, 0, 0, 0});

  auto eids = network_->get_endpoints();
  for (size_t i = 0; i < eids.size(); i++) {
    auto eid = eids[i];
    auto& ei = network_->get_endpoint_info(eid);
    endpoint_stats_[eid].last_rx_bursts = ei.rx_bursts;
    endpoint_stats_[eid].last_rx_packets = ei.rx_packets;
    endpoint_stats_[eid].last_tx_bursts = ei.tx_bursts;
    endpoint_stats_[eid].last_tx_packets = ei.tx_packets;
    endpoint_stats_[eid].last_tx_dropped = ei.tx_dropped;
  }
}

template <class StaticConfig>
void DatagramServer<StaticConfig>::report_status(double time_diff) {
  uint64_t total_alive = 0;
  uint64_t total_operations_done = 0;
  uint64_t total_operations_succeeded = 0;
  uint64_t total_get_done = 0;
  uint64_t total_get_succeeded = 0;

  uint64_t rx_bursts = 0;
  uint64_t rx_packets = 0;
  uint64_t tx_bursts = 0;
  uint64_t tx_packets = 0;
  uint64_t tx_dropped = 0;

  for (size_t lcore_id = 0; lcore_id < ::mica::util::lcore.lcore_count();
       lcore_id++) {
    {
      uint64_t& v = worker_stats_[lcore_id].alive;
      total_alive += v;
      v = 0;
    }
    {
      uint64_t v = worker_stats_[lcore_id].num_operations_done;
      uint64_t& last_v = worker_stats_[lcore_id].last_num_operations_done;
      total_operations_done += v - last_v;
      last_v = v;
    }
    {
      uint64_t v = worker_stats_[lcore_id].num_operations_succeeded;
      uint64_t& last_v = worker_stats_[lcore_id].last_num_operations_succeeded;
      total_operations_succeeded += v - last_v;
      last_v = v;
    }
    {
      uint64_t v = worker_stats_[lcore_id].num_get_done;
      uint64_t& last_v = worker_stats_[lcore_id].last_get_done;
      total_get_done += v - last_v;
      last_v = v;
    }
    {
      uint64_t v = worker_stats_[lcore_id].num_get_succeeded;
      uint64_t& last_v = worker_stats_[lcore_id].last_get_succeeded;
      total_get_succeeded += v - last_v;
      last_v = v;
    }
  }

  auto eids = network_->get_endpoints();
  for (size_t i = 0; i < eids.size(); i++) {
    auto eid = eids[i];
    auto& ei = network_->get_endpoint_info(eid);
    {
      uint64_t v = ei.rx_bursts;
      uint64_t& last_v = endpoint_stats_[eid].last_rx_bursts;
      rx_bursts += v - last_v;
      last_v = v;
    }
    {
      uint64_t v = ei.rx_packets;
      uint64_t& last_v = endpoint_stats_[eid].last_rx_packets;
      rx_packets += v - last_v;
      last_v = v;
    }
    {
      uint64_t v = ei.tx_bursts;
      uint64_t& last_v = endpoint_stats_[eid].last_tx_bursts;
      tx_bursts += v - last_v;
      last_v = v;
    }
    {
      uint64_t v = ei.tx_packets;
      uint64_t& last_v = endpoint_stats_[eid].last_tx_packets;
      tx_packets += v - last_v;
      last_v = v;
    }
    {
      uint64_t v = ei.tx_dropped;
      uint64_t& last_v = endpoint_stats_[eid].last_tx_dropped;
      tx_dropped += v - last_v;
      last_v = v;
    }
  }

  time_diff = std::max(0.01, time_diff);

  double success_rate =
      static_cast<double>(total_operations_succeeded) /
      static_cast<double>(std::max(total_operations_done, uint64_t(1)));

  double hit_rate =
      static_cast<double>(total_get_succeeded) /
      static_cast<double>(std::max(total_get_done, uint64_t(1)));

  printf("tput=%7.3lf Mops",
         static_cast<double>(total_operations_done) / time_diff / 1000000.);
  printf(", success_rate=%6.2lf%%", success_rate * 100.);
  printf(", hit_rate=%6.2lf%%", hit_rate * 100.);
  printf(", RX=%7.3lf Mpps (%5.2lf ppb)",
         static_cast<double>(rx_packets) / time_diff / 1000000.,
         static_cast<double>(rx_packets) /
             static_cast<double>(std::max(rx_bursts, uint64_t(1))));
  printf(", TX=%7.3lf Mpps (%5.2lf ppb)",
         static_cast<double>(tx_packets) / time_diff / 1000000.,
         static_cast<double>(tx_packets) /
             static_cast<double>(std::max(tx_bursts, uint64_t(1))));
  printf(", TX_drop=%7.3lf Mpps",
         static_cast<double>(tx_dropped) / time_diff / 1000000.);
  printf(", threads=%2" PRIu64 "/%2zu", total_alive,
         ::mica::util::lcore.lcore_count());

  printf("\n");
  if (flush_status_report_) fflush(stdout);
}

/*template <class StaticConfig>
void DatagramServer<StaticConfig>::reset_tenant_status() {
  tenant_stats_.resize(0);
  tenant_stats_.resize(::mica::table::BasicLTableConfig::kMaxTenantCount, {0, 0, 0, 0, 0});
}*/


template <class StaticConfig>
void DatagramServer<StaticConfig>::report_tenant_status(double time_diff) {
  size_t tenantCount = kTenantCount;

  for(size_t tenant_id = 0; tenant_id < tenantCount; tenant_id++){
    
    uint64_t total_get_operations_done = 0;
    uint64_t total_get_operations_succeeded = 0;
    uint64_t total_operations_done = 0;
    uint64_t total_operations_succeeded = 0;
    time_diff = std::max(0.01, time_diff);
    uint64_t total_key_length = 0;
    uint64_t total_value_length = 0;
    for (size_t lcore_id = 0; lcore_id < ::mica::util::lcore.lcore_count(); lcore_id++) {
      {
        uint64_t v = worker_stats_[lcore_id].tenant_stats_[tenant_id].get_done;
        uint64_t& last_v = worker_stats_[lcore_id].tenant_stats_[tenant_id].last_get_done;
        total_get_operations_done += v - last_v;
        last_v = v;
      }
      {
        uint64_t v = worker_stats_[lcore_id].tenant_stats_[tenant_id].get_succeeded;
        uint64_t& last_v = worker_stats_[lcore_id].tenant_stats_[tenant_id].last_get_succeeded;
        total_get_operations_succeeded += v - last_v;
        last_v = v;
      }
      {
        uint64_t v = worker_stats_[lcore_id].tenant_stats_[tenant_id].operations_done;
        uint64_t& last_v = worker_stats_[lcore_id].tenant_stats_[tenant_id].last_operations_done;
        total_operations_done += v - last_v;
        last_v = v;
      }
      {
        uint64_t v = worker_stats_[lcore_id].tenant_stats_[tenant_id].operations_succeeded;
        uint64_t& last_v = worker_stats_[lcore_id].tenant_stats_[tenant_id].last_operations_succeeded;
        total_operations_succeeded += v - last_v;
        last_v = v;
      }
      {
        uint64_t v = worker_stats_[lcore_id].tenant_stats_[tenant_id].total_key_length;
        uint64_t& last_v = worker_stats_[lcore_id].tenant_stats_[tenant_id].last_key_length;
        total_key_length += v - last_v;
        last_v = v;
      }
      {
        uint64_t v = worker_stats_[lcore_id].tenant_stats_[tenant_id].total_value_length;
        uint64_t& last_v = worker_stats_[lcore_id].tenant_stats_[tenant_id].last_value_length;
        total_value_length += v - last_v;
        last_v = v;
      }
    }

    double hit_rate =
        static_cast<double>(total_get_operations_succeeded) /
        static_cast<double>(std::max(total_get_operations_done, uint64_t(1)));

    double success_rate =
        static_cast<double>(total_operations_succeeded) /
        static_cast<double>(std::max(total_operations_done, uint64_t(1)));

    double get_ratio = static_cast<double>(total_get_operations_done) / 
        static_cast<double>(std::max(total_operations_done, uint64_t(1)));

    double avg_key_length = static_cast<double>(total_key_length) /
        static_cast<double>(std::max(total_operations_done, uint64_t(1)));

    double avg_value_length = static_cast<double>(total_value_length) /
        static_cast<double>(std::max(total_operations_done - total_get_operations_done, uint64_t(1)));

    double tput = static_cast<double>(total_operations_done) / time_diff / 1000000.;

    double theta = tenants_theta[tenant_id] / 
        static_cast<double>(std::max(tenants_theta_calculate_number[tenant_id], uint64_t(1)));
    
    double infos[5] = {theta, get_ratio, avg_key_length, avg_value_length, tput};
    double cpu_usage = 0;
    MultilayerPerceptron(infos, 5, &cpu_usage);

    ::mica::pool::hit_rate_diff[tenant_id] = hit_rate - ::mica::pool::last_hit_rate[tenant_id];
    ::mica::pool::last_hit_rate[tenant_id] = hit_rate;

    tenants_info_[tenant_id].get_ratio = get_ratio;
    tenants_info_[tenant_id].key_size = avg_key_length;
    tenants_info_[tenant_id].value_size = avg_value_length;
    tenants_info_[tenant_id].tput = tput;
    tenants_info_[tenant_id].theta = theta;
    tenants_info_[tenant_id].cpu_usage = cpu_usage;

    printf("tenant_id=%lu", tenant_id);
    printf(", tput=%7.3lf Mops", tput);
    printf(", success_rate=%6.2lf%%", success_rate * 100.);
    printf(", hit_rate=%6.2lf%%", hit_rate * 100.);
    printf(", get_ratio=%6.2lf%%", get_ratio * 100.);
    printf(", key_length=%6.2lf", avg_key_length);
    printf(", value_length=%6.2lf", avg_value_length);
    printf(", theta=%6.2lf", theta);
    printf(", cpu_usage=%6.2lf", cpu_usage);
    printf("\n");
  }

  if (flush_status_report_) fflush(stdout);

}

template <class StaticConfig>
DatagramServer<StaticConfig>::RequestAccessor::RequestAccessor(
    DatagramServer<StaticConfig>* server, WorkerStats* worker_stats,
    uint16_t lcore_id)
    : server_(server), worker_stats_(worker_stats), lcore_id_(lcore_id) {
  make_new_pending_response_batch();
}

template <class StaticConfig>
DatagramServer<StaticConfig>::RequestAccessor::~RequestAccessor() {
  // Ensure we have processed all input packets.
  assert(next_packet_index_to_parse_ == packet_count_);
  assert(next_index_to_prepare_ == next_index_to_retire_);

  release_pending_response_batch();
}

template <class StaticConfig>
void DatagramServer<StaticConfig>::RequestAccessor::setup(
    RXTXState* rx_tx_state,
    std::array<PacketBuffer*, StaticConfig::kRXBurst>* bufs,
    size_t packet_count, uint64_t now) {
  rx_tx_state_ = rx_tx_state;
  bufs_ = bufs;
  packet_count_ = packet_count;
  now_ = now;

  next_packet_index_to_parse_ = 0;
  next_index_to_prepare_ = 0;
  next_index_to_retire_ = 0;
}

template <class StaticConfig>
bool DatagramServer<StaticConfig>::RequestAccessor::prepare(size_t index) {
  if (StaticConfig::kVerbose)
    printf("lcore %2zu: prepare: %zu\n", ::mica::util::lcore.lcore_id(), index);
  assert(index >= next_index_to_retire_);
  assert(index <= next_index_to_prepare_);
  if (index == next_index_to_prepare_) return parse_request_batch();
  return true;
}

template <class StaticConfig>
typename DatagramServer<StaticConfig>::Operation
DatagramServer<StaticConfig>::RequestAccessor::get_operation(size_t index) {
  assert(index >= next_index_to_retire_);
  assert(index < next_index_to_prepare_);
  return static_cast<Operation>(
      requests_[index & kParsedRequestMask].operation);
}

template <class StaticConfig>
uint64_t DatagramServer<StaticConfig>::RequestAccessor::get_key_hash(
    size_t index) {
  assert(index >= next_index_to_retire_);
  assert(index < next_index_to_prepare_);
  return requests_[index & kParsedRequestMask].key_hash;
}

template <class StaticConfig>
const char* DatagramServer<StaticConfig>::RequestAccessor::get_key(
    size_t index) {
  assert(index >= next_index_to_retire_);
  assert(index < next_index_to_prepare_);
  return requests_[index & kParsedRequestMask].key;
}

template <class StaticConfig>
size_t DatagramServer<StaticConfig>::RequestAccessor::get_key_length(
    size_t index) {
  assert(index >= next_index_to_retire_);
  assert(index < next_index_to_prepare_);
  return requests_[index & kParsedRequestMask].key_length;
}

template <class StaticConfig>
const char* DatagramServer<StaticConfig>::RequestAccessor::get_value(
    size_t index) {
  assert(index >= next_index_to_retire_);
  assert(index < next_index_to_prepare_);
  return requests_[index & kParsedRequestMask].value;
}

template <class StaticConfig>
size_t DatagramServer<StaticConfig>::RequestAccessor::get_value_length(
    size_t index) {
  assert(index >= next_index_to_retire_);
  assert(index < next_index_to_prepare_);
  return requests_[index & kParsedRequestMask].value_length;
}

template <class StaticConfig>
char* DatagramServer<StaticConfig>::RequestAccessor::get_out_value(
    size_t index) {
  assert(index == next_index_to_retire_);
  (void)index;
  return pending_response_batch_.b.get_out_value(0);
}

template <class StaticConfig>
size_t DatagramServer<StaticConfig>::RequestAccessor::get_out_value_length(
    size_t index) {
  assert(index == next_index_to_retire_);
  (void)index;
  return pending_response_batch_.b.get_max_out_value_length(0);
}

template <class StaticConfig>
void DatagramServer<StaticConfig>::RequestAccessor::set_out_value_length(
    size_t index, size_t len) {
  assert(index == next_index_to_retire_);
  (void)index;
  pending_response_batch_.value_length = len;
}

template <class StaticConfig>
void DatagramServer<StaticConfig>::RequestAccessor::set_result(size_t index,
                                                               Result result) {
  assert(index == next_index_to_retire_);
  (void)index;
  pending_response_batch_.result = result;
}

template <class StaticConfig>
uint32_t DatagramServer<StaticConfig>::RequestAccessor::get_opaque(
    size_t index) {
  assert(index >= next_index_to_retire_);
  assert(index < next_index_to_prepare_);
  return requests_[index & kParsedRequestMask].opaque;
}

template <class StaticConfig>
void DatagramServer<StaticConfig>::RequestAccessor::retire(size_t index) {
  assert(index == next_index_to_retire_);
  uint8_t tenant_id = static_cast<uint8_t>(this->get_key(index)[7]);
  if (StaticConfig::kVerbose)
    printf("lcore %2zu: retire: %zu\n", ::mica::util::lcore.lcore_id(), index);

  pending_response_batch_.b.append_request_no_key_value(
      get_operation(index), pending_response_batch_.result, get_opaque(index),
      get_key_hash(index), 0, pending_response_batch_.value_length);

  bool last_in_packet = requests_[index & kParsedRequestMask].last_in_packet;

  bool flush_response = last_in_packet;
  if (pending_response_batch_.b.get_max_out_key_length() == 0)
    flush_response = true;

  // Flush the current pending response.
  if (flush_response) {
    flush_pending_response_batch(requests_[index & kParsedRequestMask].src_buf);
    make_new_pending_response_batch();
  }

  // Release the request that is no longer used.
  if (last_in_packet)
    server_->network_->release(requests_[index & kParsedRequestMask].src_buf);

  // Update stats.
  worker_stats_->num_operations_done++;
  worker_stats_->tenant_stats_[tenant_id].operations_done++;
  worker_stats_->tenant_stats_[tenant_id].total_key_length += this->get_key_length(index);
  
  Result tmp_result = pending_response_batch_.result;
  if (tmp_result == Result::kSuccess){//set success
    worker_stats_->num_operations_succeeded++;
    worker_stats_->tenant_stats_[tenant_id].operations_succeeded++;
    worker_stats_->tenant_stats_[tenant_id].total_value_length += this->get_value_length(index);
  }
  else if(tmp_result == Result::kGetSuccess){//get success
    worker_stats_->num_operations_succeeded++;
    worker_stats_->num_get_done++;
    worker_stats_->num_get_succeeded++;

    worker_stats_->tenant_stats_[tenant_id].operations_succeeded++;
    worker_stats_->tenant_stats_[tenant_id].get_done++;
    worker_stats_->tenant_stats_[tenant_id].get_succeeded++;
  }else{//get fail
    worker_stats_->num_get_done++;
    worker_stats_->tenant_stats_[tenant_id].get_done++;
  }

  next_index_to_retire_++;
}

template <class StaticConfig>
bool DatagramServer<StaticConfig>::RequestAccessor::parse_request_batch() {
  while (next_packet_index_to_parse_ < packet_count_) {
    // Prefetch the next packet.
    if (static_cast<uint16_t>(next_packet_index_to_parse_ + 1) !=
        packet_count_) {
      auto next_buf =
          (*bufs_)[static_cast<size_t>(next_packet_index_to_parse_ + 1)];
      __builtin_prefetch(next_buf->get_data(), 0, 0);
      __builtin_prefetch(next_buf->get_data() + 64, 0, 0);
      // __builtin_prefetch(next_buf->get_data() + 128, 0, 0);
      // __builtin_prefetch(next_buf->get_data() + 192, 0, 0);
    }

    auto buf = (*bufs_)[next_packet_index_to_parse_];
    next_packet_index_to_parse_++;

    RequestBatchReader<PacketBuffer> r(buf);

    if (!r.is_valid() || !r.is_request()) {
      if (StaticConfig::kVerbose)
        printf("lcore %2zu: prepare_requests: invalid packet\n",
               ::mica::util::lcore.lcore_id());
      continue;
    }

    auto org_next_index_to_prepare = next_index_to_prepare_;

    while (r.find_next()) {
      assert(
          static_cast<size_t>(next_index_to_prepare_ - next_index_to_retire_) <
          kMaxParsedRequestCount);

      auto& pr = requests_[next_index_to_prepare_ & kParsedRequestMask];

      pr.src_buf = buf;
      pr.operation = static_cast<uint8_t>(r.get_operation());
      pr.key_hash = r.get_key_hash();
      pr.key = r.get_key();
      pr.key_length = static_cast<uint8_t>(r.get_key_length());
      pr.value = r.get_value();
      pr.value_length = static_cast<uint32_t>(r.get_value_length());
      pr.opaque = r.get_opaque();
      pr.last_in_packet = 0;

      next_index_to_prepare_++;
    }

    if (org_next_index_to_prepare == next_index_to_prepare_) {
      // An (effectively) empty request batch; release immediately.
      server_->network_->release(buf);
      continue;
    }

    // Release the request batch only after all requests in it have been
    // processed.
    auto last_prepared =
        (next_index_to_prepare_ + kParsedRequestMask) & kParsedRequestMask;
    requests_[last_prepared].last_in_packet = 1;

    // Prepare only one request batch.
    return true;
  }

  return false;
}

template <class StaticConfig>
void DatagramServer<
    StaticConfig>::RequestAccessor::make_new_pending_response_batch() {
  auto buf = server_->network_->allocate();
  assert(buf != nullptr);

  __builtin_prefetch(buf->get_data(), 1, 0);
  __builtin_prefetch(buf->get_data() + 64, 1, 0);
  // __builtin_prefetch(buf->get_data() + 128, 1, 0);
  // __builtin_prefetch(buf->get_data() + 192, 1, 0);

  pending_response_batch_.b = RequestBatchBuilder<PacketBuffer>(buf);
}

template <class StaticConfig>
void DatagramServer<
    StaticConfig>::RequestAccessor::release_pending_response_batch() {
  server_->network_->release(pending_response_batch_.b.get_buffer());
}

template <class StaticConfig>
void DatagramServer<StaticConfig>::RequestAccessor::
    flush_pending_response_batch(const PacketBuffer* src_buf) {
  const RequestBatchReader<PacketBuffer> src_r(src_buf);

  pending_response_batch_.b.set_src_mac_addr(src_r.get_dest_mac_addr());
  pending_response_batch_.b.set_dest_mac_addr(src_r.get_src_mac_addr());

  pending_response_batch_.b.set_src_ipv4_addr(src_r.get_dest_ipv4_addr());
  pending_response_batch_.b.set_dest_ipv4_addr(src_r.get_src_ipv4_addr());

  pending_response_batch_.b.set_src_udp_port(src_r.get_dest_udp_port());
  pending_response_batch_.b.set_dest_udp_port(src_r.get_src_udp_port());

  pending_response_batch_.b.set_response();

  pending_response_batch_.b.finalize();

  if (rx_tx_state_->pending_tx.count == 0)
    rx_tx_state_->pending_tx.oldest_time = now_;

  // Moves the buffer to PendingTX.
  rx_tx_state_->pending_tx.bufs[rx_tx_state_->pending_tx.count] =
      pending_response_batch_.b.get_buffer();
  rx_tx_state_->pending_tx.count++;

  server_->check_pending_tx_full(*rx_tx_state_);
}
}
}

#endif
