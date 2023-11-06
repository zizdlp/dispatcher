#include "protocol.h"

class ProtocolA : public Protocol {
 public:
  explicit ProtocolA(){};
  ~ProtocolA();

  template <typename T>
  bool add(const int length, T* result, const T* left, const T* right);
};
