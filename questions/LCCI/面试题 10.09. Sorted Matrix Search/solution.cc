#include <iostream>
#include <vector>

#include <cc/matrix.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  bool searchMatrix(vector<vector<int>> &matrix, int target) {
    if (matrix.empty() || matrix[0].empty()) return false;
    int i = 0, j = matrix[0].size() - 1;
    while (i < (int)matrix.size() && j >= 0) {
      if (matrix[i][j] == target) return true;
      if (matrix[i][j] > target) {
        j--;
      } else {
        i++;
      }
    }
    return false;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<vector<int>> matrix = {
      {1, 4, 7, 11, 15},
      {2, 5, 8, 12, 19},
      {3, 6, 9, 16, 22},
      {10, 13, 14, 17, 24},
      {18, 21, 23, 26, 30},
  };
  int target = 5;
  cout << "Input:  matrix (sorted rows/cols), target = " << target << endl;
  Solution solution;
  cout << "Output: " << (solution.searchMatrix(matrix, target) ? "true" : "false") << endl;
  return EXIT_SUCCESS;
}
