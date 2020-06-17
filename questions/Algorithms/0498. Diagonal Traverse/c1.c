#include <stdio.h>
#include <stdlib.h>

int *findDiagonalOrder(int **matrix, int matrixSize, int *matrixColSize, int *returnSize) {
  if (matrix == NULL || *matrix == NULL || matrixSize <= 0 || *matrixColSize <= 0 || matrixColSize == NULL || returnSize == NULL) {
    return NULL;
  }

  *returnSize = matrixSize * *matrixColSize;

  int *ret = (int *)malloc(sizeof(int) * *returnSize);

  if (ret == NULL) {
    return NULL;
  }

  for (int i = 0; i < *returnSize; i++) {
    ret[i] = 0;
  }

  int index = 0;
  for (int idx = 0; idx < matrixSize + *matrixColSize - 1; idx++) {
    for (int i = idx, j = 0; i >= 0; i--, j++) {
      if (i < matrixSize && j < *matrixColSize) {
        if (idx % 2 == 0) {
          ret[index] = matrix[i][j];
        } else {
          ret[index] = matrix[j][i];
        }
        index++;
      }
    }
  }

  return ret;
}

int main(int argc, char const *argv[]) {
  int matrixSize    = 3;
  int matrixColSize = 3;

  int index    = 1;
  int **matrix = (int **)malloc(sizeof(int *) * 3);
  printf("Input:  [");
  for (int i = 0; i < 3; i++) {
    matrix[i] = (int *)malloc(sizeof(int) * 3);
    printf("[");
    for (int j = 0; j < 3; j++) {
      matrix[i][j] = index;
      if (j != 2) {
        printf("%d, ", matrix[i][j]);
      } else {
        printf("%d", matrix[i][j]);
      }
      index++;
    }
    if (i != 2) {
      printf("], ");
    }
  }
  printf("]]\n");
  int returnSize = 0;
  int *result    = findDiagonalOrder(matrix, matrixSize, &matrixColSize, &returnSize);

  for (int i = 0; i < 3; i++) {
    free(matrix[i]);
  }
  free(matrix);

  printf("Output: [");
  for (int i = 0; i < returnSize; i++) {
    if (i != returnSize - 1) {
      printf("%d, ", result[i]);
    } else {
      printf("%d", result[i]);
    }
  }
  printf("]\n");
  free(result);

  return EXIT_SUCCESS;
}
