#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// ------------------------------- solution begin -------------------------------
static int **result;
static int resultLen;

static bool dfs(int **g, int r, int c, int rows, int cols, bool **visited) {
  if (r >= rows || c >= cols || g[r][c] == 1 || visited[r][c]) return false;
  visited[r][c] = true;
  if ((r == rows - 1 && c == cols - 1) || dfs(g, r + 1, c, rows, cols, visited) ||
      dfs(g, r, c + 1, rows, cols, visited)) {
    result[resultLen] = (int *)malloc(sizeof(int) * 2);
    result[resultLen][0] = r;
    result[resultLen][1] = c;
    resultLen++;
    return true;
  }
  return false;
}

int **pathWithObstacles(int **obstacleGrid, int obstacleGridSize, int *obstacleGridColSize, int *returnSize, int **returnColumnSizes) {
  int rows = obstacleGridSize, cols = obstacleGridColSize[0];
  result = (int **)malloc(sizeof(int *) * (rows + cols));
  resultLen = 0;
  bool **visited = (bool **)malloc(sizeof(bool *) * rows);
  for (int i = 0; i < rows; i++) visited[i] = (bool *)calloc(cols, sizeof(bool));
  bool found = dfs(obstacleGrid, 0, 0, rows, cols, visited);
  for (int i = 0; i < rows; i++) free(visited[i]);
  free(visited);
  if (!found) {
    *returnSize = 0;
    *returnColumnSizes = NULL;
    free(result);
    return NULL;
  }
  for (int i = 0; i < resultLen / 2; i++) {
    int *t = result[i];
    result[i] = result[resultLen - 1 - i];
    result[resultLen - 1 - i] = t;
  }
  *returnSize = resultLen;
  *returnColumnSizes = (int *)malloc(sizeof(int) * resultLen);
  for (int i = 0; i < resultLen; i++) (*returnColumnSizes)[i] = 2;
  return result;
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
  printf("Input:  [[0,0,0],[0,1,0],[0,0,0]]\n");
  int size = 0;
  int *colsOut = NULL;
  int **res = pathWithObstacles(grid, rows, colSize, &size, &colsOut);
  printf("Output: [");
  for (int i = 0; i < size; i++) {
    printf("%s[%d, %d]", i == 0 ? "" : ", ", res[i][0], res[i][1]);
    free(res[i]);
  }
  printf("]\n");
  free(res);
  free(colsOut);
  for (int i = 0; i < rows; i++) free(grid[i]);
  free(grid);
  free(colSize);
  return EXIT_SUCCESS;
}
