#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include <matrix.h>

// ------------------------------- solution begin -------------------------------
bool searchMatrix(int **matrix, int matrixSize, int *matrixColSize, int target) {
  if (matrixSize == 0) return false;
  int i = 0, j = matrixColSize[0] - 1;
  while (i < matrixSize && j >= 0) {
    if (matrix[i][j] == target) return true;
    if (matrix[i][j] > target) {
      j--;
    } else {
      i++;
    }
  }
  return false;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int rows = 5, cols = 5;
  int data[5][5] = {
      {1, 4, 7, 11, 15},
      {2, 5, 8, 12, 19},
      {3, 6, 9, 16, 22},
      {10, 13, 14, 17, 24},
      {18, 21, 23, 26, 30},
  };
  int **matrix = (int **)malloc(sizeof(int *) * rows);
  int *colSize = (int *)malloc(sizeof(int) * rows);
  for (int i = 0; i < rows; i++) {
    matrix[i] = (int *)malloc(sizeof(int) * cols);
    colSize[i] = cols;
    for (int j = 0; j < cols; j++) matrix[i][j] = data[i][j];
  }
  int target = 5;
  printf("Input:  matrix (sorted rows/cols), target = %d\n", target);
  printf("Output: %s\n", searchMatrix(matrix, rows, colSize, target) ? "true" : "false");
  for (int i = 0; i < rows; i++) free(matrix[i]);
  free(matrix);
  free(colSize);
  return EXIT_SUCCESS;
}
