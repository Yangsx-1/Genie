#pragma once
#ifndef MICA_POOL_CIRCULAR_LOG_H_
#define MICA_POOL_CIRCULAR_LOG_H_

#include "mica/pool/pool.h"
#include "mica/util/config.h"
#include "mica/util/barrier.h"
#include "mica/util/roundup.h"
#include "mica/util/safe_cast.h"
#include "mica/alloc/hugetlbfs_shm.h"

// Configuration file entries for CircularLog:
//
//  * size (integer): The total size in bytes to use.
//  * concurrent_read (bool): If true, enable concurrent reads by multiple
//    threads.
//  * concurrent_write (bool): If true, enable concurrent writes by multiple
//    threads.
//  * numa_node (integer): The ID of the NUMA node to store the data.

namespace mica {
namespace pool {
struct BasicCircularLogConfig {
  // Support concurrent access.  The actual concurrent access is enabled by
  // concurrent_read and concurrent_write in the configuration.
  static constexpr bool kConcurrent = true;

  // Be verbose.
  static constexpr bool kVerbose = false;

  // The memory allocator type.
  typedef ::mica::alloc::HugeTLBFS_SHM Alloc;
};

class CircularLogTag {};

template <class StaticConfig = BasicCircularLogConfig>
class CircularLog : public PoolInterface {
 public:
  typedef CircularLogTag Tag;

  typedef typename StaticConfig::Alloc Alloc;

  CircularLog(const ::mica::util::Config& config, Alloc* alloc);
  ~CircularLog();

  typedef uint64_t Offset;
  typedef uint8_t WrapAround;
  static constexpr size_t kOffsetWidth = 40;//xhj
  static constexpr Offset kInsufficientSpace =
      std::numeric_limits<Offset>::max();
  static constexpr WrapAround kMaxWrapAroundNumber = 
      std::numeric_limits<WrapAround>::max();
 /*
 * @Author: Huijuan Xiao
 * @Description:  TODO:add api to calculate the memory size of the log and to modify the corresponding variables.
 */
  uint64_t eaet();//calculate the mrc
  bool resize_log();//update parameters
  

  void lock();
  void unlock();

  void reset();
  Offset allocate(size_t size);
  void release(Offset offset);

  void prefetch_item(Offset offset) const;

  char* get_item(Offset offset);
  const char* get_item(Offset offset) const;

  char* get_item(Offset offset, std::size_t* out_len);
  const char* get_item(Offset offset, std::size_t* out_len) const;

  // CircularLogTag specific
  //bool is_valid(Offset offset) const;
  bool is_valid(WrapAround item_wrap_number, Offset offset) const;
  //uint64_t get_head() const;
  uint64_t get_tail() const;
  uint64_t get_mask() const;
  uint64_t get_size() const;
  void set_size(uint64_t size);
  uint64_t get_tail_for_cleanup() const;

  uint64_t get_new_log_size() const;
  void set_new_log_size(uint64_t new_log_size);

  uint8_t get_wrap_around_number() const;
  void set_wrap_around_number(uint8_t wrap_around_number);

  uint64_t get_mth_thres() const;
  void set_mth_thres();

  uint64_t get_ma_thres() const;
  void set_ma_thres();

  void update_log_parameter();
  void update_log_size();

 private:
  //void check_invariants() const;

  void pop_head();
  uint64_t push_tail(uint64_t item_size);

  static constexpr size_t kMinimumSize = 2 * 1048576;//2MB
  static constexpr size_t kAdjustMinimumSize = 32 * 1048576;//32MB
  static constexpr size_t kWrapAroundSize = 2 * 1048576;//2MB 
  static constexpr size_t kOffsetMask = (size_t(1) << kOffsetWidth) - 1;
  double mth_thres = 0.5;// threshold for appro-lru
  double ma_thres = 0.5;// threshold for log size adjustment

  struct Item {
    uint64_t size;
    char data[0];
  };

  ::mica::util::Config config_;
  Alloc* alloc_;

  uint8_t concurrent_access_mode_;
  char* data_;

  uint64_t mask_;  // size - 1; this mask is used only when converting the
                   // offset to the actual location of the item

  // Padding to separate static and dynamic fields.
  char padding0[128];

  uint8_t lock_;
  /**/
  uint8_t wrap_around_number_;//8 bit for wrap around number
  /*
  uint8_t memory_adjustment_flag_;//8 bit for flag the memory adjustment
  uint8_t log_size_calculation_flag_;//8 bit for flag the log size calculation
  */
  uint8_t log_resize_flag;//8 bit to flag the log size calculation and memory adjustment
  uint64_t size_;  // a power of two
  uint64_t new_log_size_;
  uint64_t mth_thres_;
  uint64_t ma_thres_;
  size_t entry_id_;

  // internally, pool uses full 64-bit numbers for head and tail
  // however, the valid range for item_offset is limited to
  // (kOffsetMask + 1)
  // we resolve this inconsistency by applying MEHCACHED_ITEM_OFFSET_MASK mask
  // whenever returning the offset to the outside or using a masked offset
  // given from the outside
  uint64_t head_;                 // start offset of items
  uint64_t tail_;                 // end offset of items
  uint64_t tail_for_cleanup;
} __attribute__((aligned(128)));  // To prevent false sharing caused by
                                  // adjacent cacheline prefetching.
}
}

#include "mica/pool/circular_log_impl.h"

#endif