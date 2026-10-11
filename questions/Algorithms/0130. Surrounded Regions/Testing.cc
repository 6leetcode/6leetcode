#include <iostream>
#include <vector>

#include <cc/matrix.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
  int rows = 0, cols = 0;

  void dfs(vector<vector<char>> &board, int i, int j) {
    if (i < 0 || i >= rows || j < 0 || j >= cols || board[i][j] != 'O') return;
    board[i][j] = '#';
    dfs(board, i + 1, j);
    dfs(board, i - 1, j);
    dfs(board, i, j + 1);
    dfs(board, i, j - 1);
  }

public:
  void solve(vector<vector<char>> &board) {
    if (board.empty()) return;
    rows = board.size();
    cols = board[0].size();

    for (int i = 0; i < rows; i++) {
      dfs(board, i, 0);
      dfs(board, i, cols - 1);
    }
    for (int j = 0; j < cols; j++) {
      dfs(board, 0, j);
      dfs(board, rows - 1, j);
    }

    for (int i = 0; i < rows; i++) {
      for (int j = 0; j < cols; j++) {
        if (board[i][j] == 'O') {
          board[i][j] = 'X';
        } else if (board[i][j] == '#') {
          board[i][j] = 'O';
        }
      }
    }
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  Solution solution;

  vector<vector<char>> t1 = {
      {'X', 'X', 'X', 'X'},
      {'X', 'O', 'O', 'X'},
      {'X', 'X', 'O', 'X'},
      {'X', 'O', 'X', 'X'},
  };
  cout << "Input:  " << matrix_show(t1) << endl;
  solution.solve(t1);
  cout << "Output: " << matrix_show(t1) << endl;

  vector<vector<char>> t2 = {{'X'}};
  cout << "Input:  " << matrix_show(t2) << endl;
  solution.solve(t2);
  cout << "Output: " << matrix_show(t2) << endl;

  return EXIT_SUCCESS;
}
