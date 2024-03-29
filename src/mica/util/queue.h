#pragma once
#ifndef MICA_UTIL_QUEUE_H_
#define MICA_UTIL_QUEUE_H_

#include "mica/common.h"
#include <array>
#include "mica/util/barrier.h"

namespace mica {
namespace util {
template <typename T, size_t Capacity, bool MultipleProducer = true,
          bool MultipleConsumer = true>
class Queue {
 public:
  Queue() : head_lock_(0), head_(0), tail_lock_(0), tail_(0) {}

  bool approximate_empty() const {
    ::mica::util::memory_barrier();
    return head_ == tail_;
  }

  size_t approximate_size() const {
    ::mica::util::memory_barrier();
    size_t head = head_;
    size_t tail = tail_;
    size_t size = tail - head;
    if (size > Capacity) size += Capacity;
    return size;
  }

  bool enqueue(const T& v) {
    if (MultipleProducer)
      while (!__sync_bool_compare_and_swap(&tail_lock_, 0, 1))
        ::mica::util::pause();

    size_t tail = tail_;
    size_t tail_next = tail + 1;
    if (tail_next == Capacity) tail_next = 0;

    // Full?
    if (tail_next == head_) {
      if (MultipleProducer) {
        tail_lock_ = 0;
        ::mica::util::memory_barrier();
      }
      return false;
    }

    items_[tail] = v;
    tail_ = tail_next;

    if (MultipleProducer) {
      tail_lock_ = 0;
      ::mica::util::memory_barrier();
    }
    return true;
  }

  bool dequeue(T* out_v) {
    if (MultipleConsumer)
      while (!__sync_bool_compare_and_swap(&head_lock_, 0, 1))
        ::mica::util::pause();

    size_t head = head_;
    size_t head_next = head + 1;
    if (head_next == Capacity) head_next = 0;

    // Empty?
    if (head == tail_) {
      if (MultipleConsumer) {
        head_lock_ = 0;
        ::mica::util::memory_barrier();
      }
      return false;
    }

    *out_v = items_[head];
    head_ = head_next;

    if (MultipleConsumer) {
      head_lock_ = 0;
      ::mica::util::memory_barrier();
    }
    return true;
  }

 private:
  volatile uint8_t head_lock_ __attribute__((aligned(128)));
  size_t head_;

  volatile uint8_t tail_lock_ __attribute__((aligned(128)));
  size_t tail_;

  std::array<T, Capacity> items_ __attribute__((aligned(128)));
} __attribute__((aligned(128)));

template <typename T, size_t Capacity>
class SingleThreadedQueue {
 public:
  SingleThreadedQueue() : head_(0), tail_(0) {}

  bool empty() const { return head_ == tail_; }

  bool full() const {
    size_t tail_next = tail_ + 1;
    if (tail_next == Capacity) tail_next = 0;
    return tail_next == head_;
  }

  size_t size() const {
    size_t size = tail_ - head_;
    if (size > Capacity) size += Capacity;
    return size;
  }

  const T& head() const { return items_[head_]; }

  // The user must check empty() and read or copy head() before calling
  // pop_head().
  void pop_head() {
    if (++head_ == Capacity) head_ = 0;
  }

  T& tail() { return items_[tail_]; }

  // The user must check full() and write to tail() before calling push_tail().
  void push_tail() {
    if (++tail_ == Capacity) tail_ = 0;
  }

 private:
  size_t head_;
  size_t tail_;
  std::array<T, Capacity> items_;
};
}  // namespace util
}  // namespace mica

#endif
