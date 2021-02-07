#include <stdio.h>
#include <string.h>

#include <sds.h>

sds matrix_show(int **matrix, int matrixSize, int *matrixColSize) {
  sds str = sdsnew("[");
  for (int i = 0; i < matrixSize; ++i) {
    str = sdscat(str, "[");
    for (int j = 0; j < *(matrixColSize + i); ++j) {
      if (j == 0) {
        str = sdscatprintf(str, "%d", matrix[i][j]);
      } else {
        str = sdscatprintf(str, ", %d", matrix[i][j]);
      }
      if (j == *(matrixColSize + i) - 1) {
        str = sdscat(str, "]");
      }
    }
    if (i != matrixSize - 1) {
      str = sdscat(str, ", ");
    }
  }
  str = sdscat(str, "]");
  return str;
}
