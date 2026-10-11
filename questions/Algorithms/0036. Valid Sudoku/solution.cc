#include <iostream>
#include <vector>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  bool isValidSudoku(vector<vector<char>> &board) {
    bool rows[9][9] = {}, cols[9][9] = {}, boxes[9][9] = {};
    for (int i = 0; i < 9; i++) {
      for (int j = 0; j < 9; j++) {
        char c = board[i][j];
        if (c == '.') {
          continue;
        }
        int d = c - '1';
        int b = (i / 3) * 3 + j / 3;
        if (rows[i][d] || cols[j][d] || boxes[b][d]) {
          return false;
        }
        rows[i][d] = cols[j][d] = boxes[b][d] = true;
      }
    }
    return true;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<vector<char>> board = {
      {'.', '.', '9', '7', '4', '8', '.', '.', '.'},
      {'7', '.', '.', '.', '.', '.', '.', '.', '.'},
      {'.', '2', '.', '1', '.', '9', '.', '.', '.'},
      {'.', '.', '7', '.', '.', '.', '2', '4', '.'},
      {'.', '6', '4', '.', '1', '.', '5', '9', '.'},
      {'.', '9', '8', '.', '.', '.', '3', '.', '.'},
      {'.', '.', '.', '8', '.', '3', '.', '2', '.'},
      {'.', '.', '.', '.', '.', '.', '.', '.', '6'},
      {'.', '.', '.', '2', '7', '5', '9', '.', '.'},
  };
  cout << "Input:  ";
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      cout << board[i][j];
    }
  }
  cout << endl;
  Solution solution;
  cout << "Output: " << (solution.isValidSudoku(board) ? "true" : "false") << endl;
  return EXIT_SUCCESS;
}
