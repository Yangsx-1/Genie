#pragma once
#ifndef MICA_POOL_POOL_H_
#define MICA_POOL_POOL_H_

#include <limits>
#include "mica/common.h"

namespace mica {
namespace pool {
class PoolInterface {
 public:
  typedef void Tag;

  typedef uint64_t Offset;
  typedef uint8_t WrapAround;
  static constexpr size_t kOffsetWidth =
      static_cast<size_t>(std::numeric_limits<Offset>::digits);
  static constexpr Offset kInsufficientSpace = std::numeric_limits<Offset>::
      max();  //是64位int的最大值 要保留，因为这个值可能要返回给client FIXME 这里可能要改

  void lock();
  void unlock();

  void reset();  //xhj 让head和tail都变为0 table reset的时候会调用pool_->reset()
  Offset allocate(size_t size);  //返回可以存放该item的位置(offset)
  void release(Offset offset);   //将offset变成void

  void prefetch_item(Offset offset)
      const;  //prefetch那个item所在的cacheline以及接下来的cacheline

  char* get_item(Offset offset);
  const char* get_item(Offset offset) const;

  char* get_item(Offset offset,
                 std::size_t* out_len);  //只在set overwrite的时候调用 xhj
  const char* get_item(Offset offset, std::size_t* out_len) const;
};
}  // namespace pool
}  // namespace mica

#endif