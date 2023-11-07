#include "protocol.h"
#include "src_cpp/NumberArr.h"
class ProtocolA : public Protocol {
 public:
  explicit ProtocolA(){};
  ~ProtocolA();

  template <typename T>
  bool add(const NumberArr<T>* left, const NumberArr<T>* right, NumberArr<T>* result);
};
