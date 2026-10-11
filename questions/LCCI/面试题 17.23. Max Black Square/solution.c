#include <stdio.h>
#include <stdlib.h>

#include <matrix.h>

// ------------------------------- solution begin -------------------------------
int maxBlackSquare(int **matrix, int matrixSize, int *matrixColSize) {
  int n = matrixSize;
  int **dp = (int **)malloc(sizeof(int *) * n);
  for (int i = 0; i < n; i++) dp[i] = (int *)calloc(n, sizeof(int));
  int best = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < matrixColSize[i]; j++) {
      if (matrix[i][j] == 1) {
        if (i == 0 || j == 0) {
          dp[i][j] = 1;
        } else {
          int m = dp[i - 1][j - 1] < dp[i - 1][j] ? dp[i - 1][j - 1] : dp[i - 1][j];
          if (dp[i][j - 1] < m) m = dp[i][j - 1];
          dp[i][j] = m + 1;
        }
        if (dp[i][j] > best) best = dp[i][j];
      }
    }
  }
  for (int i = 0; i < n; i++) free(dp[i]);
  free(dp);
  return best;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int n = 4;
  int data[4][4] = {{0, 1, 1, 1}, {1, 1, 1, 1}, {0, 1, 1, 1}, {0, 1, 1, 1}};
  int **matrix = (int **)malloc(sizeof(int *) * n);
  int *colSize = (int *)malloc(sizeof(int) * n);
  for (int i = 0; i < n; i++) {
    matrix[i] = (int *)malloc(sizeof(int) * n);
    colSize[i] = n;
    for (int j = 0; j < n; j++) matrix[i][j] = data[i][j];
  }
  printf("Input:  [[0,1,1,1],[1,1,1,1],[0,1,1,1],[0,1,1,1]]\n");
  printf("Output: %d\n", maxBlackSquare(matrix, n, colSize));
  for (int i = 0; i < n; i++) free(matrix[i]);
  free(matrix);
  free(colSize);
  return EXIT_SUCCESS;
}
