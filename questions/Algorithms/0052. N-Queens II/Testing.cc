#include <iostream>
#include <vector>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
  bool isSafe(vector<int> &cols, int row, int col) {
    for (int r = 0; r < row; r++) {
      if (cols[r] == col || abs(cols[r] - col) == abs(r - row)) {
        return false;
      }
    }
    return true;
  }

  void backtrack(int n, int row, vector<int> &cols, int &count) {
    if (row == n) {
      count++;
      return;
    }
    for (int col = 0; col < n; col++) {
      if (isSafe(cols, row, col)) {
        cols[row] = col;
        backtrack(n, row + 1, cols, count);
      }
    }
  }

public:
  int totalNQueens(int n) {
    int count = 0;
    vector<int> cols(n, -1);
    backtrack(n, 0, cols, count);
    return count;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int input = 4;
  cout << "Input:  " << input << endl;
  Solution solution;
  cout << "Output: " << solution.totalNQueens(input) << endl;
  return EXIT_SUCCESS;
}
