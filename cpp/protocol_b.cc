#include "protocol_b.h"
#include <iostream>

template <typename T>
bool ProtocolB::add(const NumberArr<T>* left, const NumberArr<T>* right, NumberArr<T>* result) {
  LOG(WARNING) << "调用 ProtocolB add";
  auto length = result->get_length();
  auto left_value = left->get_x();
  auto right_value = right->get_x();
  auto result_value = result->get_x();
  for (auto index = 0; index < length; ++index) {
    result_value[index] = left_value[index] + right_value[index];
  }
  return true;
}
template bool ProtocolB::add<int>(const NumberArr<int>* left,
                                  const NumberArr<int>* right,
                                  NumberArr<int>* result);  // 明显实例化函数模版

ProtocolB::~ProtocolB() { LOG(WARNING) << "调用 ProtocolB 析构函数"; }
