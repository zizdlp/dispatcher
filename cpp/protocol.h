#ifndef PROTOCOL_H
#define PROTOCOL_H
#include "src_cpp/NumberArr.h"
#include <iostream>
#include <glog/logging.h>

#define EMPTY_FUNCTION(ret)     \
  {                             \
    LOG(ERROR) << "函数未定义"; \
    return ret;                 \
  }
class Protocol {
 public:
  Protocol();
  virtual ~Protocol() = 0;

  template <typename T>
  bool add(const NumberArr<T>* left, const NumberArr<T>* right, NumberArr<T>* result)
      EMPTY_FUNCTION(true);  // 模版函数不能声明为虚函数
};
#endif  // A_H