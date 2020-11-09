#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

string matrix_show(vector<vector<int>> matrix) {
  stringstream ss;
  ss << "[";
  for (int i = 0; i < matrix.size(); ++i) {
    ss << "[";
    for (int j = 0; j < matrix[i].size(); ++j) {
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
