#include <stdio.h>
#include <stdlib.h>

#include <matrix.h>

// ------------------------------- solution begin -------------------------------
int uniquePathsWithObstacles(int **obstacleGrid, int obstacleGridSize, int *obstacleGridColSize) {
  int m = obstacleGridSize, n = obstacleGridColSize[0];
  int *dp = (int *)calloc(n, sizeof(int));
  dp[0] = obstacleGrid[0][0] == 0 ? 1 : 0;
  for (int j = 1; j < n; j++) dp[j] = obstacleGrid[0][j] == 0 ? dp[j - 1] : 0;
  for (int i = 1; i < m; i++) {
    if (obstacleGrid[i][0]) dp[0] = 0;
    for (int j = 1; j < n; j++) {
      if (obstacleGrid[i][j]) {
        dp[j] = 0;
      } else {
        dp[j] += dp[j - 1];
      }
    }
  }
  int res = dp[n - 1];
  free(dp);
  return res;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int rows = 3, cols = 3;
  int data[3][3] = {{0, 0, 0}, {0, 1, 0}, {0, 0, 0}};
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
  printf("Output: %d\n", uniquePathsWithObstacles(grid, rows, colSize));
  for (int i = 0; i < rows; i++) free(grid[i]);
  free(grid);
  free(colSize);
  return EXIT_SUCCESS;
}
