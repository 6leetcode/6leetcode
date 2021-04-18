#include <algorithm>
#include <iostream>
#include <vector>

#include <matrix.hpp>

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

int main(int argc, char const *argv[]) {
  Solution solution;
  vector<vector<int>> input = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  cout << "Input:  " << matrix_show(input) << endl;
  solution.rotate(input);
  cout << "Output: " << matrix_show(input) << endl;
  return EXIT_SUCCESS;
}
