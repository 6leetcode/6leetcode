#include <stdio.h>
#include <stdlib.h>

#include <matrix.h>

// ------------------------------- solution begin -------------------------------
int **insert(int **intervals, int intervalsSize, int *intervalsColSize, int *newInterval, int newIntervalSize, int *returnSize, int **returnColumnSizes) {
  int **res = (int **)malloc(sizeof(int *) * (intervalsSize + 1));
  *returnColumnSizes = (int *)malloc(sizeof(int) * (intervalsSize + 1));
  *returnSize = 0;
  int i = 0;

  while (i < intervalsSize && intervals[i][1] < newInterval[0]) {
    res[*returnSize] = (int *)malloc(sizeof(int) * 2);
    res[*returnSize][0] = intervals[i][0];
    res[*returnSize][1] = intervals[i][1];
    (*returnColumnSizes)[*returnSize] = 2;
    (*returnSize)++;
    i++;
  }

  int lo = newInterval[0], hi = newInterval[1];
  while (i < intervalsSize && intervals[i][0] <= hi) {
    if (intervals[i][0] < lo) lo = intervals[i][0];
    if (intervals[i][1] > hi) hi = intervals[i][1];
    i++;
  }
  res[*returnSize] = (int *)malloc(sizeof(int) * 2);
  res[*returnSize][0] = lo;
  res[*returnSize][1] = hi;
  (*returnColumnSizes)[*returnSize] = 2;
  (*returnSize)++;

  while (i < intervalsSize) {
    res[*returnSize] = (int *)malloc(sizeof(int) * 2);
    res[*returnSize][0] = intervals[i][0];
    res[*returnSize][1] = intervals[i][1];
    (*returnColumnSizes)[*returnSize] = 2;
    (*returnSize)++;
    i++;
  }
  return res;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int rows = 2;
  int data[2][2] = {{1, 3}, {6, 9}};
  int **intervals = (int **)malloc(sizeof(int *) * rows);
  int *colSize = (int *)malloc(sizeof(int) * rows);
  for (int i = 0; i < rows; i++) {
    intervals[i] = (int *)malloc(sizeof(int) * 2);
    colSize[i] = 2;
    intervals[i][0] = data[i][0];
    intervals[i][1] = data[i][1];
  }
  int newInterval[] = {2, 5};
  sds input = matrix_show(intervals, rows, colSize);
  printf("Input:  %s [2, 5]\n", input);
  sdsfree(input);

  int returnSize = 0;
  int *returnCol = NULL;
  int **res = insert(intervals, rows, colSize, newInterval, 2, &returnSize, &returnCol);
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
