#include "protocol_a.h"
#include <iostream>

template <typename T>
bool ProtocolA::add(const int length, T* result, const T* left, const T* right) {
  std::cout << "call ProtocolA::add" << std::endl;
  return true;
}
template bool ProtocolA::add<int>(const int length,
                                  int* result,
                                  const int* left,
                                  const int* right);  // 明显实例化函数模版

ProtocolA::~ProtocolA() { std::cout << "call ProtocolA::~ProtocolA" << std::endl; }
