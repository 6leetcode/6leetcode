#include <iostream>
#include <string>
#include <vector>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
  bool win(vector<string> &board, char ch) {
    int n = board.size();
    for (int i = 0; i < n; i++) {
      bool row = true, col = true;
      for (int j = 0; j < n; j++) {
        if (board[i][j] != ch) row = false;
        if (board[j][i] != ch) col = false;
      }
      if (row || col) return true;
    }
    bool d1 = true, d2 = true;
    for (int i = 0; i < n; i++) {
      if (board[i][i] != ch) d1 = false;
      if (board[i][n - 1 - i] != ch) d2 = false;
    }
    return d1 || d2;
  }

public:
  string tictactoe(vector<string> &board) {
    if (win(board, 'X')) return "X";
    if (win(board, 'O')) return "O";
    for (const string &row : board)
      for (char c : row)
        if (c == ' ') return "Pending";
    return "Draw";
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<string> board = {"O X", " XO", "X O"};
  cout << "Input:  [\"O X\", \" XO\", \"X O\"]" << endl;
  Solution solution;
  cout << "Output: " << solution.tictactoe(board) << endl;
  return EXIT_SUCCESS;
}
