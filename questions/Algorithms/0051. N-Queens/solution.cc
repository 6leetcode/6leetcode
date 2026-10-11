#include <iostream>
#include <string>
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

  void backtrack(int n, int row, vector<int> &cols, vector<vector<string>> &res) {
    if (row == n) {
      vector<string> board(n, string(n, '.'));
      for (int i = 0; i < n; i++) {
        board[i][cols[i]] = 'Q';
      }
      res.push_back(board);
      return;
    }
    for (int col = 0; col < n; col++) {
      if (isSafe(cols, row, col)) {
        cols[row] = col;
        backtrack(n, row + 1, cols, res);
      }
    }
  }

public:
  vector<vector<string>> solveNQueens(int n) {
    vector<vector<string>> res;
    vector<int> cols(n, -1);
    backtrack(n, 0, cols, res);
    return res;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int input = 4;
  cout << "Input:  " << input << endl;
  Solution solution;
  vector<vector<string>> res = solution.solveNQueens(input);
  cout << "Output: [";
  for (size_t i = 0; i < res.size(); i++) {
    cout << (i == 0 ? "" : ", ") << "[";
    for (size_t j = 0; j < res[i].size(); j++) {
      cout << (j == 0 ? "" : ", ") << "\"" << res[i][j] << "\"";
    }
    cout << "]";
  }
  cout << "]" << endl;
  return EXIT_SUCCESS;
}
