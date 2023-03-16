#ifndef _EAET_H
#define _EAET_H

#include<bits/stdint-uintn.h>
#include<unordered_map>
#include<unordered_set>
#include<cstring>

namespace mica{
namespace eaet{
const size_t item_number = 2;
class STable{
 public:
  // ltable_impl/init.h
  STable();

  struct aet_item{
    uint64_t keyhash;
    uint64_t last_time;//8bit tenant id
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
  void add_item(uint64_t keyhash, uint64_t last_time, uint64_t curr_time, Bucket* curr_bucket);
  //void cleanup_bucket(Bucket* bucket);
  //void cleanup_all();
  size_t size();

  uint32_t num_buckets_;
  uint32_t num_buckets_mask_;
  struct Bucket* buckets_;
  // Padding to separate static and dynamic fields.
  char padding0[128];
};  

#define rth_RTD_LENGTH 10000
class rthRec
{
  public:
    double* mrc;
    uint64_t n; // 用来记录访问的字节总数
    int m; //生成随机数，用来random sample

    double rtd[rth_RTD_LENGTH]; // reuse time distribution, rtd[0] for cold miss
    uint64_t rtd_del[rth_RTD_LENGTH];
    uint64_t read_rtd[rth_RTD_LENGTH];
    STable timehash;
    //std::unordered_map<uint64_t, std::pair<uint64_t, uint64_t>> statistichash;

    rthRec(){
      mrc = nullptr;
      n = 0;
      m = 0;
      memset(rtd, 0, rth_RTD_LENGTH * sizeof(double));
	    memset(rtd_del, 0, rth_RTD_LENGTH * sizeof(uint64_t));
	    memset(read_rtd, 0, rth_RTD_LENGTH * sizeof(uint64_t));
    };
};

uint64_t maxer(uint64_t a, uint64_t b);
uint64_t domain_value_to_index(uint64_t value);
uint64_t rthGet(rthRec *rth, uint64_t key, uint64_t size, uint64_t last_access_time);
uint64_t rthUpdate(rthRec *rth, uint64_t key, uint64_t ori_size, uint64_t cur_size, uint64_t last_access_time);
void rthCalcMRC(rthRec *rth, uint64_t tot_memory, uint64_t PGAP);
void rthClear(rthRec *rth);
uint64_t getsize(rthRec *rth, uint64_t tot_memory, uint64_t PGAP, double hit_ratio);
bool if_need_sample(uint64_t keyhash);
void setStatistics(rthRec *rth, uint64_t key, uint64_t input_size, bool isGet);
uint64_t compute_bias(rthRec *rth, uint64_t tmpsize, double target_hit_ratio, size_t tenant_id);
uint64_t compute_bias_with_theta(rthRec *rth, uint64_t tmpsize, double target_hit_ratio, size_t tenant_id);
void ratio_compute(const rthRec *rth, double target, uint64_t eaet_size);
}
}


#endif