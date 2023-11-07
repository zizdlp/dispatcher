#include "protocol.h"

#include "src_cpp/NumberArr.h"
class ProtocolB : public Protocol {
 public:
  explicit ProtocolB() { LOG(WARNING) << "调用 ProtocolB 构造函数"; };
  ~ProtocolB();

  template <typename T>
  bool add(const NumberArr<T>* left, const NumberArr<T>* right, NumberArr<T>* result);
};
