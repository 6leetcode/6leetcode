#include <stdio.h>
#include <stdlib.h>

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

void matrix_show(int **matrix, int matrixSize, int *matrixColSize) {
  printf("[");
  for (int i = 0; i < matrixSize; ++i) {
    printf("[");
    for (int j = 0; j < *(matrixColSize + i); ++j) {
      if (j == 0) {
        printf("%d", matrix[i][j]);
      } else {
        printf(", %d", matrix[i][j]);
      }
      if (j == *(matrixColSize + i) - 1)
        printf("]");
    }
    if (i != matrixSize - 1) {
      printf(", ");
    }
  }
  printf("]\n");
}

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
