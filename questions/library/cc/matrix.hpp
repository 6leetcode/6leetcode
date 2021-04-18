#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

template <typename T>
string matrix_show(vector<vector<T>> matrix) {
  stringstream ss;
  ss << "[";
  for (size_t i = 0; i < matrix.size(); ++i) {
    ss << "[";
    for (size_t j = 0; j < matrix[i].size(); ++j) {
      if (j == 0) {
        ss << matrix[i][j];
      } else {
        ss << ", " << matrix[i][j];
      }
      if (j == matrix[i].size() - 1)
        ss << "]";
    }
    if (i != matrix.size() - 1) {
      ss << ", ";
    }
  }
  ss << "]";
  return ss.str();
}
