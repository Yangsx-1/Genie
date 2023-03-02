#pragma once
#ifndef MICA_POOL_CIRCULAR_LOG_IMPL_H_
#define MICA_POOL_CIRCULAR_LOG_IMPL_H_
#ifndef EREW
#define EREW
namespace mica {
namespace pool {
template <class StaticConfig>
CircularLog<StaticConfig>::CircularLog(const ::mica::util::Config& config,
                                       Alloc* alloc)
    : config_(config), alloc_(alloc) {
  uint64_t size = config.get("size").get_uint64();
  bool concurrent_read = config.get("concurrent_read").get_bool();
  bool concurrent_write = config.get("concurrent_write").get_bool();
  size_t numa_node = config.get("numa_node").get_uint64();

  #ifdef EREW
  concurrent_read = false;
  concurrent_write = false;
  #endif


  if (size < kMinimumSize) size = kMinimumSize;//2MB

  //size = Alloc::roundup(size);
  //size = ::mica::util::next_power_of_two(size);
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
  uint64_t initsize = size;
  uint64_t msize = 1024 * 1024;
  size_ = size;
  mask_ = size - 1;

  lock_ = 0;
  head_ = tail_ = 0;
  new_log_size_ = 0;
  tail_for_cleanup = 0;
  wrap_around_number_ = 0;
  /*
  memory_adjustment_flag_ = 0;
  log_size_calculation_flag_ = 0;
  */
  
  log_resize_flag = 0;
  mth_thres_ = 
    static_cast<uint64_t>(static_cast<double>(size_) * mth_thres);//hello
  ma_thres_ = 
    static_cast<uint64_t>(static_cast<double>(size_) * ma_thres);

  //size_t alloc_id = alloc_->alloc(size + kWrapAroundSize, numa_node);
  size_t alloc_id = alloc_->alloc(size, numa_node);
  entry_id_ = alloc_id;
  if (alloc_id == Alloc::kInvalidId) {
    fprintf(stderr, "error: failed to allocate memory\n");
    assert(false);
    return;
  }
  while (true) {
    /*data_ = reinterpret_cast<char*>(
        alloc->find_free_address(size + kWrapAroundSize));*/
    data_ = reinterpret_cast<char*>(alloc->find_free_address(size));
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
  //if (!alloc_->unmap(data_ + size_)) assert(false);
}

template <class StaticConfig>
typename CircularLog<StaticConfig>::Offset CircularLog<StaticConfig>::allocate(
    size_t item_size) {
  assert(item_size <= std::numeric_limits<uint32_t>::max());
  return push_tail(item_size + sizeof(Item));
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
      return (offset < tail_);
    }
    else if(wrap_around_number_ - item_wrap_number == 1){
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
uint8_t CircularLog<StaticConfig>::get_wrap_around_number() const {
  return wrap_around_number_;
}

template <class StaticConfig>
void CircularLog<StaticConfig>::set_wrap_around_number(uint8_t wrap_around_number) {
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
  if(wrap_around_number_ == 0){
    size = 512 * 1024 *1024;
  }
  else if(wrap_around_number_ == 1){
    size = 2048 * 1024 *1024;
  }
  else{
    size = 1024 * 1024 *1024;
  }
  return size;
}
template <class StaticConfig>
bool CircularLog<StaticConfig>::resize_log(){
  if (concurrent_access_mode_ != 0){
    fprintf(stderr, "error: concurrent_access_mode_ != 0\n");
    assert(false);
    return false;
  }
  //if(!log_size_calculation_flag_){
  if(!(log_resize_flag >> 4)){
    if(tail_ > get_ma_thres()){
      uint64_t msize = 1024 * 1024;
      uint64_t eaet_log_size = 2 * 1024 * msize;
      if (eaet_log_size < kAdjustMinimumSize) {
        new_log_size_ = kAdjustMinimumSize;
      }
      else{
        new_log_size_ = ::mica::util::roundup<2 * 1048576>(eaet_log_size);
      }
      //log_size_calculation_flag_ = 1;
      log_resize_flag |= uint8_t(1)<<4;
      return true;
    }
    else{
      return true;
    }
  }
  else{//log_size_calculation_flag_ == true
    //if(memory_adjustment_flag_){//内存调整过以后，现在的实际的log大小已经是最新的了
    if(log_resize_flag & 1){
      if(size_ > tail_){
        if(size_ - tail_ < kMinimumSize){//这一轮的数据已经写到最后一个page上了
          update_log_parameter();
          return true;
        }
        else{
          return true;
        }
      }
      else{//size_ =< tail_
        printf("tail=%zu,log size=%zu, log_resize_flag_=%d\n",tail_,size_,log_resize_flag);
        fprintf(stderr, "error: illegal tail of the log.\n");
        //assert(!log_size_calculation_flag_);
        //assert(!memory_adjustment_flag_);
        assert(!(log_resize_flag >> 4));
        assert(!(log_resize_flag & 1));
        assert(false);
        return false;
      }
    }
    else{//这一轮还没进行内存调整
      if(new_log_size_ == size_){
        update_log_size();
        //memory_adjustment_flag_ = 1;
        log_resize_flag |= uint8_t(1);
        return true;
      }
      else if(new_log_size_ > size_){
        if(!alloc_->memory_adjustment(entry_id_, (size_t)new_log_size_)){
          printf("size: %zu\n", new_log_size_);
          fprintf(stderr, "error: failed to adjustment log memory\n");
          assert(false);
          return false;
        }
        update_log_size();
        //memory_adjustment_flag_ = 1;
        log_resize_flag |= uint8_t(1);
        return true;
      }
      else{//new_log_size_ < size_
        if(tail_ < new_log_size_){
          if(new_log_size_ - tail_ < kMinimumSize){
            if(!alloc_->memory_adjustment(entry_id_, (size_t)new_log_size_)){
              fprintf(stderr, "error: failed to adjustment log memory\n");
              assert(false);
              return false;
            }
            update_log_size();
            //memory_adjustment_flag_ = 1;
            log_resize_flag |= uint8_t(1);
            update_log_parameter();
            return true;
          }
          else{
            return true;
          }
        }
        else if(tail_ == new_log_size_){//这样tail和log size之间就没有2MB的间隔了。
        //这里要直接把其他flag都调整好了。因为不能再允许tail再往前 走一步了。
          if(!alloc_->memory_adjustment(entry_id_, (size_t)new_log_size_)){
            fprintf(stderr, "error: failed to adjustment log memory\n");
            assert(false);
            return false;
          } 
          update_log_size();
          //memory_adjustment_flag_ = 1;//这里就不能让tail再往下写了，要直接将对应参数更新了。
          log_resize_flag |= uint8_t(1);
          update_log_parameter();
          return true;         
        }
        else{//tail_ > new_log_size_
          new_log_size_ = ::mica::util::roundup<2 * 1048576>(tail_);
          if(!alloc_->memory_adjustment(entry_id_, (size_t)new_log_size_)){
            fprintf(stderr, "error: failed to adjustment log memory\n");
            assert(false);
            return false;
          } 
          update_log_size();
          //memory_adjustment_flag_ = 1;
          log_resize_flag |= uint8_t(1);
          update_log_parameter();
          return true;           
        }
      }
    }
  }
  return true;
}

template <class StaticConfig>
void CircularLog<StaticConfig>::update_log_size(){
  if (concurrent_access_mode_ != 0){
    fprintf(stderr, "error: concurrent_access_mode_ != 0\n");
    assert(false);
  }
  printf("log size now = %zu.\n",size_);
  size_ = new_log_size_;
  new_log_size_ = 0;
  printf("log size now = %zu.\n",size_);
}

template <class StaticConfig>
void CircularLog<StaticConfig>::update_log_parameter(){
  if (concurrent_access_mode_ != 0){
    fprintf(stderr, "error: concurrent_access_mode_ != 0\n");
    assert(false);
  }
    tail_ = 0;
    /*
    memory_adjustment_flag_ = 0;
    log_size_calculation_flag_ = 0;
    */
    log_resize_flag = 0;
    wrap_around_number_++;

    mth_thres_ = 
    static_cast<uint64_t>(
        static_cast<double>(size_) * mth_thres);
    ma_thres_ = 
    static_cast<uint64_t>(
        static_cast<double>(size_) * ma_thres);

    printf("update_log_parameter finished.\n");
}
}
}

#endif
#endif
