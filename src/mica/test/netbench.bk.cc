#include "mica/datagram/datagram_client.h"
#include "mica/util/lcore.h"
#include "mica/util/hash.h"
#include "mica/util/zipf.h"

typedef ::mica::alloc::HugeTLBFS_SHM Alloc;

struct DPDKConfig : public ::mica::network::BasicDPDKConfig {
  static constexpr bool kVerbose = true;
};

struct DatagramClientConfig
    : public ::mica::datagram::BasicDatagramClientConfig {
  typedef ::mica::network::DPDK<DPDKConfig> Network;
  // static constexpr bool kSkipRX = true;
  // static constexpr bool kIgnoreServerPartition = true;
  // static constexpr bool kVerbose = true;
};

typedef ::mica::datagram::DatagramClient<DatagramClientConfig> Client;

typedef ::mica::table::Result Result;

template <typename T>
static uint64_t hash(const T* key, size_t key_length) {
  return ::mica::util::hash(key, key_length);
}

class ResponseHandler
    : public ::mica::datagram::ResponseHandlerInterface<Client> {
 public:
  void handle(Client::RequestDescriptor rd, Result result, const char* value,
              size_t value_length, const Argument& arg) {
    (void)rd;
    (void)result;
    (void)value;
    (void)value_length;
    (void)arg;
  }
};

struct Args {
  uint16_t lcore_id;
  ::mica::util::Config* config;
  Alloc* alloc;
  Client* client;
  double zipf_theta;
  double get_ratio;  //xhj
  int key_size;
  int value_size;
} __attribute__((aligned(128)));

int worker_proc(void* arg) {
  auto args = reinterpret_cast<Args*>(arg);

  Client& client = *args->client;

  ::mica::util::lcore.pin_thread(args->lcore_id);

  printf("worker running on lcore %" PRIu16 "\n", args->lcore_id);

  client.probe_reachability();
  //printf("probe finished on lcore %" PRIu16 "\n", args->lcore_id);//xhj

  ResponseHandler rh;

  size_t num_items = 192 * 1048576;

  // double get_ratio = 0.95;
  double get_ratio = args->get_ratio;  //xhj
  // int key_size = args->key_size;
  // int value_size = args->value_size;

  uint32_t get_threshold = (uint32_t)(get_ratio * (double)((uint32_t)-1));

  ::mica::util::Rand op_type_rand(static_cast<uint64_t>(args->lcore_id) + 1000);
  ::mica::util::ZipfGen zg(num_items, args->zipf_theta,
                           static_cast<uint64_t>(args->lcore_id));
  ::mica::util::Stopwatch sw;
  sw.init_start();
  sw.init_end();

  uint64_t key_i;
  uint64_t key_hash;
  size_t key_length = sizeof(key_i);                                  //8 byte
  size_t specified_key_length = static_cast<size_t>(args->key_size);  //xhj
  /*
  TODO: add key_padding to the append_request function
  */
  char* key = reinterpret_cast<char*>(&key_i);

  uint64_t value_i;
  size_t value_length = sizeof(value_i);  //8 byte
  size_t specified_value_length = static_cast<size_t>(args->value_size);  //xhj
  char* value = reinterpret_cast<char*>(&value_i);

  bool use_noop = false;
  // bool use_noop = true;

  uint64_t last_handle_response_time = sw.now();
  // Check the response after sending some requests.
  // Ideally, packets per batch for both RX and TX should be similar.
  uint64_t response_check_interval = 20 * sw.c_1_usec();

  uint64_t seq = 0;
  /*
 * @Author: Huijuan Xiao
 * @Description: TODO: test the filter
 */

  while (true) {
    // Determine the operation type.
    uint32_t op_r = op_type_rand.next_u32();
    bool is_get = op_r <= get_threshold;

    // Generate the key.
    key_i = zg.next();
    key_hash = hash(key, key_length);

    uint64_t now = sw.now();
    while (!client.can_request(key_hash) ||
           sw.diff_in_cycles(now, last_handle_response_time) >=
               response_check_interval) {
      last_handle_response_time = now;
      client.handle_response(rh);
    }

    /*
    In fact, the key and the value are both 8 bytes in the original version of mica.
    To realize multi-tenant serverless KVS, we modify the key and value size so that 
    we could get the data of resource model. 
    specified_key_length: from argv
    specified_value_length: from argv
    We modify these parameters to get() and set(), and memcpy the paddings in append_request() function.
    */
    if (is_get)
      //client.get(key_hash, key, key_length);
      client.get(key_hash, key, specified_key_length);
    else {
      value_i = seq;
      //client.set(key_hash, key, key_length, value, value_length, true);
      client.set(key_hash, key, specified_key_length, value,
                 specified_value_length, true);
    }

    seq++;
  }
  sleep(2);  //xhj  second
  return 0;
}

int main(int argc, const char* argv[]) {
  /*get_ratio,key_size,value_size
  TODO:adjust the number of cores to adjust to the server cores
  In order to get the highest performance data from the server 
  */
  if (argc != 5) {
    printf("%s ZIPF-THETA GET-RATIO KEY-SIZE VALUE-SIZE\n", argv[0]);
    return EXIT_FAILURE;
  }

  double zipf_theta = atof(argv[1]);
  double get_ratio = atof(argv[2]);
  int key_size = atoi(argv[3]);
  int value_size = atoi(argv[4]);

  ::mica::util::lcore.pin_thread(0);

  auto config = ::mica::util::Config::load_file("netbench.json");

  Alloc alloc(config.get("alloc"));

  DatagramClientConfig::Network network(config.get("network"));
  network.start();

  Client::DirectoryClient dir_client(config.get("dir_client"));

  Client client(config.get("client"), &network, &dir_client);
  client.discover_servers();

  uint16_t lcore_count =
      static_cast<uint16_t>(::mica::util::lcore.lcore_count());

  std::vector<Args> args(lcore_count);
  for (uint16_t lcore_id = 0; lcore_id < lcore_count; lcore_id++) {
    args[lcore_id].lcore_id = lcore_id;
    args[lcore_id].config = &config;
    args[lcore_id].alloc = &alloc;
    args[lcore_id].client = &client;
    args[lcore_id].zipf_theta = zipf_theta;
    args[lcore_id].get_ratio = get_ratio;
    args[lcore_id].key_size = key_size;
    args[lcore_id].value_size = value_size;
  }

  for (uint16_t lcore_id = 1; lcore_id < lcore_count; lcore_id++) {
    if (!rte_lcore_is_enabled(static_cast<uint8_t>(lcore_id))) continue;
    rte_eal_remote_launch(worker_proc, &args[lcore_id], lcore_id);
  }
  worker_proc(&args[0]);

  network.stop();

  return EXIT_SUCCESS;
}
