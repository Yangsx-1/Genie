#include "mica/table/ltable.h"
#include "mica/util/hash.h"
#include "mica/util/lcore.h"
#include "mica/util/zipf.h"
#include "sys/time.h"
#include <unistd.h>
#include<thread>

struct LTableConfig : public ::mica::table::BasicLossyLTableConfig {
  // struct LTableConfig : public ::mica::table::BasicLosslessLTableConfig {
  static constexpr bool kVerbose = false;
  static constexpr bool kCollectStats = true;
};

typedef ::mica::table::LTable<LTableConfig> Table;
typedef ::mica::table::Result Result;

template <typename T>
static uint64_t hash(const T* key, size_t key_length) {
  return ::mica::util::hash(key, key_length);
}

void clean_up_worker(Table* table){
  ::mica::util::lcore.pin_thread(0);
  printf("clean up worker running on lcore %" PRIu16 "\n", 0);
  uint64_t bucket_mask = table->get_bucket_mask();
  uint64_t bucket_number = bucket_mask + 1;
  uint32_t bucket_index = 0;
  const uint32_t clean_number = 32768;
  
  while(true){
    sleep(1);
    table->cleanup_specified_bucket(bucket_index, clean_number);
    bucket_index += clean_number;
    bucket_index &= bucket_mask;
    table->print_stats();
  }
  
  printf("clean up worker now do nothing!\n");
  return;
}

static int clean_up_worker_proc_wrapper(Table* table) {
  clean_up_worker(table);
  return 0;
}

int main(){
    ::mica::util::lcore.pin_thread(0);
    auto config = ::mica::util::Config::load_file("test_clean_table.json");

    LTableConfig::Alloc alloc(config.get("alloc"));
    uint64_t msize = 1024 * 1024;
    Table table(config.get("table"), &alloc, 128 * msize);
    std::thread clean_thread(clean_up_worker_proc_wrapper, &table);

    size_t num_items =  16 * 1048576;
    double zipf_theta = 0;
    double get_ratio = 0.5;
    uint32_t get_threshold = (uint32_t)(get_ratio * (double)((uint32_t)-1));

    ::mica::util::Rand op_type_rand(static_cast<uint64_t>(0) + 1000);
    ::mica::util::ZipfGen zg(num_items, zipf_theta,
                           static_cast<uint64_t>(0));
    uint64_t key_length = 8;
    uint64_t value_length = 8;
    uint64_t key_i;
    uint64_t key_hash;
    char* key = new char[key_length];
    memset(key, 128, sizeof(char)*key_length);
    uint64_t value_i;
    char* value = new char[value_length];
    memset(value, 128, sizeof(char)*value_length);
    uint64_t seq = 0;
    //uint64_t op_count = 0;
    while(true){
        uint32_t op_r = op_type_rand.next_u32();
        bool is_get = op_r <= get_threshold;
        key_i = zg.next();
        uint64_t* key_ptr = reinterpret_cast<uint64_t*>(key);
        *key_ptr = key_i;
        key[7] = 0;
        //printf("x%"PRIx64"\n", *key_ptr);
        key_hash = hash(key, key_length);
        if(is_get){
            size_t out_value_length = 0;
            Result out_result = table.get(key_hash, key, key_length, value, value_length,
                                                    &out_value_length, true);
        }else{
            value_i = seq;
            Result out_result =
                table.set(key_hash, key, key_length, value, value_length, true);
        }
        seq++;
        //op_count++;
        //if(op_count % (1024 * 1024 * 128) == 0) table.print_stats();
    }

    return 0;
}