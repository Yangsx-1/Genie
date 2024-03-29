#include "mica/datagram/datagram_server.h"
#include "mica/util/lcore.h"
#include "mica/pool/circular_log_impl.h"
#include <sys/time.h>
struct DPDKConfig : public ::mica::network::BasicDPDKConfig {
  static constexpr bool kVerbose = true;
};

struct PartitionsConfig : public ::mica::processor::BasicPartitionsConfig {
  static constexpr bool kSkipPrefetchingForRecentKeyHashes = false;
  // static constexpr bool kVerbose = true;
};

struct DatagramServerConfig
    : public ::mica::datagram::BasicDatagramServerConfig {
  typedef ::mica::processor::Partitions<PartitionsConfig> Processor;
  typedef ::mica::network::DPDK<DPDKConfig> Network;
  // static constexpr bool kVerbose = true;
};

typedef ::mica::datagram::DatagramServer<DatagramServerConfig> Server;

int main(int argc, const char* argv[]) {
  if (argc != 5) {
    printf("%s WRONG PARAMETERS\n", argv[0]);
    return EXIT_FAILURE;
  }
  ::mica::pool::target_hit_ratio = atof(argv[1]);
  uint16_t thread_num = static_cast<uint16_t>(atoi(argv[2]));
  ::mica::pool::size_number = atoi(argv[4]);
  ::mica::pool::input_mth = atof(argv[3]);
  //::mica::processor::input_tenant_count = atoi(argv[3]);
  ::mica::parda::sample_rate_index = 6;
  ::mica::datagram::cpu_sample_index = 1;

  ::mica::util::lcore.pin_thread(0);

  //auto config = ::mica::util::Config::load_file("server.json");
  std::string server_config = "server_" + std::to_string(thread_num) + ".json";
  auto config = ::mica::util::Config::load_file(server_config);

  Server::DirectoryClient dir_client(config.get("dir_client"));

  DatagramServerConfig::Processor::Alloc alloc(config.get("alloc"));
  DatagramServerConfig::Processor processor(config.get("processor"), &alloc);

  DatagramServerConfig::Network network(config.get("network"));
  network.start();

  Server server(config.get("server"), &processor, &network, &dir_client);
  server.run();

  network.stop();

  return EXIT_SUCCESS;
}
