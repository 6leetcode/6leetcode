#include <stdio.h>
#include <stdlib.h>

#include <matrix.h>

// ------------------------------- solution begin -------------------------------
void rotate(int **matrix, int matrixSize, int *matrixColSize) {
  for (int i = 0; i < matrixSize; i++) {
    if (i < matrixSize / 2) {
      int *temp = matrix[i];
      matrix[i] = matrix[matrixSize - 1 - i];
      matrix[matrixSize - 1 - i] = temp;
    }
  }
  for (int i = 0; i < matrixSize; ++i) {
    for (int j = i + 1; j < matrixColSize[i]; ++j) {
      int temp = matrix[i][j];
      matrix[i][j] = matrix[j][i];
      matrix[j][i] = temp;
    }
  }
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int matrixSize = 3;
  int *matrixColSize = (int *)malloc(sizeof(int) * matrixSize);
  for (int i = 0; i < matrixSize; i++) {
    matrixColSize[i] = 3;
  }
  int **matrix = (int **)malloc(sizeof(int *) * matrixSize);
  for (int i = 0; i < matrixSize; i++) {
    matrix[i] = (int *)malloc(sizeof(int) * matrixColSize[i]);
    for (int j = 0; j < matrixColSize[i]; j++) {
      matrix[i][j] = i * matrixSize + j + 1;
    }
  }

  printf("Input:  ");
  matrix_show(matrix, matrixSize, matrixColSize);
  rotate(matrix, matrixSize, matrixColSize);
  printf("Output: ");
  matrix_show(matrix, matrixSize, matrixColSize);

  for (int i = 0; i < matrixSize; i++) {
    free(matrix[i]);
  }
  free(matrix);
  free(matrixColSize);
  return EXIT_SUCCESS;
}
