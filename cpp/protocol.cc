#include "protocol.h"

Protocol::Protocol() { LOG(WARNING) << "调用 Protocol 构造函数"; };
Protocol::~Protocol() { LOG(WARNING) << "调用 Protocol 析构函数"; };  // 纯虚析构函数 也需要有函数体
