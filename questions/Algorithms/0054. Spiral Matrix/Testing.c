#include <stdio.h>
#include <stdlib.h>

#include <array.h>

// ------------------------------- solution begin -------------------------------
int *spiralOrder(int **matrix, int matrixSize, int *matrixColSize, int *returnSize) {
  int rows = matrixSize, cols = matrixColSize[0];
  int *order = (int *)malloc(sizeof(int) * rows * cols);
  *returnSize = 0;
  int left = 0, right = cols - 1, top = 0, bottom = rows - 1;
  while (left <= right && top <= bottom) {
    for (int c = left; c <= right; c++) {
      order[(*returnSize)++] = matrix[top][c];
    }
    for (int r = top + 1; r <= bottom; r++) {
      order[(*returnSize)++] = matrix[r][right];
    }
    if (left < right && top < bottom) {
      for (int c = right - 1; c > left; c--) {
        order[(*returnSize)++] = matrix[bottom][c];
      }
      for (int r = bottom; r > top; r--) {
        order[(*returnSize)++] = matrix[r][left];
      }
    }
    left++;
    right--;
    top++;
    bottom--;
  }
  return order;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int rows = 3, cols = 3;
  int data[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int **matrix = (int **)malloc(sizeof(int *) * rows);
  int *colSize = (int *)malloc(sizeof(int) * rows);
  for (int i = 0; i < rows; i++) {
    matrix[i] = (int *)malloc(sizeof(int) * cols);
    colSize[i] = cols;
    for (int j = 0; j < cols; j++) {
      matrix[i][j] = data[i][j];
    }
  }
  printf("Input:  [[1, 2, 3], [4, 5, 6], [7, 8, 9]]\n");

  int returnSize = 0;
  int *res = spiralOrder(matrix, rows, colSize, &returnSize);
  sds output = array_show(res, returnSize);
  printf("Output: %s\n", output);
  sdsfree(output);
  free(res);
  for (int i = 0; i < rows; i++) {
    free(matrix[i]);
  }
  free(matrix);
  free(colSize);
  return EXIT_SUCCESS;
}
