#pragma once
#ifndef MICA_TABLE_LTABLE_IMPL_SET_H_
#define MICA_TABLE_LTABLE_IMPL_SET_H_
#include "mica/util/lcore.h"
namespace mica {
namespace table {
template <class StaticConfig>
Result LTable<StaticConfig>::set(uint64_t key_hash, const char* key,
                                 size_t key_length, const char* value,
                                 size_t value_length, bool overwrite) {
  assert(key_length <= kMaxKeyLength);
  assert(value_length <= kMaxValueLength);
  

  uint32_t bucket_index = calc_bucket_index(key_hash);
  uint8_t tenant_id = calc_tenant_id(key);
  //printf("tenant%d in set!\n", tenant_id);
  Pool* pool_ = pools_[tenant_id];
  uint16_t tag = calc_tag(key_hash);

  Bucket* bucket = buckets_ + bucket_index;

  bool overwriting;

  lock_bucket(bucket);

  Bucket* located_bucket;
  size_t item_index =
      find_item_index(bucket, key_hash, tag, key, key_length, &located_bucket);

  if (item_index != StaticConfig::kBucketSize) {
    if (!overwrite) {
      stat_inc(&Stats::set_nooverwrite);

      unlock_bucket(bucket);
      return Result::kExists;  // already exist but cannot overwrite
    } else {
      overwriting = true;
    }
  } else {
    if (StaticConfig::kEviction && std::is_base_of<::mica::pool::CircularLogTag,
                                                   typename Pool::Tag>::value) {
      // pick an item with the same tag; this is potentially the same item but
      // invalid due to insufficient log space
      // this helps limiting the effect of "ghost" items in the table when the
      // log space is slightly smaller than enough
      // and makes better use of the log space by not evicting unrelated old
      // items in the same bucket
      item_index = find_same_tag(bucket, tag, &located_bucket);

      if (item_index == StaticConfig::kBucketSize) {
        // if there is no matching tag, we just use the empty or oldest item
        item_index = get_empty_or_oldest(bucket, &located_bucket);
      }
    } else {
      item_index = get_empty(bucket, &located_bucket);
      if (item_index == StaticConfig::kBucketSize) {
        // no more space
        // TODO: add a statistics entry
        unlock_bucket(bucket);
        printf("kinsufficientspace!\n");
        return Result::kInsufficientSpace;
      }
    }

    overwriting = false;
  }

  uint32_t new_item_size = static_cast<uint32_t>(
      sizeof(Item) + ::mica::util::roundup<8>(key_length) +
      ::mica::util::roundup<8>(value_length));
  //printf("key size=%d\tvalue size=%d\n", key_length, value_length);
  uint64_t item_offset = 0;
  uint8_t item_wrap_number = 0;

  // we have to lock the pool because is_valid check must be correct in the
  // overwrite mode;
  // unlike reading, we cannot afford writing data at a wrong place
  if (std::is_base_of<::mica::pool::CircularLogTag, typename Pool::Tag>::value)
    pool_->lock();

  if (overwriting) {
    item_offset = get_item_offset(located_bucket->item_vec[item_index]);
    item_wrap_number = get_item_wrap_around_number(located_bucket->item_vec[item_index]);

    size_t old_item_size;
    /*
     * @Author: Huijuan Xiao
     * @Description: 调整代码位置，将is_valid()提前，先判断数据可用再调用get_item()
     */
    if (Specialization::is_valid(pool_, item_wrap_number, item_offset)) {
      Item* item =
        reinterpret_cast<Item*>(pool_->get_item(item_offset, &old_item_size));

    //if (Specialization::is_valid(pool_, item_wrap_number, item_offset)) {
      if (old_item_size >= new_item_size) {
        stat_inc(&Stats::set_inplace);

        set_item_value(item, value, (uint32_t)value_length);

        //uint8_t new_item_wrap_number = pool_->get_wrap_around_number();
        //located_bucket->item_vec[item_index] = make_item_vec(tag, new_item_wrap_number, item_offset);

        if (std::is_base_of<::mica::pool::CircularLogTag,
                            typename Pool::Tag>::value)
          pool_->unlock();

        unlock_bucket(bucket);
        if(pool_->sample_flag) setStatistics(pool_->rth, key_hash, old_item_size, false);
        return Result::kSuccess;
      }
    }
  }

  //uint64_t new_item_offset_for_cleanup = pool_->get_tail_for_cleanup();

  uint64_t new_item_offset = pool_->allocate(new_item_size);
  uint8_t new_item_wrap_number = pool_->get_wrap_around_number();
  if (new_item_offset == Pool::kInsufficientSpace) {
    // no more space
    // TODO: add a statistics entry
    unlock_bucket(bucket);
    printf("kinsufficientspace!\n");
    return Result::kInsufficientSpace;
  }
  //uint64_t new_tail;
  //uint64_t new_tail_for_cleanup;
  if (std::is_base_of<::mica::pool::CircularLogTag, typename Pool::Tag>::value){
    //new_tail = Specialization::get_tail(pool_);
    //new_tail_for_cleanup = pool_->get_tail_for_cleanup();
  }
  Item* new_item = reinterpret_cast<Item*>(pool_->get_item(new_item_offset));
  /*
  * @Author: Huijuan Xiao
  * @Description: 这里因为是刚申请的空间，因此暂时不需要进行is valid判断
  */

  stat_inc(&Stats::set_new);

  set_item(new_item, key_hash, key, (uint32_t)key_length, value,
           (uint32_t)value_length);
  
  pool_->resize_log();

  // unlocking is delayed until we finish writing data at the new location;
  // otherwise, the new location may be invalidated (in a very rare case)
  if (std::is_base_of<::mica::pool::CircularLogTag, typename Pool::Tag>::value)
    pool_->unlock();

  if (located_bucket->item_vec[item_index] != 0) {
    stat_inc(&Stats::set_evicted);
    stat_dec(&Stats::count);
  }

  located_bucket->item_vec[item_index] = make_item_vec(tag, tenant_id, new_item_wrap_number, new_item_offset);

  unlock_bucket(bucket);

  if (std::is_base_of<::mica::pool::CircularLogTag,
                      typename Pool::Tag>::value) {
    // XXX: this may be too late; before cleaning, other threads may have read
    // some invalid location
    //      ideally, this should be done before writing actual data
    //cleanup_bucket(new_item_offset, new_tail);
    //cleanup_bucket(new_item_offset_for_cleanup, new_tail_for_cleanup);

    // this is done after bucket is updated and unlocked
    if (overwriting) pool_->release(item_offset);
  } else  // if (std::is_base_of<::mica::pool::SegregatedFitTag,
          // Pool::Tag>::value)
  {
    // this is done after bucket is updated and unlocked
    if (overwriting) {
      pool_->lock();
      pool_->release(item_offset);
      pool_->unlock();
    }
  }

  stat_inc(&Stats::count);
  if(pool_->sample_flag) setStatistics(pool_->rth, key_hash, new_item_size + pool_->get_poolstruct_item_size(), false);
  return Result::kSuccess;
}

template <class StaticConfig>
Result LTable<StaticConfig>::reset_item(uint64_t key_hash, const char* key,
                                 size_t key_length, const char* value,
                                 size_t value_length, bool overwrite) {
  assert(key_length <= kMaxKeyLength);
  assert(value_length <= kMaxValueLength);

  uint32_t bucket_index = calc_bucket_index(key_hash);
  uint8_t tenant_id = calc_tenant_id(key);
  //printf("tenant%d in set!\n", tenant_id);
  Pool* pool_ = pools_[tenant_id];
  uint16_t tag = calc_tag(key_hash);

  Bucket* bucket = buckets_ + bucket_index;

  bool overwriting;

  lock_bucket(bucket);

  Bucket* located_bucket;
  size_t item_index =
      find_item_index(bucket, key_hash, tag, key, key_length, &located_bucket);

  if (item_index != StaticConfig::kBucketSize) {
    if (!overwrite) {
      stat_inc(&Stats::set_nooverwrite);

      unlock_bucket(bucket);
      return Result::kExists;  // already exist but cannot overwrite
    } else {
      overwriting = true;
    }
  } else {
    if (StaticConfig::kEviction && std::is_base_of<::mica::pool::CircularLogTag,
                                                   typename Pool::Tag>::value) {
      // pick an item with the same tag; this is potentially the same item but
      // invalid due to insufficient log space
      // this helps limiting the effect of "ghost" items in the table when the
      // log space is slightly smaller than enough
      // and makes better use of the log space by not evicting unrelated old
      // items in the same bucket
      item_index = find_same_tag(bucket, tag, &located_bucket);

      if (item_index == StaticConfig::kBucketSize) {
        // if there is no matching tag, we just use the empty or oldest item
        item_index = get_empty_or_oldest(bucket, &located_bucket);
      }
    } else {
      item_index = get_empty(bucket, &located_bucket);
      if (item_index == StaticConfig::kBucketSize) {
        // no more space
        // TODO: add a statistics entry
        unlock_bucket(bucket);
        printf("kinsufficientspace!\n");
        return Result::kInsufficientSpace;
      }
    }

    overwriting = false;
  }

  uint32_t new_item_size = static_cast<uint32_t>(
      sizeof(Item) + ::mica::util::roundup<8>(key_length) +
      ::mica::util::roundup<8>(value_length));
  uint64_t item_offset = 0;
  uint8_t item_wrap_number = 0;

  // we have to lock the pool because is_valid check must be correct in the
  // overwrite mode;
  // unlike reading, we cannot afford writing data at a wrong place
  if (std::is_base_of<::mica::pool::CircularLogTag, typename Pool::Tag>::value)
    pool_->lock();

  if (overwriting) {
    item_offset = get_item_offset(located_bucket->item_vec[item_index]);
    item_wrap_number = get_item_wrap_around_number(located_bucket->item_vec[item_index]);

    size_t old_item_size;
    /*
     * @Author: Huijuan Xiao
     * @Description: 调整代码位置，将is_valid()提前，先判断数据可用再调用get_item()
     */
    if (Specialization::is_valid(pool_, item_wrap_number, item_offset)) {
      Item* item =
        reinterpret_cast<Item*>(pool_->get_item(item_offset, &old_item_size));

    //if (Specialization::is_valid(pool_, item_wrap_number, item_offset)) {
      if (old_item_size >= new_item_size) {
        stat_inc(&Stats::set_inplace);

        set_item_value(item, value, (uint32_t)value_length);

        //uint8_t new_item_wrap_number = pool_->get_wrap_around_number();
        //located_bucket->item_vec[item_index] = make_item_vec(tag, new_item_wrap_number, item_offset);

        if (std::is_base_of<::mica::pool::CircularLogTag,
                            typename Pool::Tag>::value)
          pool_->unlock();

        unlock_bucket(bucket);
        printf("reset overwriting!\n");
        return Result::kSuccess;
      }
    }
  }

  //uint64_t new_item_offset_for_cleanup = pool_->get_tail_for_cleanup();

  uint64_t new_item_offset = pool_->allocate(new_item_size);
  uint8_t new_item_wrap_number = pool_->get_wrap_around_number();
  if (new_item_offset == Pool::kInsufficientSpace) {
    // no more space
    // TODO: add a statistics entry
    unlock_bucket(bucket);
    printf("kinsufficientspace!\n");
    return Result::kInsufficientSpace;
  }
  //uint64_t new_tail;
  //uint64_t new_tail_for_cleanup;
  if (std::is_base_of<::mica::pool::CircularLogTag, typename Pool::Tag>::value){
    //new_tail = Specialization::get_tail(pool_);
    //new_tail_for_cleanup = pool_->get_tail_for_cleanup();
  }
  Item* new_item = reinterpret_cast<Item*>(pool_->get_item(new_item_offset));
  /*
  * @Author: Huijuan Xiao
  * @Description: 这里因为是刚申请的空间，因此暂时不需要进行is valid判断
  */

  stat_inc(&Stats::set_new);

  set_item(new_item, key_hash, key, (uint32_t)key_length, value,
           (uint32_t)value_length);
  
  pool_->resize_log();

  // unlocking is delayed until we finish writing data at the new location;
  // otherwise, the new location may be invalidated (in a very rare case)
  if (std::is_base_of<::mica::pool::CircularLogTag, typename Pool::Tag>::value)
    pool_->unlock();

  if (located_bucket->item_vec[item_index] != 0) {
    stat_inc(&Stats::set_evicted);
    stat_dec(&Stats::count);
  }

  located_bucket->item_vec[item_index] = make_item_vec(tag, tenant_id, new_item_wrap_number, new_item_offset);

  unlock_bucket(bucket);

  if (std::is_base_of<::mica::pool::CircularLogTag,
                      typename Pool::Tag>::value) {
    // XXX: this may be too late; before cleaning, other threads may have read
    // some invalid location
    //      ideally, this should be done before writing actual data
    //cleanup_bucket(new_item_offset, new_tail);
    //cleanup_bucket(new_item_offset_for_cleanup, new_tail_for_cleanup);

    // this is done after bucket is updated and unlocked
    if (overwriting) pool_->release(item_offset);
  } else  // if (std::is_base_of<::mica::pool::SegregatedFitTag,
          // Pool::Tag>::value)
  {
    // this is done after bucket is updated and unlocked
    if (overwriting) {
      pool_->lock();
      pool_->release(item_offset);
      pool_->unlock();
    }
  }

  stat_inc(&Stats::count);
  /*bool need_sample = getStatistics(rth, key_hash, 40, false);
  if(need_sample) located_bucket->item_vec[item_index] |= (uint64_t(1) << 39);*/
  if(pool_->sample_flag) setStatistics(pool_->rth, key_hash, new_item_size + pool_->get_poolstruct_item_size(), true);
  return Result::kReloadSuccess;
}
}
}

#endif