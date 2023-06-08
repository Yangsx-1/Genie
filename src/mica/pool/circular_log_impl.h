#pragma once
#ifndef MICA_POOL_CIRCULAR_LOG_IMPL_H_
#define MICA_POOL_CIRCULAR_LOG_IMPL_H_
#ifndef EREW
#define EREW
#include "mica/parda/parda_impl.h"
#include "mica/util/lcore.h"
#include<sys/time.h>
#include<cmath>

#define YELLOW       "\033[1;33m"
#define NONE         "\033[m"
#define RED          "\033[0;32;31m"

namespace mica {
namespace pool {
double target_hit_ratio = 0;
const size_t kMaxTenantCount = 16;
double hit_rate_diff[kMaxTenantCount] = {0};
double last_hit_rate[kMaxTenantCount] = {0};

template <class StaticConfig>
CircularLog<StaticConfig>::CircularLog(const ::mica::util::Config& config,
                                       Alloc* alloc, uint8_t tenant_id)
    : config_(config), alloc_(alloc),  tenant_id_(tenant_id) {
  uint64_t size = config.get("size").get_uint64();
  bool concurrent_read = config.get("concurrent_read").get_bool();
  bool concurrent_write = config.get("concurrent_write").get_bool();
  size_t numa_node = config.get("numa_node").get_uint64();

  #ifdef EREW
  concurrent_read = false;
  concurrent_write = false;
  #endif


  if (size < kMinimumSize) size = kMinimumSize;//2MB

  size = Alloc::roundup(size);
  size = ::mica::util::next_power_of_two(size);
  assert(size <= (kOffsetMask >>
                  1));  // ">> 1" is for sufficient garbage collection time  

  assert(size == Alloc::roundup(size));

  if (!concurrent_read)
    concurrent_access_mode_ = 0;
  else if (!concurrent_write)
    concurrent_access_mode_ = 1;
  else
    concurrent_access_mode_ = 2;//cocurrent read and cocurrent write

  assert(concurrent_access_mode_ == 0);
  //init_size = size;
  size_ = size / 4;
  //printf("tenant%d init size=%lu\n", tenant_id_, size_);
  mask_ = size - 1;

  lock_ = 0;
  head_ = tail_ = 0;
  new_log_size_ = size_;
  tail_for_cleanup = 0;
  wrap_around_number_ = 0;

  timewatcher.init_start();
  wait_interval = 10;//interval between two adjustments
  srand(timewatcher.now());
  log_adjust_interval = 5 + rand() % 60 / 60.0;
  printf("time interval=%lf\n", log_adjust_interval);
  next_adjust_time = log_adjust_interval + wait_interval;
  timewatcher.init_end();
  firsttime = timewatcher.now();

  parda = new ::mica::parda::parda_data_t();
  parda_calculation = 0;
  sample_flag = true;
  /*
  memory_adjustment_flag_ = 0;
  log_size_calculation_flag_ = 0;
  */
  
  mth_thres_ = 
    static_cast<uint64_t>(static_cast<double>(size_) * mth_thres);//hello
  ma_thres_ = 
    static_cast<uint64_t>(static_cast<double>(size_) * ma_thres);

  //size_t alloc_id = alloc_->alloc(size + kWrapAroundSize, numa_node);
  size_t alloc_id = alloc_->alloc(size_, numa_node);
  entry_id_ = alloc_id;
  if (alloc_id == Alloc::kInvalidId) {
    fprintf(stderr, "error: failed to allocate memory\n");
    assert(false);
    return;
  }
  while (true) {
    /*data_ = reinterpret_cast<char*>(
        alloc->find_free_address(size + kWrapAroundSize));*/
    data_ = reinterpret_cast<char*>(alloc->find_free_address(size_));
    /*
    * @Author: Huijuan Xiao
    * @Description: this size is the upper memory limit of the log
    */
    if (data_ == nullptr) {
      fprintf(stderr, "error: failed to find free memory region\n");
      assert(false);
      return;
    }
    //if (!alloc_->map(alloc_id, data_, 0, size_ + kWrapAroundSize)) {
    if (!alloc_->map(alloc_id, data_, 0, size_)) {
      alloc_->unmap(data_);
      // TODO: Give up after some trials.
      continue;
    }
    /*
    // aliased access across pool end boundary
    if (!alloc_->map(alloc_id, reinterpret_cast<void*>(
                                   reinterpret_cast<char*>(data_) + size_),
                     0, kWrapAroundSize)) {
      alloc_->unmap(data_);
      // TODO: Give up after some trials.
      continue;
    }
    */

    data_ = reinterpret_cast<char*>(data_);
    break;
  }

  if (!alloc_->schedule_release(alloc_id)) {
    perror("");
    fprintf(stderr, "error: failed to schedule releasing memory\n");
    assert(false);
    return;
  }
}

template <class StaticConfig>
CircularLog<StaticConfig>::~CircularLog() {
  if (!alloc_->unmap(data_)) assert(false);
  delete parda;
  //if (!alloc_->unmap(data_ + size_)) assert(false);
}

template <class StaticConfig>
typename CircularLog<StaticConfig>::Offset CircularLog<StaticConfig>::allocate(
    size_t item_size) {
  assert(item_size <= std::numeric_limits<uint32_t>::max());
  return push_tail(item_size + sizeof(Item));
}

template <class StaticConfig>
uint32_t CircularLog<StaticConfig>::get_poolstruct_item_size(){
  return sizeof(Item);
}

template <class StaticConfig>
void CircularLog<StaticConfig>::release(Offset offset) {
  (void)offset;
}
/*
template <class StaticConfig>
bool CircularLog<StaticConfig>::is_valid(Offset offset) const {
  if (concurrent_access_mode_ == 0)//exclusive read and exclusive write
    return ((tail_ - offset) & kOffsetMask) <= size_;
  else {
    ::mica::util::memory_barrier();
    return ((*(volatile uint64_t*)&tail_ - offset) & kOffsetMask) <= size_;
  }
}*/

template <class StaticConfig>
bool CircularLog<StaticConfig>::is_valid(WrapAround item_wrap_number, Offset offset) const {
 /*
  * @Author: Huijuan Xiao
  * @Description:
  * Data is only available for the following cases:
  * wan-wn ==1 && offset>tail && offset < size
  * wan == wn && offset<tail
  */
  if (concurrent_access_mode_ == 0){
    if(wrap_around_number_ == item_wrap_number){
      return true;
    }
    else if(wrap_around_number_ == static_cast<uint16_t>(static_cast<uint16_t>(1) + item_wrap_number)){
      return ((offset > tail_) && (offset < (size_ - kWrapAroundSize)));
    }
    else{
      return false;
    }
  }
  else{
    fprintf(stderr, "error: concurrent_access_mode_ != 0");
    assert(false);
    return false;
    /*
     * @Author: Huijuan Xiao
     * @Description: concurrent read or write  
     *
    ::mica::util::memory_barrier();
    if(wrap_around_number_ == item_wrap_number){
      return (offset < *(volatile uint64_t*)&tail_);
    }
    else if((*(volatile uint64_t*)&wrap_around_number_ - item_wrap_number == 1)){
      return ((offset > *(volatile uint64_t*)&tail_) && (offset < size_));
    }
    else{
      return false;
    }*/
  }
}
/*
template <class StaticConfig>
uint64_t CircularLog<StaticConfig>::get_head() const {
  return head_;
}
*/

template <class StaticConfig>
uint64_t CircularLog<StaticConfig>::get_tail() const {
  return tail_;
}

template <class StaticConfig>
uint64_t CircularLog<StaticConfig>::get_tail_for_cleanup() const {
  return tail_for_cleanup;
}

template <class StaticConfig>
uint64_t CircularLog<StaticConfig>::get_mask() const {
  return mask_;
}


template <class StaticConfig>
void CircularLog<StaticConfig>::set_size(uint64_t size) {
  size_ = size;
}

template <class StaticConfig>
uint64_t CircularLog<StaticConfig>::get_size() const {
  return size_;
}

template <class StaticConfig>
uint64_t CircularLog<StaticConfig>::get_new_log_size() const {
  return new_log_size_;
}

template <class StaticConfig>
void CircularLog<StaticConfig>::set_new_log_size(uint64_t new_log_size) {
  new_log_size_ = new_log_size;
}

template <class StaticConfig>
uint64_t CircularLog<StaticConfig>::get_mth_thres() const {
  return mth_thres_;
}

template <class StaticConfig>
void CircularLog<StaticConfig>::set_mth_thres() {
  mth_thres_ = 
    static_cast<uint64_t>(static_cast<double>(size_) * mth_thres);
}

template <class StaticConfig>
uint64_t CircularLog<StaticConfig>::get_ma_thres() const {
  return ma_thres_;
}

template <class StaticConfig>
void CircularLog<StaticConfig>::set_ma_thres() {
  ma_thres_ = 
    static_cast<uint64_t>(static_cast<double>(size_) * ma_thres);
}

template <class StaticConfig>
uint16_t CircularLog<StaticConfig>::get_wrap_around_number() const {
  return wrap_around_number_;
}

template <class StaticConfig>
void CircularLog<StaticConfig>::set_wrap_around_number(uint16_t wrap_around_number) {
  wrap_around_number_ =  wrap_around_number;
}

template <class StaticConfig>
void CircularLog<StaticConfig>::prefetch_item(Offset offset) const {
  //size_t addr = reinterpret_cast<size_t>(data_ + (offset & mask_)) & ~(size_t)63;
  size_t addr =
      reinterpret_cast<size_t>(data_ + offset ) & ~(size_t)63;

  // prefetch the item's cache line and the subsequence cache line 
  __builtin_prefetch(reinterpret_cast<const char*>(addr), 0, 0);
  __builtin_prefetch(reinterpret_cast<const char*>(addr + 64), 0, 0);
}

template <class StaticConfig>
char* CircularLog<StaticConfig>::get_item(Offset offset) {
  Item* item = reinterpret_cast<Item*>(data_ + offset);
  return item->data;
}

template <class StaticConfig>
const char* CircularLog<StaticConfig>::get_item(Offset offset) const {
  const Item* item = reinterpret_cast<const Item*>(data_ + offset);
  return item->data;
}

template <class StaticConfig>
char* CircularLog<StaticConfig>::get_item(Offset offset, std::size_t* out_len) {
  Item* item = reinterpret_cast<Item*>(data_ + offset);
  *out_len = item->size;
  return item->data;
}

template <class StaticConfig>
const char* CircularLog<StaticConfig>::get_item(Offset offset,
                                                std::size_t* out_len) const {
  const Item* item = reinterpret_cast<const Item*>(data_ + offset);
  *out_len = item->size;
  return item->data;
}

template <class StaticConfig>
void CircularLog<StaticConfig>::reset() {
  head_ = tail_ = 0;
  tail_for_cleanup = 0;
}

template <class StaticConfig>
void CircularLog<StaticConfig>::lock() {
  if (!StaticConfig::kConcurrent) return;

  if (concurrent_access_mode_ == 2) {
    while (true) {
      if (__sync_bool_compare_and_swap((volatile uint8_t*)&lock_, 0U, 1U))
        break;
    }
  }
}

template <class StaticConfig>
void CircularLog<StaticConfig>::unlock() {
  if (!StaticConfig::kConcurrent) return;

  if (concurrent_access_mode_ == 2) {
    ::mica::util::memory_barrier();
    assert((*(volatile uint8_t*)&lock_ & 1U) == 1U);
    // no need to use atomic add because this thread is the only one writing
    // to
    // version
    *(volatile uint8_t*)&lock_ = 0U;
  }
}

/*
template <class StaticConfig>
void CircularLog<StaticConfig>::check_invariants() const {
  assert(tail_ - head_ <= size_);
}

template <class StaticConfig>
void CircularLog<StaticConfig>::pop_head() {
  Item* item = reinterpret_cast<Item*>(data_ + head_);

  if (StaticConfig::kVerbose)
    printf("popping item size = %" PRIu64 " at head = %" PRIu64 "\n",
           item->size, head_);

  head_ += item->size;
  //check_invariants();
}
*/

template <class StaticConfig>
uint64_t CircularLog<StaticConfig>::push_tail(uint64_t item_size) {
  assert(item_size == ::mica::util::roundup<8>(item_size));
  assert(item_size <= size_);

  uint64_t offset = tail_;

  //uint64_t v = offset + sizeof(Item) + item_size;
  //while (v > head_ + size_) pop_head();
  //remove the relative code of head

  Item* item = reinterpret_cast<Item*>(data_ + offset);
  item->size = item_size;

  if (concurrent_access_mode_ == 0){
    tail_ += item_size;
    tail_for_cleanup += item_size;
  }
  else {
    //*reinterpret_cast<volatile uint64_t*>(&tail_) += item_size;
    //::mica::util::memory_barrier();
    fprintf(stderr, "error: concurrent_access_mode_ != 0");
    assert(false);
    return 0;
  }

  //check_invariants();

  if (StaticConfig::kVerbose)
    printf("pushing item size = %" PRIu64 " at tail = %" PRIu64 "\n", item_size,
           offset);

  return offset;
}

template <class StaticConfig>
uint64_t CircularLog<StaticConfig>::eaet(){
  //return 1024 * 1024 * 1024;//1GiB
  //return 2048 * 1024 * 1024;//2GiB
  uint64_t size = 0;
  uint64_t msize = 1024 * 1024;
  if(wrap_around_number_ == 0){
    size = 512 * msize;//512MiB
  }
  else if(wrap_around_number_ == 1){
    size = 2048 * msize;//2GiB
  }
  else{
    size = 2 * msize;//1GiB
  }
  return size;
}

template <class StaticConfig>
uint64_t CircularLog<StaticConfig>::memory_estimation(size_t local_id, double* out_theta, uint64_t item_size){
  double target_diff = target_hit_ratio - last_hit_rate[tenant_id_];
  uint64_t parda_log_size = 0;
  uint64_t msize = 1024 * 1024;
  double upper_error = 0.03;
  if(target_diff < -upper_error || target_diff > 0){//误差较大或没达到命中率
    uint64_t tmpsize = ::mica::parda::get_pred_size(parda->histogram, 128, target_hit_ratio, item_size);
    parda_log_size = tmpsize;
    printf(YELLOW"lcore%ld tenant%d using PARDA log size:%lu\n"NONE, 
                              local_id, tenant_id_, ::mica::util::roundup<2 * 1048576>(parda_log_size));
    
    *out_theta = ::mica::parda::theta_calculation(parda->table);
  }else{//误差小不需要调
   parda_log_size = get_size();
   printf(YELLOW"lcore%ld tenant%d workload not shift! maintaining old size!\n"NONE, local_id, tenant_id_);
  }

  if(parda_log_size > max_virtual_space_size){
    parda_log_size = max_virtual_space_size;
  }

  if(parda_log_size < kAdjustMinimumSize) {
    parda_log_size = kAdjustMinimumSize;
  }

  parda_log_size = ::mica::util::roundup<2 * 1048576>(parda_log_size);
  last_log_size = parda_log_size;
  return parda_log_size;
}

template <class StaticConfig>
uint64_t CircularLog<StaticConfig>::fine_grained_adjustment(double diff_time){
  double target_diff = target_hit_ratio - last_hit_rate[tenant_id_];
  uint64_t log_size;
  uint64_t msize = 1024 * 1024;
  double upper_error = 0.03;
  uint64_t log_size_diff = last_log_size > get_size() ? last_log_size - get_size() : get_size() - last_log_size;
  size_t local_id = ::mica::util::lcore.lcore_id();
  if(log_size_diff >= 2 * msize){//size没调整到
    return last_log_size;
  }else{
    if(fabs(hit_rate_diff[tenant_id_]) < 0.0003 && diff_time > next_adjust_time){//命中率稳定后调整
      if(target_diff > upper_error || target_diff < -upper_error){//>upper_error or <-upper_error
        log_size = get_size() * (1 + target_diff * 2);
      }else if(target_diff > 0){//0~upper_error
        log_size = get_size() * (1 + upper_error);
      }else{//-upper_error~0
        log_size = get_size();
        firsttime = timewatcher.now();
        parda_calculation = 0;
        sample_flag = true;
        printf(YELLOW"lcore%ld tenant%d finish adjustment!\n"NONE, local_id, tenant_id_);
        next_adjust_time = log_adjust_interval + wait_interval;//重置
      }
      next_adjust_time = diff_time + wait_interval;
      printf(YELLOW"lcore%ld tenant%d second adjustment for log size!\n"NONE, local_id, tenant_id_);
    }else{//命中率不稳定
      log_size = get_size();
    }
  }

  if(log_size > max_virtual_space_size){
    log_size = max_virtual_space_size;
  }

  if(log_size < kAdjustMinimumSize) {
    log_size = kAdjustMinimumSize;
  }

  log_size = ::mica::util::roundup<2 * 1048576>(log_size);
  last_log_size = log_size;
  return log_size;
}

template <class StaticConfig>
void CircularLog<StaticConfig>::log_resizing(){
  if (concurrent_access_mode_ != 0){
    fprintf(stderr, "error: concurrent_access_mode_ != 0\n");
    assert(false);
  }
  //size_t local_id = ::mica::util::lcore.lcore_id();
  secondtime = timewatcher.now();
  double diff_time = timewatcher.diff(secondtime, firsttime) / 60.0;
  
  if(diff_time > log_adjust_interval){//到了需要调整的时间
    if(parda_calculation == 0){
      parda_calculation = 1;
      //sample_flag = false;
    }else if(parda_calculation == 2){
      new_log_size_ = fine_grained_adjustment(diff_time);
    }

    if(new_log_size_ == size_){
      if(size_ - tail_ < kMinimumSize){//这一轮的数据已经写到最后一个page上了
        printf(YELLOW"lcore%lu tenant%u now time is %lf, wrap number %d\n"NONE, ::mica::util::lcore.lcore_id(), tenant_id_, diff_time,
                                                            wrap_around_number_);
        update_log_parameter();
      }
    }else if(new_log_size_ > size_){
      char* tmp_data_ = data_;
      data_ = reinterpret_cast<char*>(alloc_->memory_adjustment(entry_id_, (size_t)new_log_size_, data_));
      if(data_ == nullptr){
        printf("size: %zu\n", new_log_size_);
        fprintf(stderr, "error: failed to adjustment log memory\n");
        assert(false);
      }
      if(data_ != tmp_data_) update_log_size();
    }else{//new_log_size_ < size_
      if(tail_ <= new_log_size_){
        /**
         * @description: log size很大有可能会导致tail不会再往后写，如1/2 * logsize > working set size
         * @author: yangsx
         */
        if(new_log_size_ - tail_ < kMinimumSize){//tail写到new log size再调
          data_ = reinterpret_cast<char*>(alloc_->memory_adjustment(entry_id_, (size_t)new_log_size_, data_));
          if(data_ == nullptr){
            fprintf(stderr, "error: failed to adjustment log memory\n");
            assert(false);
          }
          update_log_size();
          update_log_parameter();
        }
      }else{//tail > new log size
        new_log_size_ = ::mica::util::roundup<2 * 1048576>(tail_);
        data_ = reinterpret_cast<char*>(alloc_->memory_adjustment(entry_id_, (size_t)new_log_size_, data_));
        if(data_ == nullptr){
          fprintf(stderr, "error: failed to adjustment log memory\n");
          assert(false);
        } 
        update_log_size();
        update_log_parameter();
      }
    }
  }else{//没到需要调整的时间，不需要更改log size，只需要判断并更新参数
    if(size_ > tail_){
      if(size_ - tail_ < kMinimumSize){//这一轮的数据已经写到最后一个page上了
        printf(YELLOW"lcore%lu tenant%u now time is %lf, wrap number %d\n"NONE, ::mica::util::lcore.lcore_id(), tenant_id_, diff_time,
                                                            wrap_around_number_);
        update_log_parameter();
      }
    }
    else{//size_ =< tail_
      fprintf(stderr, "error: illegal tail of the log.\n");
      assert(false);
    }
  }
}

template <class StaticConfig>
void CircularLog<StaticConfig>::update_log_size(){
  if (concurrent_access_mode_ != 0){
    fprintf(stderr, "error: concurrent_access_mode_ != 0\n");
    assert(false);
  }
  size_t local_id = ::mica::util::lcore.lcore_id();
  printf(RED"lcore%ld tenant%u log size old = %zu.\n"NONE, local_id, tenant_id_, size_);
  size_ = new_log_size_;
  //new_log_size_ = 0;
  printf(RED"lcore%ld tenant%u log size now = %zu.\n"NONE, local_id, tenant_id_, size_);
}

template <class StaticConfig>
void CircularLog<StaticConfig>::update_log_parameter(){
  if (concurrent_access_mode_ != 0){
    fprintf(stderr, "error: concurrent_access_mode_ != 0\n");
    assert(false);
  }
  
    tail_ = 0;
    wrap_around_number_++;
    //printf(YELLOW"now wrap number=%d\n"NONE, wrap_around_number_);

    mth_thres_ = 
    static_cast<uint64_t>(
        static_cast<double>(size_) * mth_thres);
    ma_thres_ = 
    static_cast<uint64_t>(
        static_cast<double>(size_) * ma_thres);

    //printf("update_log_parameter finished.\n");
}
}
}

#endif
#endif
