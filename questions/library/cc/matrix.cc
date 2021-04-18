#include <iostream>

#include <cc/matrix.hpp>

using namespace std;

int main(int argc, char const *argv[]) {
  vector<vector<int>> matrix = {{3, 3}, {5, -1}, {-2, 4}};
  cout << "Output: " << matrix_show(matrix) << endl;
  return EXIT_SUCCESS;
}
