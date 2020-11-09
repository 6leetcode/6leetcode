#include <stdio.h>

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
