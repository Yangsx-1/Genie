#pragma once
#ifndef MICA_TABLE_LTABLE_IMPL_INIT_H_
#define MICA_TABLE_LTABLE_IMPL_INIT_H_

namespace mica {
namespace table {
template <class StaticConfig>
LTable<StaticConfig>::LTable(const ::mica::util::Config& config, Alloc* alloc,
                             uint64_t table_pool_size)
    : config_(config), alloc_(alloc), pool_size_(table_pool_size / kTenantCount) {
  bool concurrent_read = config.get("concurrent_read").get_bool();
  bool concurrent_write = config.get("concurrent_write").get_bool();
  /*
 * @Author: Huijuan Xiao
 * @Description:Currently only supports EREW mode 
 */
  concurrent_read = false;
  concurrent_write = false;

  size_t numa_node = config.get("numa_node").get_uint64();
  //double mth_threshold = config.get("mth_threshold").get_double(0.5);

  for(uint8_t i = 0; i < kTenantCount; i++){
    auto log_config = ::mica::util::Config::empty_dict(
        std::string() + "[derived from " + config_.get_path() +
        " by Tables]");

    //uint64_t size_per_tenant_ = static_cast<uint64_t>(total_size_ / partition_count_ /(StaticConfig::kTenantCount));
    log_config.insert_uint64("size", pool_size_);
    //todoxhj 把所有数据都转换成size_t
    log_config.insert_bool("concurrent_read", concurrent_read);
    log_config.insert_bool("concurrent_write", concurrent_write);
    log_config.insert_uint64("numa_node", numa_node);
    pools_[i] = new Pool(log_config, alloc_, i);
  }


  size_t item_count = config.get("item_count").get_uint64();
  // Compensate the load factor.
  item_count = item_count * 11 / 10;

  size_t num_buckets =
      (item_count + StaticConfig::kBucketSize - 1) / StaticConfig::kBucketSize;

  double extra_collision_avoidance =
      config.get("extra_collision_avoidance")
          .get_double(StaticConfig::kEviction ? 0. : 0.1);
  size_t num_extra_buckets = static_cast<size_t>(
      static_cast<double>(num_buckets) * extra_collision_avoidance);

  assert(num_buckets > 0);

  size_t log_num_buckets = 0;
  while (((size_t)1 << log_num_buckets) < num_buckets) log_num_buckets++;
  num_buckets = (size_t)1 << log_num_buckets;
  assert(log_num_buckets <= 32);

  num_buckets_ = ::mica::util::safe_cast<uint32_t>(num_buckets);
  num_buckets_mask_ = ::mica::util::safe_cast<uint32_t>(num_buckets - 1);
  num_extra_buckets_ = ::mica::util::safe_cast<uint32_t>(num_extra_buckets);

  {
    size_t shm_size =
        Alloc::roundup(sizeof(Bucket) * (num_buckets_ + num_extra_buckets_));

    // TODO: Extend num_extra_buckets_ to meet shm_size.

    size_t alloc_id = alloc_->alloc(shm_size, numa_node);
    if (alloc_id == Alloc::kInvalidId) {
      fprintf(stderr, "failed to allocate memory\n");
      assert(false);
      return;
    }
    while (true) {
      buckets_ = reinterpret_cast<Bucket*>(alloc_->find_free_address(shm_size));
      if (buckets_ == nullptr) assert(false);
     /*
      * @Author: Huijuan Xiao
      * @Description: Allocate memory to buckets and map the hugepages.
      */
      if (alloc_->map(alloc_id, buckets_, 0, shm_size)) break;
    }
    if (!alloc_->schedule_release(alloc_id)) assert(false);
  }
  extra_buckets_ = buckets_ + num_buckets_ -
                   1;  // subtract by one to compensate 1-base indices
  // the rest extra_bucket information is initialized in reset()

  // we have to zero out buckets here because reset() tries to free non-zero
  // entries in the buckets
  ::mica::util::memset(buckets_, 0,
                       sizeof(Bucket) * (num_buckets_ + num_extra_buckets_));

  if (!concurrent_read)
    concurrent_access_mode_ = 0;
  else if (concurrent_read && !concurrent_write)
    concurrent_access_mode_ = 1;
  else
    concurrent_access_mode_ = 2;

  //mth_threshold_ = static_cast<uint64_t>(
      //static_cast<double>(Specialization::get_size(pools_[0])) * mth_threshold);//need to modify by ysx

  rshift_ = 0;
  while ((((Bucket::kItemOffsetMask + 1) >> 1) >> rshift_) > num_buckets_)
    rshift_++;

  reset();

  if (StaticConfig::kVerbose) {
    fprintf(stderr, "warning: kVerbose is defined (low performance)\n");

    if (StaticConfig::kCollectStats)
      fprintf(stderr, "warning: kCollectStats is defined (low performance)\n");

    if (StaticConfig::kConcurrent && !concurrent_read && !concurrent_write)
      fprintf(stderr, "warning: kConcurrent is defined (low performance)\n");

    /*if (StaticConfig::kEviction)
      fprintf(stderr, "info: mth_threshold=%lf (%s)\n", mth_threshold,
              mth_threshold == 0.
                  ? "LRU"
                  : (mth_threshold == 1. ? "FIFO" : "approx-LRU"));*/

    // #ifdef MEHCACHED_USE_PH
    //     fprintf(stderr, "MEHCACHED_USE_PH\n");
    // #endif

    fprintf(stderr, "info: num_buckets = %u\n", num_buckets_);
    fprintf(stderr, "info: num_extra_buckets = %u\n", num_extra_buckets_);
    // fprintf(stderr, "pool_size = %zu\n", pool_size);

    fprintf(stderr, "\n");
  }
}

template <class StaticConfig>
LTable<StaticConfig>::~LTable() {
  reset();

  if (!alloc_->unmap(buckets_)) assert(false);

  // pool_->free();
  for (uint8_t i = 0; i < kTenantCount; i++) {
    delete pools_[i];
  }
}

template <class StaticConfig>
void LTable<StaticConfig>::reset() {
  size_t bucket_index;
  
  //pool_->lock();

  for (bucket_index = 0; bucket_index < num_buckets_; bucket_index++) {
    Bucket* bucket = buckets_ + bucket_index;
    size_t item_index;
    for (item_index = 0; item_index < StaticConfig::kBucketSize; item_index++) {
      uint64_t item_vec = bucket->item_vec[item_index];
      if (item_vec != 0){
        uint8_t tenant_id = get_item_tenant_id(item_vec);
        pools_[tenant_id]->lock();
        pools_[tenant_id]->release(get_item_offset(item_vec));
        pools_[tenant_id]->unlock();
      }
    }
  }
  //pool_->unlock();

  ::mica::util::memset(buckets_, 0,
                       sizeof(Bucket) * (num_buckets_ + num_extra_buckets_));

  // initialize a free list of extra buckets
  extra_bucket_free_list_.lock = 0;
  if (num_extra_buckets_ == 0)
    extra_bucket_free_list_.head = 0;  // no extra bucket at all
  else {
    uint32_t extra_bucket_index;
    for (extra_bucket_index = 1;
         extra_bucket_index < 1 + num_extra_buckets_ - 1; extra_bucket_index++)
      (extra_buckets_ + extra_bucket_index)->next_extra_bucket_index =
          extra_bucket_index + 1;
    (extra_buckets_ + extra_bucket_index)->next_extra_bucket_index =
        0;  // no more free extra bucket

    extra_bucket_free_list_.head = 1;
  }

  //pool_->lock();
  for(uint8_t i =0; i < kTenantCount; i++){
    //printf("No.%ld reset!\n", i);
    pools_[i]->lock();
    pools_[i]->reset();
    pools_[i]->unlock();
    //printf("No.%ld endreset!\n", i);
  }
  //pool_->unlock();

  reset_stats(true);
}
}
}

#endif
