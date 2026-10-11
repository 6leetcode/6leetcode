#include <stdio.h>
#include <stdlib.h>

#include <matrix.h>

// ------------------------------- solution begin -------------------------------
int **generateMatrix(int n, int *returnSize, int **returnColumnSizes) {
  int **m = (int **)malloc(sizeof(int *) * n);
  *returnColumnSizes = (int *)malloc(sizeof(int) * n);
  *returnSize = n;
  for (int i = 0; i < n; i++) {
    m[i] = (int *)malloc(sizeof(int) * n);
    (*returnColumnSizes)[i] = n;
  }
  int top = 0, bottom = n - 1, left = 0, right = n - 1, num = 1;
  while (top <= bottom && left <= right) {
    for (int c = left; c <= right; c++) m[top][c] = num++;
    top++;
    for (int r = top; r <= bottom; r++) m[r][right] = num++;
    right--;
    if (top <= bottom) {
      for (int c = right; c >= left; c--) m[bottom][c] = num++;
      bottom--;
    }
    if (left <= right) {
      for (int r = bottom; r >= top; r--) m[r][left] = num++;
      left++;
    }
  }
  return m;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int input = 3;
  printf("Input:  %d\n", input);
  int returnSize = 0;
  int *cols = NULL;
  int **res = generateMatrix(input, &returnSize, &cols);
  sds output = matrix_show(res, returnSize, cols);
  printf("Output: %s\n", output);
  sdsfree(output);
  for (int i = 0; i < returnSize; i++) free(res[i]);
  free(res);
  free(cols);
  return EXIT_SUCCESS;
}
