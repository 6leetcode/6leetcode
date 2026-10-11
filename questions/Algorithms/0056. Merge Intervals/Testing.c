#include <stdio.h>
#include <stdlib.h>

#include <matrix.h>

// ------------------------------- solution begin -------------------------------
static int cmp(const void *a, const void *b) {
  int *x = *(int **)a;
  int *y = *(int **)b;
  return x[0] - y[0];
}

int **merge(int **intervals, int intervalsSize, int *intervalsColSize, int *returnSize, int **returnColumnSizes) {
  *returnSize = 0;
  if (intervalsSize == 0) {
    *returnColumnSizes = NULL;
    return NULL;
  }
  qsort(intervals, intervalsSize, sizeof(int *), cmp);
  int **merged = (int **)malloc(sizeof(int *) * intervalsSize);
  *returnColumnSizes = (int *)malloc(sizeof(int) * intervalsSize);
  for (int i = 0; i < intervalsSize; i++) {
    int L = intervals[i][0], R = intervals[i][1];
    if (*returnSize == 0 || merged[*returnSize - 1][1] < L) {
      merged[*returnSize] = (int *)malloc(sizeof(int) * 2);
      merged[*returnSize][0] = L;
      merged[*returnSize][1] = R;
      (*returnColumnSizes)[*returnSize] = 2;
      (*returnSize)++;
    } else if (R > merged[*returnSize - 1][1]) {
      merged[*returnSize - 1][1] = R;
    }
  }
  return merged;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int rows = 2;
  int data[2][2] = {{1, 4}, {4, 5}};
  int **intervals = (int **)malloc(sizeof(int *) * rows);
  int *colSize = (int *)malloc(sizeof(int) * rows);
  for (int i = 0; i < rows; i++) {
    intervals[i] = (int *)malloc(sizeof(int) * 2);
    colSize[i] = 2;
    intervals[i][0] = data[i][0];
    intervals[i][1] = data[i][1];
  }
  printf("Input:  [[1, 4], [4, 5]]\n");

  int returnSize = 0;
  int *returnCol = NULL;
  int **res = merge(intervals, rows, colSize, &returnSize, &returnCol);
  sds output = matrix_show(res, returnSize, returnCol);
  printf("Output: %s\n", output);
  sdsfree(output);
  for (int i = 0; i < returnSize; i++) {
    free(res[i]);
  }
  free(res);
  free(returnCol);
  for (int i = 0; i < rows; i++) {
    free(intervals[i]);
  }
  free(intervals);
  free(colSize);
  return EXIT_SUCCESS;
}
