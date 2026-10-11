#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// ------------------------------- solution begin -------------------------------
static bool dfs(char **board, int rows, int cols, int i, int j, char *word, int idx) {
  if (word[idx] == '\0') return true;
  if (i < 0 || i >= rows || j < 0 || j >= cols || board[i][j] != word[idx]) return false;
  char tmp = board[i][j];
  board[i][j] = '#';
  bool found = dfs(board, rows, cols, i + 1, j, word, idx + 1) ||
               dfs(board, rows, cols, i - 1, j, word, idx + 1) ||
               dfs(board, rows, cols, i, j + 1, word, idx + 1) ||
               dfs(board, rows, cols, i, j - 1, word, idx + 1);
  board[i][j] = tmp;
  return found;
}

bool exist(char **board, int boardSize, int *boardColSize, char *word) {
  for (int i = 0; i < boardSize; i++) {
    for (int j = 0; j < boardColSize[i]; j++) {
      if (dfs(board, boardSize, boardColSize[i], i, j, word, 0)) return true;
    }
  }
  return false;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  char raw[3][5] = {"ABCE", "SFCS", "ADEE"};
  int rows = 3, cols = 4;
  char **board = (char **)malloc(sizeof(char *) * rows);
  int *colSize = (int *)malloc(sizeof(int) * rows);
  for (int i = 0; i < rows; i++) {
    board[i] = (char *)malloc(cols + 1);
    colSize[i] = cols;
    for (int j = 0; j < cols; j++) board[i][j] = raw[i][j];
    board[i][cols] = '\0';
  }
  char word[] = "ABCCED";
  printf("Input:  [[A, B, C, E], [S, F, C, S], [A, D, E, E]] %s\n", word);
  printf("Output: %s\n", exist(board, rows, colSize, word) ? "true" : "false");
  for (int i = 0; i < rows; i++) free(board[i]);
  free(board);
  free(colSize);
  return EXIT_SUCCESS;
}
