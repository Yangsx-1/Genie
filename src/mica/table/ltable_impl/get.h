#pragma once
#ifndef MICA_TABLE_LTABLE_IMPL_GET_H_
#define MICA_TABLE_LTABLE_IMPL_GET_H_

#include "mica/parda/parda.h"
namespace mica {
namespace table {
template <class StaticConfig>
Result LTable<StaticConfig>::get(uint64_t key_hash, const char* key,
                                 size_t key_length, char* out_value,
                                 size_t in_value_length,
                                 size_t* out_value_length,
                                 bool allow_mutation) const {
  assert(key_length <= kMaxKeyLength);
  uint32_t bucket_index = calc_bucket_index(key_hash);
  uint8_t tag = calc_tag(key_hash);

  const Bucket* bucket = buckets_ + bucket_index;
  bool partial_value;
  size_t item_size = 0;
  Pool* operation_pool = nullptr;
  while (true) {
    uint32_t version_start = read_version_begin(bucket);

    const Bucket* located_bucket;
    size_t item_index = find_item_index(bucket, key_hash, tag, key, key_length,
                                        &located_bucket);
    if (item_index == StaticConfig::kBucketSize) {
      if (version_start != read_version_end(bucket))
        continue;  //数据在被编辑，就等待
      stat_inc(&Stats::get_notfound);
      return Result::kGetNotFound;
    }

    uint64_t item_vec = located_bucket->item_vec[item_index];
    uint64_t item_offset = get_item_offset(item_vec);
    uint16_t item_wrap_number = get_item_wrap_around_number(item_vec);
    uint8_t tenant_id = get_item_tenant_id(item_vec);
    if (tenant_id >= kTenantCount) {
      printf("Too many tenants!\n");
      exit(EXIT_FAILURE);
    }
    Pool* pool_ = pools_[tenant_id];
    operation_pool = pool_;
    // we may read garbage data, but all operations relying on them are safe
    // here
    /*
     * @Author: Huijuan Xiao
     * @Description:Adjust the calling position of the is_valid function, 
     * lock the bucket and set the corresponding vec to zero.
     */
    /*********************************************/
    if (!Specialization::is_valid(pool_, item_wrap_number, item_offset)) {
      if (version_start != read_version_end(bucket)) continue;

      if (allow_mutation) {
        auto mut_this = const_cast<LTable<StaticConfig>*>(this);
        auto mut_bucket = const_cast<Bucket*>(bucket);
        auto mut_located_bucket = const_cast<Bucket*>(located_bucket);
        // remove stale item; this may remove some wrong item, but we do not
        // care because (1) if this key has been deleted and reinserted, it is
        // none of our business here (2) if this key has been deleted and a
        // different key was inserted, we delete innocent key, but without any
        // fatal issue. this will slow down query speed for outdated matching
        // key at first, but improves it later by skipping the value copy step
        mut_this->lock_bucket(mut_bucket);
        if (located_bucket->item_vec[item_index] != 0) {
          mut_located_bucket->item_vec[item_index] = 0;
          stat_dec(&Stats::count);
        }
        mut_this->unlock_bucket(mut_bucket);
      }

      stat_inc(&Stats::get_notfound);
      return Result::kGetNotFound;
    }
    /******************************/

    const Item* item =
        reinterpret_cast<const Item*>(pool_->get_item(item_offset));
    uint32_t kv_length_vec = item->kv_length_vec;

    // We used to read key_length again in the old version, but we do not need
    // it because if this bucket is not changed, the stored key_length will be
    // the same as the key_length argument, and if this bucket is changed, we
    // can ignore (possibly invalid) key_length for now and retry again later.

    // key_length = get_key_length(kv_length_vec);
    // An invalid value means that a concurrent change is ongoing.
    // if (key_length > kMaxKeyLength) continue;

    size_t value_length = get_value_length(kv_length_vec);
    item_size = key_length + value_length + basic_struct_size;
    bool invalid_value_length = false;

    if (value_length <= kMaxValueLength) {
      *out_value_length = std::min(value_length, in_value_length);
      partial_value = (value_length != *out_value_length);
      ::mica::util::memcpy<8>(out_value,
                              item->data + ::mica::util::roundup<8>(key_length),
                              *out_value_length);  //这里把value拷贝到out_value
    } else {
      // An invalid value means that a concurrent change is ongoing.
      invalid_value_length = true;
      // Just to suppress a compiler warning.
      partial_value = false;
    }

    //if (invalid_value_length || !Specialization::is_valid(pool_, item_wrap_number, item_offset)) {
    if (invalid_value_length) {
      /*如果是不可用，还要将bucket锁住才能置为0*/
      if (version_start != read_version_end(bucket)) continue;

      if (allow_mutation) {
        auto mut_this = const_cast<LTable<StaticConfig>*>(this);
        auto mut_bucket = const_cast<Bucket*>(bucket);
        auto mut_located_bucket = const_cast<Bucket*>(located_bucket);
        // remove stale item; this may remove some wrong item, but we do not
        // care because (1) if this key has been deleted and reinserted, it is
        // none of our business here (2) if this key has been deleted and a
        // different key was inserted, we delete innocent key, but without any
        // fatal issue. this will slow down query speed for outdated matching
        // key at first, but improves it later by skipping the value copy step
        mut_this->lock_bucket(mut_bucket);
        if (located_bucket->item_vec[item_index] != 0) {
          mut_located_bucket->item_vec[item_index] = 0;
          stat_dec(&Stats::count);
        }
        mut_this->unlock_bucket(mut_bucket);
      }

      stat_inc(&Stats::get_notfound);
      return Result::kGetNotFound;
    }

    if (version_start != read_version_end(bucket)) continue;

    stat_inc(&Stats::get_found);

    if (allow_mutation)
      const_cast<LTable<StaticConfig>*>(this)->move_to_head(
          const_cast<Bucket*>(bucket), const_cast<Bucket*>(located_bucket),
          item, key_length, value_length, item_index, item_vec,
          item_wrap_number, item_offset, key_hash);

    break;
  }

  if (partial_value) {
    //printf("kpartialvalue!\n");
    return Result::kPartialValue;
  } else {
    if (operation_pool->sample_flag)
      ::mica::parda::pardaStatistics(key_hash, operation_pool->parda);
    return Result::kGetSuccess;
  }
}
}  // namespace table
}  // namespace mica

#endif