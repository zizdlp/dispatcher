#include "protocol_a.h"
#include <iostream>

template <typename T>
void reveal(int length, T* result) {
  for (int i = 0; i < length; ++i) {
    std::cout << "key:" << i << ";value:" << result[i] << " ";
  }
  std::cout << std::endl;
};
template <typename T>
void setValue(int length, T* result) {
  for (int i = 0; i < length; ++i) {
    result[i] = i;
  }
};

int main() {
  std::cout << "=============== ==================== ===============" << std::endl;
  std::cout << "=============== call protocol_a_test ===============" << std::endl;
  auto protocolA = ProtocolA();
  int length = 10;
  int* left = new int[length];
  setValue(length, left);
  int* right = new int[length];
  setValue(length, right);
  int* result = new int[length];
  protocolA.add(length, result, left, right);
  reveal(length, result);
  return 0;
}