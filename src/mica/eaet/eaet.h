#ifndef _EAET_H
#define _EAET_H

#include <stdlib.h>
#include <cstring>
#include <unordered_map>
namespace mica {
namespace eaet {
const size_t item_number = 2;
class STable {
 public:
  // ltable_impl/init.h
  STable();

  struct aet_item {
    uint64_t keyhash;
    uint64_t last_time;
    uint64_t total_access_time;
    uint64_t total_reuse_time;
  };

  struct Bucket {
    struct aet_item item_vec[item_number];
  };

  //static uint64_t make_item_vec(uint16_t tag, uint64_t item_offset);
  uint32_t calc_bucket_index(uint64_t keyhash) const;
  size_t get_empty_or_oldest(const Bucket* curr_bucket);
  size_t find_same_keyhash(uint64_t keyhash, const Bucket* curr_bucket);
  void erase_item(uint64_t keyhash, size_t bucket_index);
  void add_item(uint64_t keyhash, uint64_t last_time, uint64_t curr_time,
                Bucket* curr_bucket);
  //void cleanup_bucket(Bucket* bucket);
  //void cleanup_all();
  //size_t size();

  uint32_t num_buckets_;
  uint32_t num_buckets_mask_;
  struct Bucket* buckets_;
  // Padding to separate static and dynamic fields.
  char padding0[128];
};

#define rth_RTD_LENGTH 10000
class rthRec {
 public:
  double* mrc;
  uint64_t n;  // 用来记录访问的字节总数
  int m;       //生成随机数，用来random sample

  double rtd[rth_RTD_LENGTH];  // reuse time distribution, rtd[0] for cold miss
  uint64_t rtd_del[rth_RTD_LENGTH];
  uint64_t read_rtd[rth_RTD_LENGTH];
  STable timehash;
  //std::unordered_map<uint64_t, std::pair<uint64_t, uint64_t>> statistichash;
  // struct rrecord{
  //   uint64_t last_time;
  //   uint64_t access_time;
  //   uint64_t total_reuse;

  //   rrecord() : last_time(0), access_time(0), total_reuse(0) {}
  // };
  // uint64_t op_n;
  // std::unordered_map<uint64_t, rrecord> get_reuse_map;
  // std::unordered_map<uint64_t, rrecord> set_reuse_map;

  rthRec() {
    mrc = nullptr;
    n = 0;
    m = 0;
    memset(rtd, 0, rth_RTD_LENGTH * sizeof(double));
    memset(rtd_del, 0, rth_RTD_LENGTH * sizeof(uint64_t));
    memset(read_rtd, 0, rth_RTD_LENGTH * sizeof(uint64_t));
  };
};

uint64_t domain_value_to_index(uint64_t value);
uint64_t rthGet(rthRec* rth, uint64_t key, uint64_t size,
                uint64_t last_access_time);
uint64_t rthUpdate(rthRec* rth, uint64_t key, uint64_t ori_size,
                   uint64_t cur_size, uint64_t last_access_time);
void rthCalcMRC(rthRec* rth, uint64_t tot_memory, uint64_t memory_step);
void rthClear(rthRec* rth);
uint64_t get_eaet_size(rthRec* rth, uint64_t total_memory, uint64_t step,
                       double hit_ratio);
bool set_sampling(uint64_t keyhash);
void setStatistics(rthRec* rth, uint64_t key, uint64_t input_size, bool isGet);
uint64_t supplement_of_stage_one(rthRec* rth, uint64_t tmpsize,
                                 size_t tenant_id);
uint64_t supplement_of_stage_two(rthRec* rth, uint64_t tmpsize,
                                 size_t tenant_id, double* out_theta);
//void ratio_calculation(const rthRec *rth, double target, uint64_t eaet_size);
}  // namespace eaet
}  // namespace mica

#endif