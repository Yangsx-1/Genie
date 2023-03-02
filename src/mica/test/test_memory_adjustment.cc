/*
 * @Author: Huijuan Xiao
 * @Description: TODO
 */

#include<iostream>
#include<vector>
#include<limits>
using namespace std;

  struct Entry {
    size_t refcount;  // reference by mapping
    bool to_remove;   // remove entry when refcount == 0
    size_t length;
    size_t num_pages;//32
    size_t pages;
    std::vector<size_t> page_ids;//24 byte?
  };
  std::vector<size_t> test; 

int main(){
    struct Entry en1;
    cout<<sizeof(en1)<<endl;//56
    cout<<sizeof(size_t)<<endl;//8
    cout<<en1.page_ids.size()<<endl;//0
    cout<<sizeof(test)<<endl;//24
    cout<<numeric_limits<uint32_t>::max()<<endl;
    uint64_t oldest_item_distance = (uint64_t)-1;
    printf("oldest_item_distance = %lu\n",oldest_item_distance);
    return 0;
}
/*在不同的平台上，sizeo(vector)可能会不同。目前这个平台上是24byte*/