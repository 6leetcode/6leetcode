#include <stdio.h>
#include <stdlib.h>

// ------------------------------- solution begin -------------------------------
static int isSafe(int *cols, int row, int col) {
  for (int r = 0; r < row; r++) {
    if (cols[r] == col || abs(cols[r] - col) == abs(r - row)) {
      return 0;
    }
  }
  return 1;
}

static void backtrack(int n, int row, int *cols, int *count) {
  if (row == n) {
    (*count)++;
    return;
  }
  for (int col = 0; col < n; col++) {
    if (isSafe(cols, row, col)) {
      cols[row] = col;
      backtrack(n, row + 1, cols, count);
    }
  }
}

int totalNQueens(int n) {
  int count = 0;
  int *cols = (int *)malloc(sizeof(int) * n);
  backtrack(n, 0, cols, &count);
  free(cols);
  return count;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int input = 4;
  printf("Input:  %d\n", input);
  printf("Output: %d\n", totalNQueens(input));
  return EXIT_SUCCESS;
}
