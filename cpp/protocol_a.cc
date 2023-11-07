#include "protocol_a.h"
#include <iostream>

template <typename T>
bool ProtocolA::add(const NumberArr<T>* left, const NumberArr<T>* right, NumberArr<T>* result) {
  std::cout << "call ProtocolA::add" << std::endl;
  auto length = result->get_length();
  auto left_value = left->get_x();
  auto right_value = right->get_x();
  auto result_value = result->get_x();
  for (auto index = 0; index < length; ++index) {
    result_value[index] = left_value[index] + right_value[index];
  }
  return true;
}
template bool ProtocolA::add<int>(const NumberArr<int>* left,
                                  const NumberArr<int>* right,
                                  NumberArr<int>* result);  // 明显实例化函数模版

ProtocolA::~ProtocolA() { std::cout << "call ProtocolA::~ProtocolA" << std::endl; }
