#include <iostream>

#include <matrix.hpp>

int main(int argc, char const *argv[]) {
  vector<vector<int>> matrix = {{3, 3}, {5, -1}, {-2, 4}};
  cout << matrix_show(matrix) << endl;
  return EXIT_SUCCESS;
}
