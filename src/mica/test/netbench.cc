#include "mica/datagram/datagram_client.h"
#include "mica/util/lcore.h"
#include "mica/util/hash.h"
#include "mica/util/zipf.h"
#include<stdlib.h>
#include "mica/util/highzipf.h"
#include<string>
#include<fstream>
char* genRandomString(char string[],int length)
{
    string[length - 1] = '\0';
    return string;
}

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
} __attribute__((aligned(128)));

double get_ratio = 0;
//uint8_t key_mask = uint64_t(1) << 1 - 1;
int tenant_count = 2;
int max_tenant_count = 16;
int key_size = 0;
int value_size = 0;
int item_number = 0;

int worker_proc(void* arg) {
  auto args = reinterpret_cast<Args*>(arg);

  Client& client = *args->client;

  ::mica::util::lcore.pin_thread(args->lcore_id);

  printf("worker running on lcore %" PRIu16 "\n", args->lcore_id);

  client.probe_reachability();
  //printf("probe finished on lcore %" PRIu16 "\n", args->lcore_id);

  ResponseHandler rh;

  size_t num_items =  item_number * 1048576;
  //size_t num_items = 16 * 1048576 / max_tenant_count;
  //size_t num_items =  192 * 1048576L;
  //num_items = num_items * 40 / (24 + key_size + value_size);
  //num_items /= tenant_count;

  /*variables for preload*/
  uint64_t preload_count = 0;
  uint64_t preload_cnt = 10000000;

  //double get_ratio = 0.5;

  uint32_t get_threshold = (uint32_t)(get_ratio * (double)((uint32_t)-1));

  ::mica::util::Rand op_type_rand(static_cast<uint64_t>(args->lcore_id) + 1000);
  ::mica::util::ZipfGen zg(num_items, args->zipf_theta,
                           static_cast<uint64_t>(args->lcore_id));
  struct highlySkewZipf hzg;
  srand(args->lcore_id);
  NewZipfHighlySkew(&hzg, args->zipf_theta, 1, num_items, args->lcore_id);
  ::mica::util::Stopwatch sw;
  sw.init_start();
  sw.init_end();

  uint8_t tenant_id = args->lcore_id;
  tenant_id = 0;
  uint64_t tenant_id_mask = ((uint64_t)tenant_id) << 56;
  uint64_t key_length = key_size;
  uint64_t value_length = value_size;
  // if(tenant_id % 2 == 0){
  //   key_length = 8;
  //   value_length = 8;
  // }

  uint64_t key_i;
  uint64_t key_hash;
  char* key = new char[key_length];
  memset(key, 128, sizeof(char)*key_length);

  
  uint64_t value_i;
  char* value = new char[value_length];
  memset(value, 128, sizeof(char)*value_length);

  uint64_t last_handle_response_time = sw.now();
  // Check the response after sending some requests.
  // Ideally, packets per batch for both RX and TX should be similar.
  uint64_t response_check_interval = 20 * sw.c_1_usec();

  uint64_t seq = 0;
  uint64_t op_count = 0;
  uint64_t max_op_count = 6 * 1000000;
  uint64_t start_time = sw.now();
  bool zg_range_change = false;
  bool item_size_change = false;
  bool get_change = false;
  bool theta_change = false;

  while (true) {

    // Determine the operation type.
    uint32_t op_r = op_type_rand.next_u32();
    bool is_get = op_r <= get_threshold;

    /*change the op type for preload*/
    #if defined(PRELOAD)
    if(preload_count < preload_cnt){
      is_get = false;
      preload_count++;
    }
    #endif

    // Generate the key.
    //tenant_id = op_r % max_tenant_count;
    //tenant_id = 0;
    if(args->zipf_theta < 1) key_i = zg.next();
    else key_i = nextUint64(&hzg);
    
    uint64_t* key_ptr = reinterpret_cast<uint64_t*>(key);
    *key_ptr = key_i;
    //tenant_id = op_r % tenant_count;
    //tenant_id_mask = ((uint64_t)tenant_id) << 56;
    *key_ptr |= tenant_id_mask;
    //key[7] = tenant_id;
    //printf("x%"PRIx64"\n", *key_ptr);
    key_hash = hash(key, key_length);

    /*incremental key for preload*/
    
    #if defined(PRELOAD)
    if(preload_count < preload_cnt){
      key_i = preload_count;
    }
    #endif

    uint64_t now = sw.now();
    while (!client.can_request(key_hash) ||
           sw.diff_in_cycles(now, last_handle_response_time) >=
               response_check_interval) {
      last_handle_response_time = now;
      client.handle_response(rh);
    }

    if (is_get)
      client.get(key_hash, key, key_length);
    else {
      value_i = seq;
      uint64_t* value_ptr = reinterpret_cast<uint64_t*>(value);
      *value_ptr = value_i;
      //printf("value length=%d, sizeof(value)=%d\n", value_length, sizeof(value));
      client.set(key_hash, key, key_length, value, value_length, true);
    }

    seq++;
    op_count++;

  }

  delete[] key;
  delete[] value;

  return 0;
}

int main(int argc, const char* argv[]) {
  if (argc != 6) {
    printf("%s NEED PARAMETER\n", argv[0]);
    return EXIT_FAILURE;
  }

  double zipf_theta = atof(argv[1]);
  get_ratio = atof(argv[2]);
  key_size = atoi(argv[3]);
  value_size = atoi(argv[4]);
  item_number = atoi(argv[5]);
  //tenant_count = atoi(argv[6]);

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
  }
  uint16_t my_master_lcore = 0;
  for (uint16_t lcore_id = my_master_lcore + 1; lcore_id < lcore_count; lcore_id++) {
    if (!rte_lcore_is_enabled(static_cast<uint8_t>(lcore_id))) continue;
    rte_eal_remote_launch(worker_proc, &args[lcore_id], lcore_id);
  }
  worker_proc(&args[my_master_lcore]);

  network.stop();

  return EXIT_SUCCESS;
}
