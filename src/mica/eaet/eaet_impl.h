#ifndef _EAET_IMPL
#define _EAET_IMPL
#include "mica/eaet/eaet.h"
#include<cassert>
//#include<string.h>
#include<math.h>
#include<vector>
#include <algorithm>
#include<limits.h>
#include<string>
#include "mica/util/lcore.h"
#include "mica/eaet/least_square_regression.h"

namespace mica{
namespace eaet{
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
            break;
        }
    }
}

void STable::add_item(uint64_t keyhash, uint64_t last_time, uint64_t curr_time, Bucket* curr_bucket){
    size_t item_index = find_same_keyhash(keyhash, curr_bucket);
    if(item_index != item_number){//find item
        curr_bucket->item_vec[item_index].total_access_time++;
        curr_bucket->item_vec[item_index].total_reuse_time += curr_time - last_time;
        curr_bucket->item_vec[item_index].last_time = curr_time;
        return;
    }else{//didn't find item, add into hash table
        item_index = get_empty_or_oldest(curr_bucket);
        curr_bucket->item_vec[item_index].total_access_time = 1;
        curr_bucket->item_vec[item_index].total_reuse_time = 0;
        curr_bucket->item_vec[item_index].last_time = curr_time;
        curr_bucket->item_vec[item_index].keyhash = keyhash;
        return;
    }
}

size_t STable::size(){
    size_t numbers = 0;
    for(size_t bucket_index = 0; bucket_index < num_buckets_; bucket_index++){
        for(size_t item_index = 0; item_index < item_number; item_index++){
            if(buckets_[bucket_index].item_vec[item_index].keyhash != 0) numbers++;
        }
    }
    return numbers;
}



#define rth_domain 256

uint64_t maxer(uint64_t a, uint64_t b)
{
    if (a > b) return a;
    return b;
}

uint64_t domain_value_to_index(uint64_t value)//用来将一个长的reuse time进行压缩，以便存储
{
    uint64_t loc = 0, step = 1;
    uint64_t index = 0;
    while (loc + step * rth_domain < value)
    {
        loc += step * rth_domain;
        step *= 2;
        index += rth_domain;
    }
    while (loc < value)
    {
        index++; 
        loc += step;
    }
    return index;
}

uint64_t rthGet(rthRec *rth, uint64_t key, uint64_t size, uint64_t last_access_time)
{
    uint64_t len = size;
    uint64_t isMiss = 0;
    if (last_access_time == 0) isMiss = 1;
    if (!isMiss)
    {
        uint64_t rt = (uint64_t)domain_value_to_index((rth->n - last_access_time));
        rth->rtd[rt] += len;
        rth->read_rtd[rt] += 1;
    }
    else
    {
        rth->rtd[0] += len;
        rth->read_rtd[0] += 1;
    }
    // 更新该key节点的last_access_time
    last_access_time = rth->n;
    //rth->n += len;
    return last_access_time;
}

uint64_t rthUpdate(rthRec *rth, uint64_t key, uint64_t ori_size, uint64_t cur_size, uint64_t last_access_time)
{
    unsigned b = ori_size, a = cur_size;
    uint64_t rt = (uint64_t)domain_value_to_index((rth->n - last_access_time));
    if (last_access_time != 0)
    { // 如果不是第一次写，则可以计算rt
        if (a > b)
        {
            rth->rtd[rt] += b;
            rth->rtd[0] += a - b;
        }
        else
        {
            rth->rtd[rt] += a;
            rth->rtd_del[rt] += b - a;
        }
    }
    else
    {
        // 第一次写操作，直接默认全部miss
        rth->rtd[0] += a;
    }
    // 更新该key节点的last_acces_time
    last_access_time = rth->n;
    //rth->n += maxer(a, b);
    return last_access_time;
}

void rthCalcMRC(rthRec *rth, uint64_t tot_memory, uint64_t PGAP)
{
    //std::ofstream outfile,output;
    double sum = 0, tot = 0, N = 0;
    long step = 1; int dom = 1, dT = 1;
    int T = 0;

    double read_sum = 0;//get操作总数
    double read_N = 0;//总字节数
    //outfile.open("rth_readrtd.txt");
    for (int i = 0; i < rth_RTD_LENGTH; i++)
    {
        //outfile << i << '\t' << rth->read_rtd[i] << '\t' << rth->rtd[i] << std::endl;
        read_N += rth->read_rtd[i];
        N += rth->rtd[i] + rth->rtd_del[i];
    }
    rth->mrc = (double*)malloc((tot_memory / PGAP) * sizeof(double) + 10);
    memset(rth->mrc, 0, (tot_memory / PGAP) * sizeof(double) + 10);
    for (int i = 0; i < (tot_memory / PGAP + 1); i++)
        rth->mrc[i] = 1.0;
    if (read_N == 0) return;
    //output.open("record.txt");
    for (uint64_t c = PGAP; c <= tot_memory; c += PGAP)//用dT记录下标
    {
        
        while (dT < rth_RTD_LENGTH)
        {
            double d = 1.0 * (rth->rtd[dT] + rth->rtd_del[dT]);//d表示当前下标rtd数量，sum表示当前总rtd数量
            double tmp = step - (sum * step + d * (1 + step) / 2) / N;//tmp记录当前byte驱逐概率
            double record = (sum * step + d * (1 + step) / 2) / N;
            if (tot + tmp > c) break;//大于c表明要被驱逐
            tot += tmp;//tot记录当前驱逐概率需要的总内存大小
            T += step;
            if (++dom > rth_domain)
            {
                dom = 1; step *= 2;
            }
            sum += d;
            read_sum += 1.0 * rth->read_rtd[dT];
            dT++;
        }
        uint64_t mid, be = 0, ed = step;
        while (be < ed - 1)
        {
            mid = (be + ed) >> 1;
            double d = 1.0 * (rth->rtd[dT] + rth->rtd_del[dT]);
            double tmp = mid - (sum * mid + d * (1 + mid) * mid / 2 / step) / N;
            if (tot + tmp >= c) ed = mid; else be = mid;
        }
        double miss_ratio = (read_N - read_sum - 1.0 * rth->read_rtd[dT] / step * ed) / read_N;
        rth->mrc[(int)(c / PGAP)] = miss_ratio;
        //output << read_N << '\t' << read_sum << '\t' << miss_ratio << std::endl;
    }
    //outfile.close();
    //output.close();
}

void rthClear(rthRec *rth)
{
    memset(rth->rtd, 0, rth_RTD_LENGTH * sizeof(double));
	memset(rth->rtd_del, 0, rth_RTD_LENGTH * sizeof(uint64_t));
	memset(rth->read_rtd, 0, rth_RTD_LENGTH * sizeof(uint64_t));
    if (rth->mrc != NULL) free(rth->mrc);
    rth->mrc = NULL;
    rth->n = 0;
    rth->m = 0;
}

uint64_t getsize(rthRec *rth, uint64_t tot_memory, uint64_t PGAP, double hit_ratio) //PGAP单位为byte
{
    double miss_ratio = 1 - hit_ratio;
    uint64_t max_index = tot_memory / PGAP + 1;
    uint64_t index = 0;
    for (uint64_t i = 1; i < max_index; ++i) 
    {
        if (rth->mrc[i] < miss_ratio)
        {
            index = i;
            break;
        }
    }
    uint64_t size = PGAP * index;
    if (index == 0)
    {
        printf("we can only give you the max memory size\n");
        size = tot_memory;
    }

    return size;
}

uint64_t need_sample_mask = (uint64_t(1) << 16) - 1;//2^17 - 1(128 * 1024 - 1)
uint64_t need_sample_comp = 1024;

bool if_need_sample(uint64_t keyhash){
    return ((keyhash & need_sample_mask) < need_sample_comp);
}

void setStatistics(rthRec *rth, uint64_t keyhash, uint64_t size, bool isGet){
    if(if_need_sample(keyhash)){
        //printf("keyhash=%x\tkeyhash&mask17=%x\tkeyhash&mask20=%x\n", keyhash, keyhash & ((uint64_t(1) << 17) - 1), keyhash & ((uint64_t(1) << 20) - 1));
        size_t bucket_index = rth->timehash.calc_bucket_index(keyhash >> 20);
        STable::Bucket* curr_bucket = &rth->timehash.buckets_[bucket_index];
        size_t tmpindex = rth->timehash.find_same_keyhash(keyhash, curr_bucket);
        if(tmpindex != item_number){//在timehash中
            uint64_t access_time = rth->timehash.buckets_[bucket_index].item_vec[tmpindex].last_time;
            uint64_t last_time = access_time;
            //rth->statistichash[keyhash].first ++;
            //rth->statistichash[keyhash].second += (rth->n - access_time);
            if(isGet){
                access_time = rthGet(rth, keyhash, size, access_time);
                rth->timehash.add_item(keyhash, last_time, access_time, curr_bucket);
            }else{
                access_time = rthUpdate(rth, keyhash, size, size, access_time);
                rth->timehash.add_item(keyhash, last_time, access_time, curr_bucket);
            }
        }else{//不在timehash
            rth->timehash.add_item(keyhash, rth->n, rth->n, curr_bucket);
        }
    }
    rth->n += size;
}

/*bool compare_func(std::pair<uint64_t, std::pair<uint64_t, double>> tmp1, std::pair<uint64_t, std::pair<uint64_t, double>> tmp2){
    return tmp1.second.first > tmp2.second.first;
}

void ratio_compute(const rthRec *rth, double target, uint64_t eaet_size){
    std::vector<std::pair<uint64_t, std::pair<uint64_t, double>>> tmp_vector;//<keyhash, <access number, avg_reuse>>
    uint64_t total_access_count = 0;
    for(auto kv:rth->statistichash){
        std::pair<uint64_t, std::pair<uint64_t, double>> tmp_pair;
        tmp_pair.first = kv.first;
        tmp_pair.second.first = kv.second.first;
        tmp_pair.second.second = kv.second.second * 1.0 / kv.second.first;//将访问的总reuse换为avg_reuse
        tmp_vector.push_back(tmp_pair);
        total_access_count += tmp_pair.second.first;
    }
    std::sort(tmp_vector.begin(), tmp_vector.end(), compare_func);
    size_t local_id = ::mica::util::lcore.lcore_id();
    std::ofstream output;
    output.open(std::string("./rank_test/") + std::string("theta0.99-lcore_id") + std::to_string(local_id) + std::string(".txt"));
    for(int i = 0; i < 30; ++i){
        output << tmp_vector[i].second.first;
        if(i != 29) output << ',';
    }
    output.close();
    /*double total_ratio = 0, ratio_5 = 0, ratio_10 = 0, ratio_higher = 0;
    for(auto kv:tmp_vector){
        total_ratio += kv.second.first * 1.0 / total_access_count;//计算当前总命中率
        if(kv.second.second < 0.5 * eaet_size){
            ratio_5 += kv.second.first;
        }else if(kv.second.second > eaet_size){
            ratio_higher += kv.second.first;
        }else{
            ratio_10 += kv.second.first;
        }
        if(total_ratio > target) break;
    }
    double total = ratio_5 + ratio_10 + ratio_higher;
    printf("ratio0~0.5=%lf\t, ratio0.5~1=%lf\t, ratio>1=%lf\n", ratio_5 / total, ratio_10 / total, ratio_higher / total);
}*/

/*uint64_t compute_bias(rthRec *rth, uint64_t tmpsize){
    double number_5 = 0;
    double number_10 = 0;
    double threshold = 0.5 * tmpsize;
    double compute_coef = 0;
    for(auto kv:rth->statistichash){//统计数目
        double avg_reuse = kv.second.second * 1.0 / kv.second.first;
        if(avg_reuse <= threshold){
            number_5++;
            //compute_coef += 1;
            double tmpreuse = avg_reuse;
            while(avg_reuse < threshold){
                avg_reuse = avg_reuse + tmpreuse;
            }
            assert(avg_reuse < tmpsize);
            compute_coef += (tmpsize / avg_reuse - 1);
        }else if(avg_reuse > threshold && avg_reuse < tmpsize){
            number_10++;
            //compute_coef += (2.0 / 3.0 + (2.0 * avg_reuse / tmpsize) - (8.0 * avg_reuse * avg_reuse / (3.0 * tmpsize * tmpsize)));
            //double x = avg_reuse / tmpsize;
            //compute_coef += -68 * x * x * x + 150 * x * x - 108.5 * x + 26.166;
            compute_coef += (tmpsize / avg_reuse - 1);
        }
    }
    compute_coef /= (number_5 + number_10);

    printf("compute_coef = %lf\n", compute_coef);
    uint64_t bias = compute_coef * tmpsize;
    return bias;
}*/

uint64_t compute_bias(rthRec *rth, uint64_t tmpsize, size_t tenant_id){
    uint16_t lcore_id = static_cast<uint16_t>(::mica::util::lcore.lcore_id());
    double threshold = 0.5 * tmpsize;
    double coef = 0;
    double lower_thresh = 0;
    double between = 0;
    
    for(size_t bucket_index = 0; bucket_index < rth->timehash.num_buckets_; bucket_index++){
        for(size_t item_index = 0; item_index < item_number; item_index++){
            STable::aet_item tmp_item = rth->timehash.buckets_[bucket_index].item_vec[item_index];
            if(tmp_item.keyhash != 0){
                double avg_reuse = tmp_item.total_reuse_time / tmp_item.total_access_time;
                if(avg_reuse <= threshold){//0~0.5
                    double tmpreuse = avg_reuse;
                    if(tmpreuse == 0) continue;
                    lower_thresh ++;
                    while(avg_reuse < threshold){
                        avg_reuse = avg_reuse + tmpreuse;
                    }
                    assert(avg_reuse < tmpsize);
                    coef += (tmpsize / avg_reuse - 1);
                }else if(avg_reuse > threshold && avg_reuse < tmpsize){//0.5~1
                    between++;
                    coef += (tmpsize / avg_reuse - 1);
                }
            }
        }
    }

    coef = coef / (lower_thresh + between);

    uint64_t bias = tmpsize * coef;
    //printf("lcore%u tenant%u\teaet size=%lu\tbias=%lu\n", lcore_id, tenant_id, tmpsize, bias);

    return bias;
}

uint64_t compute_bias_with_theta(rthRec *rth, uint64_t tmpsize, size_t tenant_id, double* out_theta){
    uint16_t lcore_id = static_cast<uint16_t>(::mica::util::lcore.lcore_id());
    double threshold = 0.5 * tmpsize;
    double coef = 0;
    double lower_thresh = 0;
    double between = 0;
    /*double total_avg_reuse = 0;
    uint64_t total_hash_size = rth->timehash.size();

    for(size_t bucket_index = 0; bucket_index < rth->timehash.num_buckets_; bucket_index++){
        for(size_t item_index = 0; item_index < item_number; item_index++){
            STable::aet_item tmp_item = rth->timehash.buckets_[bucket_index].item_vec[item_index];
            if(tmp_item.keyhash != 0){
                total_avg_reuse += tmp_item.total_reuse_time / tmp_item.total_access_time;
            }
        }
    }

    total_avg_reuse /= total_hash_size;
    printf("lcore%u tenant%u\ttotal avg reuse=%lf\tmy hash size=%lu\teaet size=%lu\n", lcore_id, tenant_id, total_avg_reuse, total_hash_size, tmpsize);*/
    std::vector<uint32_t> access_time_vec;
    for(size_t bucket_index = 0; bucket_index < rth->timehash.num_buckets_; bucket_index++){
        for(size_t item_index = 0; item_index < item_number; item_index++){
            STable::aet_item tmp_item = rth->timehash.buckets_[bucket_index].item_vec[item_index];
            if(tmp_item.keyhash != 0){
                double avg_reuse = tmp_item.total_reuse_time / tmp_item.total_access_time;
                access_time_vec.push_back(tmp_item.total_access_time);
                if(avg_reuse <= threshold){//0~0.5
                    double tmpreuse = avg_reuse;
                    if(tmpreuse == 0) continue;
                    lower_thresh ++;
                    while(avg_reuse < threshold){
                        avg_reuse = avg_reuse + tmpreuse;
                    }
                    assert(avg_reuse < tmpsize);
                    coef += (tmpsize / avg_reuse - 1);
                }else if(avg_reuse > threshold && avg_reuse < tmpsize){//0.5~1
                    between++;
                    coef += (tmpsize / avg_reuse - 1);
                }
            }
        }
    }

    coef = coef / (lower_thresh + between);

    uint64_t bias = tmpsize * coef;
    std::vector<uint32_t> sorted_access_time = GetMaxNumbers(access_time_vec, 30);
    uint32_t sorted_vec[30];
    for(int i = 0; i < 30; i++){
        sorted_vec[i] = sorted_access_time[i];
    } 
    *out_theta = skewEstimation(sorted_vec, 30);
    //printf("lcore%u tenant%u\teaet size=%lu\tbias=%lu\n", lcore_id, tenant_id, tmpsize, bias);

    return bias;
}

}
}

#endif