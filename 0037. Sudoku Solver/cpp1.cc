#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

#define M 3
#define N (M * M)

class Solution {
private:
  bool rule_row[N][N] = {false};
  bool rule_col[N][N] = {false};
  bool rule_box[N][N] = {false};

  uint left_num = 81;

  void sudoku_rule(vector<vector<char>> board) {
    for (int i = 0; i < N; i++) { // row rule
      for (int j = 0; j < N; j++) {
        int num = board[i][j] - 49;
        if (num >= 0) {
          rule_row[i][num] = true;
          left_num--;
        }
      }
    }
    for (int i = 0; i < N; i++) { // column rule
      for (int j = 0; j < N; j++) {
        int num = board[j][i] - 49;
        if (num >= 0) {
          rule_col[i][num] = true;
        }
      }
    }
    for (int i = 0; i < N; i++) { // box rule
      for (int j = 0; j < N; j++) {
        int num = board[i / M * M + j / M][(i % M) * M + j % M] - 49;
        if (num >= 0) {
          rule_box[i][num] = true;
        }
      }
    }
  }

  void sudoku_rule_cell(vector<vector<char>> board, int row, int col, vector<bool> &poss) {
    if (board[row][col] != '.') {
      poss = {true, true, true, true, true, true, true, true, true};
      return;
    }
    int box = row / M * M + col / M;
    for (int i = 0; i < N; i++) {
      if (rule_row[row][i]) {
        poss[i] = true;
      }
      if (rule_col[col][i]) {
        poss[i] = true;
      }
      if (rule_box[box][i]) {
        poss[i] = true;
      }
    }
  }

  void sudoku_set_cell(vector<vector<char>> &board, int row, int col, char val) {
    board[row][col] = val;

    rule_row[row][val - 49] = true;
    rule_col[col][val - 49] = true;

    rule_box[row / M * M + col / M][val - 49] = true;

    left_num--;
  }

  void sudoku_erase_cell(vector<vector<char>> &board, int row, int col) {
    char val = board[row][col];

    rule_row[row][val - 49] = false;
    rule_col[col][val - 49] = false;

    rule_box[row / M * M + col / M][val - 49] = false;

    board[row][col] = '.';
    left_num++;
  }

  int cell_poss_num(vector<bool> &poss) {
    int result = 0;
    for (int i = 0; i < N; i++) {
      if (!poss[i]) {
        result++;
      }
    }
    return result;
  }

  void sudoku_get_less_poss(vector<vector<char>> &board, int *row, int *col, vector<bool> &poss) {
    int poss_num = 9;
    for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++) {
        vector<bool> temp(N, false);
        sudoku_rule_cell(board, i, j, temp);
        int p = cell_poss_num(temp);
        if (p != 0 && p < poss_num) {
          poss_num = p;
          *row     = i;
          *col     = j;
          poss     = temp;
        }
      }
    }
  }

public:
  void solveSudoku(vector<vector<char>> &board) {
    sudoku_rule(board);
    solve(board);
    return;
  }

  bool solve(vector<vector<char>> &board) {
    if (left_num == 0) {
      return true;
    }
    int row = 0;
    int col = 0;

    vector<bool> poss(N, false);
    sudoku_get_less_poss(board, &row, &col, poss);

    if (board[row][col] != '.') {
      return false;
    }

    bool found_solution = false;
    for (int i = 0; i < N; i++) {
      if (!poss[i]) {
        sudoku_set_cell(board, row, col, (char)(i + 49));
        if ((found_solution = solve(board))) {
          break;
        }
        sudoku_erase_cell(board, row, col);
      }
    }
    return found_solution;
  }
};

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
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cout << board[i][j];
    }
  }
  cout << endl;

  Solution solution;
  solution.solveSudoku(board);

  cout << "Output: ";
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cout << board[i][j];
    }
  }
  cout << endl;
  return EXIT_SUCCESS;
}
