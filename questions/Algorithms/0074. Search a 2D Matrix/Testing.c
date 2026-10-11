#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include <matrix.h>

// ------------------------------- solution begin -------------------------------
bool searchMatrix(int **matrix, int matrixSize, int *matrixColSize, int target) {
  if (matrixSize == 0) {
    return false;
  }
  int i = 0;
  int j = matrixColSize[0] - 1;
  while (i < matrixSize && j >= 0) {
    if (matrix[i][j] == target) {
      return true;
    } else if (matrix[i][j] > target) {
      j--;
    } else {
      i++;
    }
  }
  return false;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int rows = 3, cols = 4;
  int data[3][4] = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 50}};
  int **matrix = (int **)malloc(sizeof(int *) * rows);
  int *colSize = (int *)malloc(sizeof(int) * rows);
  for (int i = 0; i < rows; i++) {
    matrix[i] = (int *)malloc(sizeof(int) * cols);
    colSize[i] = cols;
    for (int j = 0; j < cols; j++) {
      matrix[i][j] = data[i][j];
    }
  }
  int target = 11;
  sds input = matrix_show(matrix, rows, colSize);
  printf("Input:  %s %d\n", input, target);
  sdsfree(input);
  printf("Output: %s\n", searchMatrix(matrix, rows, colSize, target) ? "true" : "false");

  for (int i = 0; i < rows; i++) {
    free(matrix[i]);
  }
  free(matrix);
  free(colSize);
  return EXIT_SUCCESS;
}
