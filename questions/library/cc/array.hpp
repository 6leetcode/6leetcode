#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

#pragma once

template <typename T>
string array_show(vector<T> vec) {
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
