#include <stdio.h>
#include <stdlib.h>

#include <matrix.h>

// ------------------------------- solution begin -------------------------------
static int dist(int *p) {
  return p[0] * p[0] + p[1] * p[1];
}

static int cmp(const void *a, const void *b) {
  return dist(*(int **)a) - dist(*(int **)b);
}

int **kClosest(int **points, int pointsSize, int *pointsColSize, int K, int *returnSize, int **returnColumnSizes) {
  qsort(points, pointsSize, sizeof(int *), cmp);
  int **res = (int **)malloc(sizeof(int *) * K);
  *returnColumnSizes = (int *)malloc(sizeof(int) * K);
  *returnSize = K;
  for (int i = 0; i < K; i++) {
    res[i] = (int *)malloc(sizeof(int) * 2);
    res[i][0] = points[i][0];
    res[i][1] = points[i][1];
    (*returnColumnSizes)[i] = 2;
  }
  return res;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int rows = 3;
  int data[3][2] = {{3, 3}, {5, -1}, {-2, 4}};
  int **points = (int **)malloc(sizeof(int *) * rows);
  int *colSize = (int *)malloc(sizeof(int) * rows);
  for (int i = 0; i < rows; i++) {
    points[i] = (int *)malloc(sizeof(int) * 2);
    colSize[i] = 2;
    points[i][0] = data[i][0];
    points[i][1] = data[i][1];
  }
  int K = 2;
  sds input = matrix_show(points, rows, colSize);
  printf("Input:  %s %d\n", input, K);
  sdsfree(input);

  int returnSize = 0;
  int *returnCol = NULL;
  int **res = kClosest(points, rows, colSize, K, &returnSize, &returnCol);
  sds output = matrix_show(res, returnSize, returnCol);
  printf("Output: %s\n", output);
  sdsfree(output);
  for (int i = 0; i < returnSize; i++) {
    free(res[i]);
  }
  free(res);
  free(returnCol);
  for (int i = 0; i < rows; i++) {
    free(points[i]);
  }
  free(points);
  free(colSize);
  return EXIT_SUCCESS;
}
