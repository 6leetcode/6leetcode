#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------------------- solution begin -------------------------------
static int isSafe(int *cols, int row, int col) {
  for (int r = 0; r < row; r++) {
    if (cols[r] == col || abs(cols[r] - col) == abs(r - row)) return 0;
  }
  return 1;
}

static void backtrack(int n, int row, int *cols, char ***res, int *size, int **colSizes) {
  if (row == n) {
    char **board = (char **)malloc(sizeof(char *) * n);
    for (int i = 0; i < n; i++) {
      board[i] = (char *)malloc(n + 1);
      for (int j = 0; j < n; j++) board[i][j] = '.';
      board[i][cols[i]] = 'Q';
      board[i][n] = '\0';
    }
    res[*size] = board;
    (*colSizes)[*size] = n;
    (*size)++;
    return;
  }
  for (int col = 0; col < n; col++) {
    if (isSafe(cols, row, col)) {
      cols[row] = col;
      backtrack(n, row + 1, cols, res, size, colSizes);
    }
  }
}

char ***solveNQueens(int n, int *returnSize, int **returnColumnSizes) {
  char ***res = (char ***)malloc(sizeof(char **) * 10000);
  *returnColumnSizes = (int *)malloc(sizeof(int) * 10000);
  int *cols = (int *)malloc(sizeof(int) * n);
  *returnSize = 0;
  backtrack(n, 0, cols, res, returnSize, returnColumnSizes);
  free(cols);
  return res;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int input = 4;
  printf("Input:  %d\n", input);
  int size = 0;
  int *colSizes = NULL;
  char ***res = solveNQueens(input, &size, &colSizes);
  printf("Output: [");
  for (int i = 0; i < size; i++) {
    printf("%s[", i == 0 ? "" : ", ");
    for (int j = 0; j < colSizes[i]; j++) {
      printf("%s\"%s\"", j == 0 ? "" : ", ", res[i][j]);
      free(res[i][j]);
    }
    printf("]");
    free(res[i]);
  }
  printf("]\n");
  free(res);
  free(colSizes);
  return EXIT_SUCCESS;
}
