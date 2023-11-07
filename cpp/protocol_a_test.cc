#include "protocol_a.h"
#include <iostream>

template <typename T>
void reveal(int length, T* result) {
  for (int i = 0; i < length; ++i) {
    std::cout << "key:" << i << ";value:" << result[i] << " ";
  }
  std::cout << std::endl;
};

int main() {
  std::cout << "=============== ==================== ===============" << std::endl;
  std::cout << "=============== call protocol_a_test ===============" << std::endl;
  auto protocolA = ProtocolA();
  int length = 10;
  auto arr1 = new NumberArr<int>(length);
  auto arr2 = new NumberArr<int>(length);
  auto arr3 = new NumberArr<int>(length);
  arr1->set_value(3);
  arr2->set_value(5);
  arr3->set_value(7);
  protocolA.add(arr1, arr2, arr3);
  arr3->print_value();

  return 0;
}