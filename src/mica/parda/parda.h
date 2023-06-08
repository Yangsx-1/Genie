#ifndef _PARDA_H
#define _PARDA_H

#include "splay.h"
#include<cstdint>
#include<cstring>

#define DEFAULT_NBUCKETS 1000000
#define B_OVFL   nbuckets
#define B_INF    nbuckets+1
#define SLEN 20

namespace mica{
namespace parda{

const size_t item_number = 4;
class STable{
 public:
  STable();

  struct hash_item{
    uint64_t keyhash;
    uint32_t last_time;
    uint32_t total_access_time;
  };

  struct Bucket {
    struct hash_item item_vec[item_number];
  };

  //static uint64_t make_item_vec(uint16_t tag, uint64_t item_offset);
  uint32_t calc_bucket_index(uint64_t keyhash) const;
  size_t get_empty_or_oldest(const Bucket* curr_bucket);
  size_t find_same_keyhash(uint64_t keyhash, const Bucket* curr_bucket);
  void erase_item(uint64_t keyhash, size_t bucket_index);
  void add_item(uint64_t keyhash, uint64_t curr_time, Bucket* curr_bucket, size_t item_index);
  //void cleanup_bucket(Bucket* bucket);
  //void cleanup_all();
  //size_t size();

  uint32_t num_buckets_;
  uint32_t num_buckets_mask_;
  struct Bucket* buckets_;
  // Padding to separate static and dynamic fields.
  char padding0[128];
};

const int nbuckets = DEFAULT_NBUCKETS;

typedef struct parda_data_t {
    STable* table;
    Tree* root;
    uint32_t* histogram;
    uint64_t n;
    parda_data_t() {
        table = new STable;
        root = NULL;
        histogram = new uint32_t[nbuckets + 2];
        memset(histogram, 0, (nbuckets + 2) * sizeof(uint32_t));
        n = 0;
    }
};

static inline void process_one_access(uint64_t keyhash, parda_data_t* pdt);
uint64_t get_pred_size(uint32_t* histogram, uint64_t sample_rate, double target, uint64_t item_size);
void pardaStatistics(uint64_t keyhash, parda_data_t* pdt);
double theta_calculation(STable* table);

}
}

#endif