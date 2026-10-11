#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// ------------------------------- solution begin -------------------------------
static bool win(char **board, int n, char ch) {
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

char *tictactoe(char **board, int boardSize) {
  int n = boardSize;
  if (win(board, n, 'X')) return "X";
  if (win(board, n, 'O')) return "O";
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (board[i][j] == ' ') return "Pending";
    }
  }
  return "Draw";
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  char *board[] = {"O X", " XO", "X O"};
  printf("Input:  [\"O X\", \" XO\", \"X O\"]\n");
  printf("Output: %s\n", tictactoe(board, 3));
  return EXIT_SUCCESS;
}
