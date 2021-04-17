#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

template <typename T>
string vector_show(vector<T> vec) {
  stringstream ss;
  ss << "[";
  for (auto it = vec.begin(); it != vec.end(); ++it) {
    if (it != vec.begin()) {
      ss << ", " << *it;
    } else {
      ss << *it;
    }
  }
  ss << "]";
  return ss.str();
}
