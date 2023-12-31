#include "protocol.h"

#include "src_cpp/NumberArr.h"
class ProtocolA : public Protocol {
 public:
  explicit ProtocolA() { LOG(WARNING) << "调用 ProtocolA 构造函数"; };
  ~ProtocolA();

  template <typename T>
  bool add(const NumberArr<T>* left, const NumberArr<T>* right, NumberArr<T>* result);
};
