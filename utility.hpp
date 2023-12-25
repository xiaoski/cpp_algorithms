// utilities

#ifndef _UTILITY_H_
#define _UTILITY_H_

#include <iostream>
#include <vector>

// 重载 << 运算符，以支持打印 vector
template <typename T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& vec) {
  os << "[";
  for (const auto& i : vec) os << i << " ";
  os << "]";
  return os;
}

#endif  // _UTILITY_H_