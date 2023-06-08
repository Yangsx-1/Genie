#pragma once
#ifndef MICA_PROCESSOR_PARTITIONS_IMPL_PROCESS_H_
#define MICA_PROCESSOR_PARTITIONS_IMPL_PROCESS_H_

#include<stdlib.h>

namespace mica {
namespace processor {
// double diff_in_sec(uint64_t new_t, uint64_t old_t){
//   return static_cast<double>(new_t - old_t) /
//           static_cast<double>(2097582670);
// }
template <class StaticConfig>
template <class RequestAccessor>
void Partitions<StaticConfig>::process(RequestAccessor& ra) {
  assert(::mica::util::lcore.lcore_id() != ::mica::util::LCore::kUnknown);
  uint16_t lcore_id = static_cast<uint16_t>(::mica::util::lcore.lcore_id());
  uint64_t stage_gap = load_stats_[lcore_id].stage_gap;
  // uint64_t pipeline_size = static_cast<uint64_t>(pipeline_size_);
  uint64_t pipeline_size = ::mica::util::next_power_of_two(3 * stage_gap);
  assert(pipeline_size > 0);
  uint64_t pipeline_size_mask = pipeline_size - 1;

  if (StaticConfig::kVerbose)
    printf("lcore %2" PRIu16 ": pipeline_size: %" PRIu64 "\n", lcore_id,
           pipeline_size);

  uint64_t start_t = ::mica::util::rdtsc();

  uint64_t last_gap_update_t = start_t;
  static const uint64_t gap_update_interval =
      0x10000;  // Must be a power of two.

  uint16_t partition_ids[pipeline_size];
  //uint64_t sampling_times[16][16];
  // The maximum requests to handle at once.
  uint64_t count = static_cast<uint64_t>(static_cast<uint32_t>(-1));
  uint64_t count_plus_gap = count;
  count_plus_gap += 3 * stage_gap;

  // Note that we use uint64_t instead of int64_t even when we are dealing with
  // negative numbers.  The trick is that we can omit "index >= 0" checking by
  // using "index < count".
  for (uint64_t i_ = 0; i_ < count_plus_gap; i_++) {
    uint64_t index = i_;
    //uint64_t time1 = ::mica::util::rdtsc();
    if (StaticConfig::kVerbose)
      printf("lcore %2" PRIu16 ": [0] i_ %" PRIu64 ", index %" PRIu64
             ", count %" PRIu64 ", count_plus_gap %" PRIu64 "\n",
             lcore_id, i_, index, count, count_plus_gap);

    if (count == static_cast<uint64_t>(static_cast<uint32_t>(-1))) {
      if (StaticConfig::kVerbose)
        printf("lcore %2" PRIu16 ": prepare index %" PRIu64 ", count %" PRIu64
               "\n",
               lcore_id, index, count);
      if (!ra.prepare(index)) {
        count = index;
        count_plus_gap = count;
        count_plus_gap += 3 * stage_gap;
      }
    }
    index -= stage_gap;
    //uint64_t time2 = ::mica::util::rdtsc();
    //sampling_times[lcore_id][static_cast<uint8_t>(ra.get_key(index)[7])] += diff_in_sec(time2 ,time1);


    if (StaticConfig::kVerbose)
      printf("lcore %2" PRIu16 ": [1] i_ %" PRIu64 ", index %" PRIu64
             ", count %" PRIu64 ", count_plus_gap %" PRIu64 "\n",
             lcore_id, i_, index, count, count_plus_gap);
    //uint64_t time3 = ::mica::util::rdtsc();
    if (index < count) {
      auto key_hash = ra.get_key_hash(index);
      auto partition_id = get_partition_id(key_hash);
      partition_ids[index & pipeline_size_mask] = partition_id;
      if (StaticConfig::kPrefetchTable) {
        if (StaticConfig::kVerbose)
          printf("lcore %2" PRIu16 ": prefetch_table index %" PRIu64
                 ", count %" PRIu64 "\n",
                 lcore_id, index, count);
        if (!StaticConfig::kSkipPrefetchingForRecentKeyHashes ||
            !is_recent_key_hash(lcore_id, key_hash)) {
          auto table = tables_[partition_id];
          table->prefetch_table(key_hash);
        }
      }
    }
    index -= stage_gap;
    //uint64_t time4 = ::mica::util::rdtsc();
    //sampling_times[lcore_id][static_cast<uint8_t>(ra.get_key(index)[7])] += diff_in_sec(time4 ,time3);
    if (StaticConfig::kVerbose)
      printf("lcore %2" PRIu16 ": [2] i_ %" PRIu64 ", index %" PRIu64
             ", count %" PRIu64 ", count_plus_gap %" PRIu64 "\n",
             lcore_id, i_, index, count, count_plus_gap);
    //uint64_t time5 = ::mica::util::rdtsc();
    if (index < count) {
      if (StaticConfig::kPrefetchPool) {
        if (StaticConfig::kVerbose)
          printf("lcore %2" PRIu16 ": prefetch_pool index %" PRIu64
                 ", count %" PRIu64 "\n",
                 lcore_id, index, count);
        auto key_hash = ra.get_key_hash(index);
        if (!StaticConfig::kSkipPrefetchingForRecentKeyHashes ||
            !is_recent_key_hash(lcore_id, key_hash)) {
          auto partition_id = partition_ids[index & pipeline_size_mask];
          auto table = tables_[partition_id];
          table->prefetch_pool(key_hash);
        }
      }
    }
    index -= stage_gap;
    //uint64_t time6 = ::mica::util::rdtsc();
    //sampling_times[lcore_id][static_cast<uint8_t>(ra.get_key(index)[7])] += diff_in_sec(time6 ,time5);
    if (StaticConfig::kVerbose)
      printf("lcore %2" PRIu16 ": [3] i_ %" PRIu64 ", index %" PRIu64
             ", count %" PRIu64 ", count_plus_gap %" PRIu64 "\n",
             lcore_id, i_, index, count, count_plus_gap);
    //uint64_t time7 = ::mica::util::rdtsc();
    if (index < count) {
      if (StaticConfig::kVerbose)
        printf("lcore %2" PRIu16 ": process index %" PRIu64 ", count %" PRIu64
               "\n",
               lcore_id, index, count);
      auto operation = ra.get_operation(index);
      auto key_hash = ra.get_key_hash(index);
      auto partition_id = partition_ids[index & pipeline_size_mask];
      auto table = tables_[partition_id];
      auto owner_lcore_id = owner_lcore_ids_[partition_id];

      bool accept;
      switch (operation) {
        case Operation::kGet:
        case Operation::kTest:
          accept = concurrent_read_ || owner_lcore_id == lcore_id;
          break;
        case Operation::kSet:
        case Operation::kDelete:
          accept = concurrent_write_ || owner_lcore_id == lcore_id;
          break;
        default:
          accept = true;
          break;
      }
      if (!accept) {
        ra.set_out_value_length(index, 0);
        ra.set_result(index, Result::kRejected);

        if (StaticConfig::kVerbose)
          printf("lcore %2" PRIu16 ": retire index %" PRIu64 ", count %" PRIu64
                 "\n",
                 lcore_id, index, count);

        ra.retire(index);
      } else {
        Result result;
        load_stats_[lcore_id].request_count[partition_id]++;
        switch (operation) {
          case Operation::kSet: {
            result = table->set(key_hash, ra.get_key(index),
                                ra.get_key_length(index), ra.get_value(index),
                                ra.get_value_length(index), true);
            ra.set_out_value_length(index, 0);
          } break;
          case Operation::kGet: {
            // TODO: Do not set allow_mutation to true for non-owner cores under
            // concurrent_write to reduce inter-core traffic.
            // bool allow_mutation =
            //     (concurrent_write_ || owner_lcore_ids_[partition_id] ==
            //     lcore_id);
            bool allow_mutation = owner_lcore_ids_[partition_id] == lcore_id;
            auto out_value = ra.get_out_value(index);
            auto out_value_length = ra.get_out_value_length(index);
            result = table->get(
                key_hash, ra.get_key(index), ra.get_key_length(index),
                out_value, out_value_length, &out_value_length, allow_mutation);
            if (result == Result::kGetSuccess || result == Result::kPartialValue){
              ra.set_out_value_length(index, out_value_length);
            }
            else{//kgetnotfound, reset_item
              uint8_t tenant_id = table->calc_tenant_id(ra.get_key(index));
              size_t reload_value_length_ = std::max(8.0, avg_value_length[tenant_id]);
              //size_t reload_value_length_ = 8;
              char reload_value_[reload_value_length_];
              memset(reload_value_, 128, sizeof(char)*reload_value_length_);
              result = table->reset_item(key_hash, ra.get_key(index),ra.get_key_length(index), reload_value_,
                                reload_value_length_, true);//result=kReloadSuccess
              ra.set_out_value_length(index, 0);
            }
          } break;
          case Operation::kTest: {
            result = table->test(key_hash, ra.get_key(index),
                                 ra.get_key_length(index));
            ra.set_out_value_length(index, 0);
          } break;
          case Operation::kDelete: {
            result = table->del(key_hash, ra.get_key(index),
                                ra.get_key_length(index));
            ra.set_out_value_length(index, 0);
          } break;
          default:
            assert(false);
            result = Result::kError;
            ra.set_out_value_length(index, 0);
            break;
        }

        ra.set_result(index, result);

        if (StaticConfig::kVerbose)
          printf("lcore %2" PRIu16 ": retire index %" PRIu64 ", count %" PRIu64
                 "\n",
                 lcore_id, index, count);

        ra.retire(index);
      }

      if (StaticConfig::kSkipPrefetchingForRecentKeyHashes)
        update_recent_key_hash(lcore_id, key_hash);

      if (StaticConfig::kAutoStageGap) {
        if ((i_ & (gap_update_interval - 1)) == (gap_update_interval - 1) &&
            target_stage_gap_time_ != 0) {
          uint64_t gap_update_t = ::mica::util::rdtsc();
          uint64_t diff = gap_update_t - last_gap_update_t;
          last_gap_update_t = gap_update_t;

          uint64_t gap_time = stage_gap * diff / gap_update_interval;
          if (gap_time > 0)
            stage_gap = (stage_gap * target_stage_gap_time_ + (gap_time - 1)) /
                        gap_time;
          if (stage_gap < 1) stage_gap = 1;
          if (stage_gap > 16) stage_gap = 16;
        }
      }
    }
    //uint64_t time8 = ::mica::util::rdtsc();
    //sampling_times[lcore_id][static_cast<uint8_t>(ra.get_key(index)[7])] += diff_in_sec(time8 ,time7);
    if (StaticConfig::kVerbose)
      printf("lcore %2" PRIu16 ": [4] i_ %" PRIu64 ", index %" PRIu64
             ", count %" PRIu64 ", count_plus_gap %" PRIu64 "\n",
             lcore_id, i_, index, count, count_plus_gap);
  }

  uint64_t now = ::mica::util::rdtsc();

  if (StaticConfig::kAutoStageGap) {
    if (count_plus_gap < gap_update_interval - 1 &&
        target_stage_gap_time_ != 0) {
      uint64_t gap_update_t = now;
      uint64_t diff = gap_update_t - last_gap_update_t;
      last_gap_update_t = gap_update_t;

      uint64_t gap_time = stage_gap * diff / gap_update_interval;
      if (gap_time > 0)
        stage_gap =
            (stage_gap * target_stage_gap_time_ + (gap_time - 1)) / gap_time;
      if (stage_gap < 1) stage_gap = 1;
      if (stage_gap > 16) stage_gap = 16;
    }

    load_stats_[lcore_id].stage_gap = stage_gap;
  }

  uint64_t diff = now - start_t;
  load_stats_[lcore_id].processing_time += diff;

  if (StaticConfig::kVerbose) {
    if (count > 0) {
      printf("lcore %2hu: %" PRIu64 " clocks/req | gap time = %" PRIu64
             " clocks\n",
             lcore_id, diff / count, stage_gap * diff / count);
    }
  }

  apply_pending_owner_lcore_changes();
}

}
}

#endif