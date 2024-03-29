#pragma once
#ifndef MICA_POOL_CIRCULAR_LOG_H_
#define MICA_POOL_CIRCULAR_LOG_H_

#include "mica/pool/pool.h"
#include "mica/util/config.h"
#include "mica/util/barrier.h"
#include "mica/util/roundup.h"
#include "mica/util/safe_cast.h"
#include "mica/alloc/hugetlbfs_shm.h"
#include "mica/parda/parda.h"
#include "mica/util/stopwatch.h"
#include <atomic>

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

  CircularLog(const ::mica::util::Config& config, Alloc* alloc,
              uint8_t tenant_id);
  ~CircularLog();

  typedef uint64_t Offset;
  typedef uint16_t WrapAround;
  static constexpr size_t kOffsetWidth = 32;  //xhj
  static constexpr Offset kInsufficientSpace =
      std::numeric_limits<Offset>::max();
  static constexpr WrapAround kMaxWrapAroundNumber =
      std::numeric_limits<WrapAround>::max();
  /*
 * @Author: Huijuan Xiao
 * @Description:  TODO:add api to calculate the memory size of the log and to modify the corresponding variables.
 */

  uint64_t eaet();      //calculate the mrc
  void log_resizing();  //update parameters
  uint64_t compute_new_log_size(double diff_time);
  uint64_t memory_estimation(size_t local_id, uint64_t item_size);
  uint64_t fine_grained_adjustment(double diff_time);
  double theta_calculation();
  int stage_index = 0;
  uint64_t init_time = 0;

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

  uint16_t get_wrap_around_number() const;
  void set_wrap_around_number(uint16_t wrap_around_number);

  uint64_t get_mth_thres() const;
  void set_mth_thres();

  uint64_t get_ma_thres() const;
  void set_ma_thres();

  void update_log_parameter();
  void update_log_size();
  uint32_t get_poolstruct_item_size();

  ::mica::parda::parda_data_t* parda;
  volatile int parda_calculation;  //0不需要计算//1需要计算//2计算完毕
  bool sample_flag;                //是否需要sample

 private:
  //void check_invariants() const;

  void pop_head();
  uint64_t push_tail(uint64_t item_size);

  static constexpr size_t kMinimumSize = 2 * 1048576;         //2MB
  static constexpr size_t kAdjustMinimumSize = 16 * 1048576;  //16MB
  static constexpr size_t kWrapAroundSize = 2 * 1048576;      //2MB
  static constexpr size_t kOffsetMask = (size_t(1) << kOffsetWidth) - 1;
  double mth_thres = 0.5;  // threshold for appro-lru
  double ma_thres = 0.5;   // threshold for log size adjustment

  struct Item {
    uint64_t size;
    char data[0];
  };

  ::mica::util::Config config_;
  Alloc* alloc_;
  uint8_t tenant_id_;
  uint8_t concurrent_access_mode_;
  char* data_;

  uint64_t mask_;  // size - 1; this mask is used only when converting the
                   // offset to the actual location of the item

  // Padding to separate static and dynamic fields.
  char padding0[128];

  uint8_t lock_;
  /**/
  volatile uint16_t wrap_around_number_;  //8 bit for wrap around number
  /*
  uint8_t memory_adjustment_flag_;//8 bit for flag the memory adjustment
  uint8_t log_size_calculation_flag_;//8 bit for flag the log size calculation
  */

  uint64_t size_;  // a power of two
  //uint64_t init_size;
  static const uint64_t max_virtual_space_size = uint64_t(1) << 32;  //4G
  uint64_t new_log_size_;
  uint64_t mth_thres_;
  uint64_t ma_thres_;
  size_t entry_id_;

  double wait_interval;            //调整等待时间
  double next_adjust_time;         //下次调整时间
  uint64_t last_log_size;          //上次计算所得size
  uint64_t firsttime, secondtime;  //时间控制
  ::mica::util::Stopwatch timewatcher;
  double log_adjust_interval;  //log调整间隔
  double next_shrink_time = 0;

  // internally, pool uses full 64-bit numbers for head and tail
  // however, the valid range for item_offset is limited to
  // (kOffsetMask + 1)
  // we resolve this inconsistency by applying MEHCACHED_ITEM_OFFSET_MASK mask
  // whenever returning the offset to the outside or using a masked offset
  // given from the outside
  uint64_t head_;           // start offset of items
  volatile uint64_t tail_;  // end offset of items
  uint64_t tail_for_cleanup;
};  // __attribute__((aligned(128)));  // To prevent false sharing caused by
    // adjacent cacheline prefetching.
}  // namespace pool
}  // namespace mica

#include "mica/pool/circular_log_impl.h"

#endif
