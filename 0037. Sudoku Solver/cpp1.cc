#include <iostream>
#include <vector>

using namespace std;

#define M 3
#define N (M * M)

class Solution {
private:
  vector<char> sudoku_item = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '.'};
  bool rule_row[N][N]      = {false};
  bool rule_col[N][N]      = {false};
  bool rule_box[N][N]      = {false};

  void sudoku_rule(vector<vector<char>> board) {
    for (int i = 0; i < N; i++) { // row rule
      for (int j = 0; j < N; j++) {
        int num = board[i][j] - 49;
        if (num > 0) {
          rule_row[i][num] = true;
        }
      }
    }
    for (int i = 0; i < N; i++) { // column rule
      for (int j = 0; j < N; j++) {
        int num = board[j][i] - 49;
        if (num > 0) {
          rule_col[i][num] = true;
        }
      }
    }
    for (int i = 0; i < N; i++) { // box rule
      for (int j = 0; j < N; j++) {
        int num = board[i / M * M + j / M][i % M * M + j % M] - 49;
        if (num > 0) {
          rule_box[i][num] = true;
        }
      }
    }
  }

  void sudoku_rule_cell(vector<vector<char>> board, int row, int col, vector<bool> &poss) {
    int box = row / M * M + col / M;
    for (int i = 0; i < N; i++) {
      if (rule_row[row][i]) {
        poss[i] = true;
      }
    }
    for (int i = 0; i < N; i++) {
      if (rule_col[col][i]) {
        poss[i] = true;
      }
    }
    for (int i = 0; i < N; i++) {
      if (rule_box[box][i]) {
        poss[i] = true;
      }
    }
  }

  void sudoku_set_cell(vector<vector<char>> &board, int row, int col, char val) {
    board[row][col]                           = val;
    rule_row[row][val - 49]                   = true;
    rule_col[col][val - 49]                   = true;
    rule_box[row / M * M + col / M][val - 49] = true;
  }

public:
  void sudoku_erase(vector<vector<char>> &board, int row, int col) {
    board[row][col] = '.';
  }
  void solveSudoku(vector<vector<char>> &board) {
    sudoku_rule(board);
    board[0][0] = '0';
  }
};

int main(int argc, char const *argv[]) {
  vector<vector<char>> input = {
      {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
      {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
      {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
      {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
      {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
      {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
      {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
      {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
      {'.', '.', '.', '.', '8', '.', '.', '7', '9'},
  };
  cout << "Input:  ";
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cout << input[i][j];
    }
  }
  cout << endl;

  Solution solution;
  solution.solveSudoku(input);

  cout << "Output: ";
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cout << input[i][j];
    }
  }
  cout << endl;
  return 0;
}
