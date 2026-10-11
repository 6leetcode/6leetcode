#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

#include <array.h>

// ------------------------------- solution begin -------------------------------
int *getMaxMatrix(int **matrix, int matrixSize, int *matrixColSize, int *returnSize) {
  int rows = matrixSize, cols = matrixColSize[0];
  long long best = LLONG_MIN;
  int r1 = 0, c1 = 0, r2 = 0, c2 = 0;
  for (int top = 0; top < rows; top++) {
    int *colSum = (int *)calloc(cols, sizeof(int));
    for (int bottom = top; bottom < rows; bottom++) {
      for (int j = 0; j < cols; j++) colSum[j] += matrix[bottom][j];
      long long cur = 0;
      int start = 0;
      for (int j = 0; j < cols; j++) {
        if (cur <= 0) {
          cur = colSum[j];
          start = j;
        } else {
          cur += colSum[j];
        }
        if (cur > best) {
          best = cur;
          r1 = top;
          c1 = start;
          r2 = bottom;
          c2 = j;
        }
      }
    }
    free(colSum);
  }
  int *res = (int *)malloc(sizeof(int) * 4);
  res[0] = r1;
  res[1] = c1;
  res[2] = r2;
  res[3] = c2;
  *returnSize = 4;
  return res;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int rows = 2, cols = 3;
  int data[2][3] = {{-1, 0}, {0, -1}};
  (void)data;
  int d2[2][3] = {{-1, 0, 0}, {0, -1, 0}};
  int **matrix = (int **)malloc(sizeof(int *) * rows);
  int *colSize = (int *)malloc(sizeof(int) * rows);
  for (int i = 0; i < rows; i++) {
    matrix[i] = (int *)malloc(sizeof(int) * cols);
    colSize[i] = cols;
    for (int j = 0; j < cols; j++) matrix[i][j] = d2[i][j];
  }
  printf("Input:  [[-1,0,0],[0,-1,0]]\n");
  int size = 0;
  int *res = getMaxMatrix(matrix, rows, colSize, &size);
  sds out = array_show(res, size);
  printf("Output: %s\n", out);
  sdsfree(out);
  free(res);
  for (int i = 0; i < rows; i++) free(matrix[i]);
  free(matrix);
  free(colSize);
  return EXIT_SUCCESS;
}
