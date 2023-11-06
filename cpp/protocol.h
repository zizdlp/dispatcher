
#include <iostream>
#define EMPTY_FUNCTION(ret)                      \
  {                                              \
    std::cout << "this function is not defined"; \
    return ret;                                  \
  }
class Protocol {
 public:
  explicit Protocol(){};
  ~Protocol(){};

  template <typename T>
  bool add(const int length, T *result, const T *left, const T *right)
      EMPTY_FUNCTION(true);  // 模版函数不能声明为虚函数
};