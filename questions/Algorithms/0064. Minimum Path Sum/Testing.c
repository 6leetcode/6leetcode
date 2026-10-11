#include <stdio.h>
#include <stdlib.h>

#include <matrix.h>

// ------------------------------- solution begin -------------------------------
int minPathSum(int **grid, int gridSize, int *gridColSize) {
  int n = gridColSize[0];
  int *dp = (int *)malloc(sizeof(int) * n);
  dp[0] = grid[0][0];
  for (int j = 1; j < n; j++) dp[j] = dp[j - 1] + grid[0][j];
  for (int i = 1; i < gridSize; i++) {
    dp[0] += grid[i][0];
    for (int j = 1; j < n; j++) {
      int best = dp[j] < dp[j - 1] ? dp[j] : dp[j - 1];
      dp[j] = best + grid[i][j];
    }
  }
  int res = dp[n - 1];
  free(dp);
  return res;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int rows = 3, cols = 3;
  int data[3][3] = {{1, 3, 1}, {1, 5, 1}, {4, 2, 1}};
  int **grid = (int **)malloc(sizeof(int *) * rows);
  int *colSize = (int *)malloc(sizeof(int) * rows);
  for (int i = 0; i < rows; i++) {
    grid[i] = (int *)malloc(sizeof(int) * cols);
    colSize[i] = cols;
    for (int j = 0; j < cols; j++) grid[i][j] = data[i][j];
  }
  sds input = matrix_show(grid, rows, colSize);
  printf("Input:  %s\n", input);
  sdsfree(input);
  printf("Output: %d\n", minPathSum(grid, rows, colSize));
  for (int i = 0; i < rows; i++) free(grid[i]);
  free(grid);
  free(colSize);
  return EXIT_SUCCESS;
}
