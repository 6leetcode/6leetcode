#include <stdio.h>
#include <stdlib.h>

#include <matrix.h>

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
  matrix_show(matrix, matrixSize, matrixColSize);
  for (int i = 0; i < matrixSize; i++) {
    free(matrix[i]);
  }
  free(matrix);
  free(matrixColSize);
  return 0;
}
