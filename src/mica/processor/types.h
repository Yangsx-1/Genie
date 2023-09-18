#pragma once
#ifndef MICA_PROCESSOR_TYPES_H_
#define MICA_PROCESSOR_TYPES_H_

#include "mica/common.h"

namespace mica {
namespace processor {
enum class Operation {
  kSet = 0,
  kGet,
  kTest,
  kDelete,
};
}
}  // namespace mica

#endif