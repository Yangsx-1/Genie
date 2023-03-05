#pragma once
#ifndef MICA_TABLE_LTABLE_IMPL_MOVE_TO_HEAD_H_
#define MICA_TABLE_LTABLE_IMPL_MOVE_TO_HEAD_H_

namespace mica {
namespace table {
template <class StaticConfig>
void LTable<StaticConfig>::move_to_head(Bucket* bucket, Bucket* located_bucket,
                                        const Item* item, size_t key_length,
                                        size_t value_length, size_t item_index,
                                        uint64_t item_vec, uint8_t item_wrap_number,
                                        uint64_t item_offset) {
  if (!std::is_base_of<::mica::pool::CircularLogTag, typename Pool::Tag>::value)
    return;

  // for move-to-head;
  // this does not use Pool::get_item()'s item_size but recalculates a new
  // item_size to discard currently unused space within the pool for this
  // item.
  uint32_t item_size = static_cast<uint32_t>(
      sizeof(Item) + ::mica::util::roundup<8>(key_length) +
      ::mica::util::roundup<8>(value_length));

  // small distance_from_tail = recently appended at tail
  // it is not required to acquire a lock to read pool_->tail
  // because
  // some inaccurate number is OK
  // note that we are accessing pool_->tail, which uses a 64-bit
  // number; this is OK because we apply pool_->.mask mask
  // perform move-to-head within the same pool only

  /*uint64_t distance_from_tail =
      (Specialization::get_tail(pool_) - item_offset) &
      Specialization::get_mask(pool_); */
  Pool* pool_ = pools_[get_item_tenant_id(item_vec)];
  uint64_t pool_tail = Specialization::get_tail(pool_);
  uint64_t pool_size = Specialization::get_size(pool_);
  uint64_t distance_from_tail = 
    (item_offset < pool_tail) ? (pool_tail - item_offset) :  (pool_size - item_offset + pool_tail);

  if (distance_from_tail > pool_->get_mth_thres()) {
    lock_bucket(bucket);
    pool_->lock();

    // check if the original item is still there
    if (located_bucket->item_vec[item_index] == item_vec) {
      // allocate new space
      uint64_t new_item_offset_for_cleanup = pool_->get_tail_for_cleanup();

      uint64_t new_item_offset = pool_->allocate(item_size);
      uint8_t new_item_wrap_number = pool_->get_wrap_around_number();
      //uint64_t new_tail = Specialization::get_tail(pool_);

      uint64_t new_tail_for_cleanup = pool_->get_tail_for_cleanup();

      // see if the original item is still valid because
      // pool::allocate() by this thread or other threads may
      // have invalidated it
      if (Specialization::is_valid(pool_, item_wrap_number, item_offset)) {
        Item* new_item =
            reinterpret_cast<Item*>(pool_->get_item(new_item_offset));//返回的是更新之前的tail
        ::mica::util::memcpy<8>(reinterpret_cast<char*>(new_item),
                                reinterpret_cast<const char*>(item), item_size);

        located_bucket->item_vec[item_index] =
            make_item_vec(get_tag(item_vec), get_item_tenant_id(item_vec), new_item_wrap_number,new_item_offset);

        // success
        stat_inc(&Stats::move_to_head_performed);
      } else {
        // failed -- original data become invalid in the pool
        stat_inc(&Stats::move_to_head_failed);
      }

      // we need to hold the lock until we finish writing
      pool_->resize_log(); 
      pool_->unlock();
      unlock_bucket(bucket);

      // XXX: this may be too late; before cleaning, other threads may
      // have read some invalid location
      //      ideally, this should be done before writing actual data
      //cleanup_bucket(new_item_offset, new_tail);
      /*
       * @Author: Huijuan Xiao
       * @Description: Two new variables are added to ensure that 
       * the speed of bucket cleanup is consistent with mica.
       */
      cleanup_bucket(new_item_offset_for_cleanup, new_tail_for_cleanup);
    } else {
      pool_->unlock();
      unlock_bucket(bucket);

      // failed -- original data become invalid in the table
      stat_inc(&Stats::move_to_head_failed);
    }
  } else {
    stat_inc(&Stats::move_to_head_skipped);
  }
}
}
}

#endif
