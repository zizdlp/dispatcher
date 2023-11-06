#include "protocol_a.h"
#include <iostream>

int main() {
  std::cout << "=============== ==================== ===============" << std::endl;
  std::cout << "=============== call protocol_a_test ===============" << std::endl;
  auto protocolA = ProtocolA();
  int length = 10;
  int* left = new int[length];
  int* right = new int[length];
  int* result = new int[length];
  protocolA.add(length, result, left, right);
  return 0;
}