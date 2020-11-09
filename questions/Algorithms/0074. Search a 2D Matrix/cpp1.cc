#include <iostream>
#include <vector>

#include <matrix.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  bool searchMatrix(vector<vector<int>> &matrix, int target) {
    int n = matrix.size();
    if (!n)
      return false;
    int m = matrix[0].size();

    int i = 0;
    int j = m - 1;

    while (i < n && j >= 0)
      if (matrix[i][j] == target)
        return true;
      else if (matrix[i][j] > target)
        j--;
      else
        i++;

    return false;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<vector<int>> input1 = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 50}};
  int input2 = 11;
  cout << "Input:  " << matrix_show(input1) << endl;
  Solution solution;
  cout << "Output: " << (solution.searchMatrix(input1, input2) ? "true" : "false") << endl;
  return 0;
}
