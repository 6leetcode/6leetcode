#include <stdio.h>
#include <stdlib.h>

#include <array.h>

// ------------------------------- solution begin -------------------------------
static int cmp(const void *a, const void *b) {
  return *(int *)a - *(int *)b;
}

static int dfs(int **land, int rows, int cols, int r, int c) {
  if (r < 0 || r >= rows || c < 0 || c >= cols || land[r][c] != 0) return 0;
  land[r][c] = -1;
  int size = 1;
  for (int dr = -1; dr <= 1; dr++) {
    for (int dc = -1; dc <= 1; dc++) {
      if (dr != 0 || dc != 0) size += dfs(land, rows, cols, r + dr, c + dc);
    }
  }
  return size;
}

int *pondSizes(int **land, int landSize, int *landColSize, int *returnSize) {
  int rows = landSize, cols = landColSize[0];
  int *res = (int *)malloc(sizeof(int) * (rows * cols + 1));
  *returnSize = 0;
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      if (land[i][j] == 0) res[(*returnSize)++] = dfs(land, rows, cols, i, j);
    }
  }
  qsort(res, *returnSize, sizeof(int), cmp);
  return res;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int rows = 4, cols = 4;
  int data[4][4] = {{0, 2, 1, 0}, {0, 1, 0, 1}, {1, 1, 0, 1}, {0, 1, 0, 1}};
  int **land = (int **)malloc(sizeof(int *) * rows);
  int *colSize = (int *)malloc(sizeof(int) * rows);
  for (int i = 0; i < rows; i++) {
    land[i] = (int *)malloc(sizeof(int) * cols);
    colSize[i] = cols;
    for (int j = 0; j < cols; j++) land[i][j] = data[i][j];
  }
  printf("Input:  [[0,2,1,0],[0,1,0,1],[1,1,0,1],[0,1,0,1]]\n");
  int size = 0;
  int *res = pondSizes(land, rows, colSize, &size);
  sds out = array_show(res, size);
  printf("Output: %s\n", out);
  sdsfree(out);
  free(res);
  for (int i = 0; i < rows; i++) free(land[i]);
  free(land);
  free(colSize);
  return EXIT_SUCCESS;
}
