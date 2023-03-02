#include<iostream>
#include<limits>
#include<assert.h>
#include<time.h>
#include<stdlib.h>
#include<chrono>
#include<random>
#include<unistd.h>
#include<inttypes.h>

using namespace std;
bool resize_log();
void update_log_size();
void update_log_parameter();
void print_stats();
uint64_t eaet();
bool memory_adjustment();
template <uint64_t PowerOfTwoNumber, typename T> static constexpr T roundup(T x);
template <typename T> static constexpr bool is_power_of_two(T x);


bool concurrent_access_mode_ = 0;
/*
bool log_size_calculation_flag_ = 0;
bool memory_adjustment_flag_ = 0;
*/
uint8_t log_flag = 0;
uint64_t init_size_ = 1024 * 1024 * 1024;
uint64_t size_ = 0;
uint64_t new_log_size_ = 0;
uint64_t tail_ = 0;
double ma_thres = 0.5;// threshold for log size adjustment
uint64_t ma_thres_ = 0;
  static constexpr size_t kAdjustMinimumSize = 32 * 1048576;//32MB
uint8_t wrap_around_number_ = 0;
static constexpr size_t kMinimumSize = 2 * 1048576;//2MB

int flag = 0;

unsigned seed1 = std::chrono::system_clock::now().time_since_epoch().count();
std::mt19937_64 g1(seed1);

/*
随机初始化log size和eaet计算结果。tail+=random().
结果合规性判断：
1.log size和new log size都是2MB的倍数
2.如果是log增大，则在tail大于原log一半的时候就进行调整了。
3.如果是log减小，
    如果new log size<tail,则要将new log size调整为tail向上取整2MB的倍数。
    如果new log size=tail,则要将new log size调整为tail也就是new log size。
    如果new log size>tail,则此时对tail向上取整，应该=new log size。
*/

int main(){
    for(int i = 0; i < 10; i++){
        tail_ = 0;
        /*
        log_size_calculation_flag_ = 0;
        memory_adjustment_flag_ = 0;*/
        log_flag = 0;
        size_ = 1024 * 1024 * 1024;
        ma_thres_ = static_cast<uint64_t>(
        static_cast<double>(size_) * ma_thres);
        flag = 0;
        while(flag == 0){//resize_log可以运行的最后一次，会把flag置为1
            tail_ += g1()%256;
            resize_log();
        }
    }

    /*
    合并两个flag至一个uint8_t的变量中。
    */
    uint8_t log_resizing_flag = 0; 
    //static constexpr uint64_t kItemOffsetMask = (uint64_t(1) << 40) - 1;
    log_resizing_flag |= uint8_t(1)<<4;
    log_resizing_flag |= uint8_t(1);
    printf("0x%"PRIx8"\n",log_resizing_flag);
    printf("%zu\n",log_resizing_flag);
    /*
    拆解log_resizing_flag
    */
    uint8_t calculation = log_resizing_flag >> 4;
    printf("0x%"PRIx8"\n",calculation);
    printf("%zu\n",calculation);

    uint8_t memory_adjustment = log_resizing_flag & 1;
    printf("0x%"PRIx8"\n",memory_adjustment);
    printf("%zu\n",memory_adjustment);
    return 0;
}

bool resize_log(){
  if (concurrent_access_mode_ != 0){
    fprintf(stderr, "error: concurrent_access_mode_ != 0\n");
    assert(false);
    return false;
  }
  if(!(log_flag >> 4)){
    if(tail_ > ma_thres_){
      uint64_t eaet_log_size = eaet();//输出信息
      if (eaet_log_size < kAdjustMinimumSize) {//32MB
        new_log_size_ = kAdjustMinimumSize;
      }
      else{ 
        new_log_size_ = roundup<2 * 1048576>(eaet_log_size);
      }
      printf("round up eaet_:%zu\n",new_log_size_);
      log_flag |= uint8_t(1)<<4;
      return true;
    }
    else{
      return true;
    }
  }
  else{//log_size_calculation_flag_ == true
    if(log_flag & 1){//内存调整过以后，现在的实际的log大小已经是最新的了
      if(size_ > tail_){
        if(size_ - tail_ < kMinimumSize){//这一轮的数据已经写到最后一个page上了
          flag = 1;
          print_stats();
          update_log_parameter();
          return true;
        }
        else{
          return true;
        }
      }
      else{//size_ =< tail_
        printf("tail=%zu,log size=%zu,log_flag_=%d\n",tail_,size_,log_flag);
        fprintf(stderr, "error: illegal tail of the log.\n");
        assert(!(log_flag >> 4));
        assert(!(log_flag & 1));
        assert(false);
        return false;
      }
    }
    else{//这一轮还没进行内存调整
      if(new_log_size_ == size_){
        update_log_size();
        //memory_adjustment_flag_ = 1;
        log_flag |= uint8_t(1);
        return true;
      }
      else if(new_log_size_ > size_){
        if(!memory_adjustment()){
          fprintf(stderr, "error: failed to adjustment log memory\n");
          assert(false);
          return false;
        }
        update_log_size();
        //memory_adjustment_flag_ = 1;
        log_flag |= uint8_t(1);
        return true;
      }
      else{//new_log_size_ < size_
        if(tail_ < new_log_size_){
          if(new_log_size_ - tail_ < kMinimumSize){
            if(!memory_adjustment()){
              fprintf(stderr, "error: failed to adjustment log memory\n");
              assert(false);
              return false;
            }
            update_log_size();
            //memory_adjustment_flag_ = 1;
            log_flag |= uint8_t(1);
            flag = 1;
            print_stats();
            update_log_parameter();
            return true;
          }
          else{
            return true;
          }
        }
        else if(tail_ == new_log_size_){
        //这里要直接把其他flag都调整好了。因为不能再允许tail再往前 走一步了。
          if(!memory_adjustment()){
            fprintf(stderr, "error: failed to adjustment log memory\n");
            assert(false);
            return false;
          } 
          update_log_size();
          //memory_adjustment_flag_ = 1;//这里就不能让tail再往下写了，要直接将对应参数更新了。
          log_flag |= uint8_t(1);
          flag = 1;
          print_stats();
          update_log_parameter();
          return true;         
        }
        else{//tail_ > new_log_size_
          new_log_size_ = roundup<2 * 1048576>(tail_);
          if(!memory_adjustment()){
            fprintf(stderr, "error: failed to adjustment log memory\n");
            assert(false);
            return false;
          } 
          update_log_size();
          //memory_adjustment_flag_ = 1;
          log_flag |= uint8_t(1);
          flag = 1;
          print_stats();
          update_log_parameter();
          return true;           
        }
      }
    }
  }
  return true;
}

void update_log_size(){
  if (concurrent_access_mode_ != 0){
    fprintf(stderr, "error: concurrent_access_mode_ != 0\n");
    assert(false);
  }
  size_ = new_log_size_;
  new_log_size_ = 0;
}

void update_log_parameter(){
  if (concurrent_access_mode_ != 0){
    fprintf(stderr, "error: concurrent_access_mode_ != 0\n");
    assert(false);
  }
    tail_ = 0;
    log_flag = 0;
    wrap_around_number_++;

    ma_thres_ = 
    static_cast<uint64_t>(
        static_cast<double>(size_) * ma_thres);

    //printf("update_log_parameter finished.\n");
}

template <typename T>
static constexpr bool is_power_of_two(T x) {
  return x && ((x & T(x - 1)) == 0);
}

template <uint64_t PowerOfTwoNumber, typename T>
static constexpr T roundup(T x) {
  static_assert(is_power_of_two(PowerOfTwoNumber),
                "PowerOfTwoNumber must be a power of 2");
  return ((x) + T(PowerOfTwoNumber - 1)) & (~T(PowerOfTwoNumber - 1));
}

bool memory_adjustment(){
    return true;
}

uint64_t eaet(){
    uint64_t temp = g1() % (2 * size_);
    printf("init_log_size_:%zu\n", init_size_);
    printf("eaet_log_size_:%zu\n", temp);
    return temp;
}
void print_stats(){
    printf("new log size  :%zu\n",size_);
    printf("tail          :%zu\n",tail_);
    printf("------------------------\n");
}

/*
    结果合规性判断：
    1.log size和new log size都是2MB的倍数
    2.如果是log增大，则在tail大于原log一半的时候就进行调整了。
    3.如果是log减小，
    如果new log size<tail,则要将new log size调整为tail向上取整2MB的倍数。
    如果new log size=tail,则要将new log size调整为tail也就是new log size。
    如果new log size>tail,则此时对tail向上取整，应该=new log size。
*/

/*
所覆盖的分支包括：
1. eaet<init的一半，最终new log size = roundup(tail)
2. eaet>init,最终new log size = roundup(eaet)，new log size-tail<2MB
3. init>eaet>init的一半,最终 new log size = roundup(eaet)<init,new log size-tail<2MB
4. eaet<32MB<init的一半,最终 tail稍稍超过init log的一半，且new log size = roundup(tail)

init_log_size_:1073741824
eaet_log_size_:3949854
round up eaet_:33554432
new log size  :538968064
tail          :536871160
*/


