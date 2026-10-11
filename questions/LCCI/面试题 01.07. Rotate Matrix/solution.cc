#include <algorithm>
#include <iostream>
#include <vector>

#include <cc/matrix.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  void rotate(vector<vector<int>> &matrix) {
    int n = matrix.size();
    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        swap(matrix[i][j], matrix[j][i]);
      }
    }
    for (int i = 0; i < n; i++) {
      reverse(matrix[i].begin(), matrix[i].end());
    }
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<vector<int>> input = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  cout << "Input:  " << matrix_show(input) << endl;
  Solution solution;
  solution.rotate(input);
  cout << "Output: " << matrix_show(input) << endl;
  return EXIT_SUCCESS;
}
