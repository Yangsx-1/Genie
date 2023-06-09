#ifndef _PARDA_IMPL
#define _PARDA_IMPL

#include "parda.h"
#include "least_square_regression.h"
#include<climits>

namespace mica{
namespace parda{

STable::STable()
{
    size_t num_buckets = 1048576;// 65536;
    num_buckets_ = (uint64_t)num_buckets;
    num_buckets_mask_ = (uint64_t)(num_buckets - 1);

    buckets_ = (Bucket*)malloc(sizeof(Bucket) * num_buckets_);

    memset(buckets_, 0, sizeof(Bucket) * (num_buckets_));
}

uint32_t STable::calc_bucket_index(uint64_t keyhash) const
{
    //return static_cast<uint32_t>(key_hash) & num_buckets_mask_;
    return keyhash & num_buckets_mask_;
}

size_t STable::get_empty_or_oldest(const Bucket* curr_bucket)
{
    size_t item_index = 0;
    uint64_t oldest_time = ULLONG_MAX;
    for (size_t i = 0; i < item_number; ++i)
    {
        if (curr_bucket->item_vec[i].keyhash == 0) return i;//empty
        if (oldest_time > curr_bucket->item_vec[i].last_time)
        {
            item_index = i;
            oldest_time = curr_bucket->item_vec[i].last_time;
        }
    }
    return item_index;
}

size_t STable::find_same_keyhash(uint64_t keyhash, const Bucket* curr_bucket)
{
    for (size_t i = 0; i < item_number; i++)
    {
        if (curr_bucket->item_vec[i].keyhash == keyhash) return i;
    }
    return item_number;
}

void STable::erase_item(uint64_t keyhash, size_t bucket_index)
{
    Bucket* bucket = this->buckets_;
    Bucket* curr_bucket = &bucket[bucket_index];
    for (size_t i = 0; i < item_number; i++)
    {
        if (curr_bucket->item_vec[i].keyhash == keyhash)
        {
            curr_bucket->item_vec[i].keyhash = 0;
            curr_bucket->item_vec[i].last_time = 0;
            curr_bucket->item_vec[i].total_access_time = 0;
            break;
        }
    }
}

void STable::add_item(uint64_t keyhash, uint64_t curr_time, Bucket* curr_bucket, size_t item_index){
    if(item_index != item_number){//find item
        curr_bucket->item_vec[item_index].total_access_time++;
        curr_bucket->item_vec[item_index].last_time = curr_time;
        return;
    }else{//didn't find item, add into hash table
        item_index = get_empty_or_oldest(curr_bucket);
        curr_bucket->item_vec[item_index].total_access_time = 1;
        curr_bucket->item_vec[item_index].last_time = curr_time;
        curr_bucket->item_vec[item_index].keyhash = keyhash;
        return;
    }
}

void STable::cleanup_all(){
    for(uint64_t bucket_index = 0; bucket_index < num_buckets_; bucket_index++){
        for(uint64_t item_index = 0; item_index < item_number; item_index++){
            if(buckets_[bucket_index].item_vec[item_index].keyhash == 0) continue;
            buckets_[bucket_index].item_vec[item_index].keyhash = 0;
            buckets_[bucket_index].item_vec[item_index].last_time = 0;
            buckets_[bucket_index].item_vec[item_index].total_access_time = 0;
        }
    }
}

/*size_t STable::size(){
    size_t numbers = 0;
    for(size_t bucket_index = 0; bucket_index < num_buckets_; bucket_index++){
        for(size_t item_index = 0; item_index < item_number; item_index++){
            if(buckets_[bucket_index].item_vec[item_index].keyhash != 0) numbers++;
        }
    }
    return numbers;
}*/

static inline void process_one_access(uint64_t keyhash, parda_data_t* pdt) {
    int distance;
    size_t bucket_index = pdt->table->calc_bucket_index(keyhash >> 20);
    STable::Bucket* curr_bucket = &pdt->table->buckets_[bucket_index];
    size_t item_index = pdt->table->find_same_keyhash(keyhash, curr_bucket);
    uint32_t time = pdt->n;
    if (item_index == item_number) {
        pdt->root = Tinsert(time, pdt->root);

        pdt->histogram[B_INF] += 1;
        
        pdt->table->add_item(keyhash, time, curr_bucket, item_index);
    }
    // Hit: We've seen this data before
    else {
        int lookup = curr_bucket->item_vec[item_index].last_time;
        pdt->root = Tinsert(lookup, pdt->root);
        distance = node_size(pdt->root->right);
        pdt->root = Tdelete(lookup, pdt->root);
        pdt->root = Tinsert(time, pdt->root);
        pdt->table->add_item(keyhash, time, curr_bucket, item_index);
        // Is distance greater than the largest bucket
        if (distance > nbuckets)
            pdt->histogram[B_OVFL] += 1;
        else
            pdt->histogram[distance] += 1;
        //printf("distance=%d lookup=%lu\n", distance, lookup);
    }
    pdt->n++;
}

uint64_t get_pred_size(uint32_t* histogram, uint64_t sample_rate, double target, uint64_t item_size){
    int last_bucket = nbuckets - 1;
    uint64_t sum = 0;
    uint64_t cum = 0;
    uint64_t dist_index;
    while (histogram[last_bucket] == 0)
        last_bucket--;
    
    for (int i = 0; i <= last_bucket; i++)
        sum += histogram[i];
    sum += histogram[B_OVFL];
    sum += histogram[B_INF];

    for (int i = 0; i <= last_bucket; i++) {
        cum += histogram[i];
        double cum_rate = 1.0 * cum / sum;
        if(cum_rate > target){
            dist_index = i;
            break;
        }
    }
    printf("dist=%lu rate=%lu size=%lu\n", dist_index, sample_rate, item_size);

    return dist_index * sample_rate * item_size;
}

uint64_t need_sample_mask = (uint64_t(1) << 20) - 1;//2^17 - 1(128 * 1024 - 1)
uint64_t need_sample_comp = 1024;
uint64_t need_sample_masks[7] = {(uint64_t(1) << 10) - 1, (uint64_t(1) << 13) - 1, (uint64_t(1) << 15) - 1,
                                (uint64_t(1) << 16) - 1, (uint64_t(1) << 17) - 1, (uint64_t(1) << 18) - 1, (uint64_t(1) << 20) - 1};

bool set_sampling(uint64_t keyhash){
    return ((keyhash & need_sample_mask) < need_sample_comp);
}

void pardaStatistics(uint64_t keyhash, parda_data_t* pdt){
    if(keyhash == 0) return;
    if(set_sampling(keyhash)){
        process_one_access(keyhash, pdt);
    }
}

double theta_calculation(STable* table){
    uint32_t heap[30] = {0};
    for(uint64_t bucket_index = 0; bucket_index < table->num_buckets_; ++bucket_index){
        for(uint64_t item_index = 0; item_index < item_number; ++item_index){
            STable::hash_item tmp_item = table->buckets_[bucket_index].item_vec[item_index];
            if(tmp_item.keyhash != 0){
                if(tmp_item.total_access_time > heap[0]){
                    heap[0] = tmp_item.total_access_time;
                    uptodown(heap, 30, 0);
                }
            }
        }
    }
    std::sort(heap, heap + 30, std::greater<int>());
    return skewEstimation(heap, 30);
}

void clean_up_parda(parda_data_t* pdt){
    pdt->table->cleanup_all();
    freetree(pdt->root);
    pdt->root = NULL;
    memset(pdt->histogram, 0, (nbuckets + 2) * sizeof(uint32_t));
    pdt->n = 0;
}

}
}

#endif