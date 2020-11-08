#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  void rotate(vector<vector<int>> &matrix) {
    reverse(matrix.begin(), matrix.end());
    for (int i = 0; i < matrix.size(); ++i) {
      for (int j = i + 1; j < matrix[i].size(); ++j)
        swap(matrix[i][j], matrix[j][i]);
    }
  }
};

// ------------------------------- solution end ---------------------------------

void matrix_show(vector<vector<int>> matrix) {
  cout << "[";
  for (int i = 0; i < matrix.size(); ++i) {
    cout << "[";
    for (int j = 0; j < matrix[i].size(); ++j) {
      if (j == 0) {
        cout << matrix[i][j];
      } else {
        cout << ", " << matrix[i][j];
      }
      if (j == matrix[i].size() - 1)
        cout << "]";
    }
    if (i != matrix.size() - 1) {
      cout << ", ";
    }
  }
  cout << "]" << endl;
}

int main(int argc, char const *argv[]) {
  Solution solution;
  vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  cout << "Input:  ";
  matrix_show(matrix);
  solution.rotate(matrix);
  cout << "Output: ";
  matrix_show(matrix);
  return EXIT_SUCCESS;
}
