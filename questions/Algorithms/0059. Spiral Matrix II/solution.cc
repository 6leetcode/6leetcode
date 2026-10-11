#include <iostream>
#include <vector>

#include <cc/matrix.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  vector<vector<int>> generateMatrix(int n) {
    vector<vector<int>> m(n, vector<int>(n));
    int top = 0, bottom = n - 1, left = 0, right = n - 1, num = 1;
    while (top <= bottom && left <= right) {
      for (int c = left; c <= right; c++) m[top][c] = num++;
      top++;
      for (int r = top; r <= bottom; r++) m[r][right] = num++;
      right--;
      if (top <= bottom) {
        for (int c = right; c >= left; c--) m[bottom][c] = num++;
        bottom--;
      }
      if (left <= right) {
        for (int r = bottom; r >= top; r--) m[r][left] = num++;
        left++;
      }
    }
    return m;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int input = 3;
  cout << "Input:  " << input << endl;
  Solution solution;
  cout << "Output: " << matrix_show(solution.generateMatrix(input)) << endl;
  return EXIT_SUCCESS;
}
