#include <stdio.h>
#include <stdlib.h>

#include <matrix.h>

// ------------------------------- solution begin -------------------------------
void setZeroes(int **matrix, int m, int n) {
  int firstRow = 0, firstCol = 0;
  for (int j = 0; j < n; j++) if (matrix[0][j] == 0) firstRow = 1;
  for (int i = 0; i < m; i++) if (matrix[i][0] == 0) firstCol = 1;
  for (int i = 1; i < m; i++) {
    for (int j = 1; j < n; j++) {
      if (matrix[i][j] == 0) {
        matrix[i][0] = 0;
        matrix[0][j] = 0;
      }
    }
  }
  for (int i = 1; i < m; i++) {
    for (int j = 1; j < n; j++) {
      if (matrix[i][0] == 0 || matrix[0][j] == 0) matrix[i][j] = 0;
    }
  }
  if (firstRow) for (int j = 0; j < n; j++) matrix[0][j] = 0;
  if (firstCol) for (int i = 0; i < m; i++) matrix[i][0] = 0;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int m = 3, n = 3;
  int data[3][3] = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
  int **matrix = (int **)malloc(sizeof(int *) * m);
  int *colSize = (int *)malloc(sizeof(int) * m);
  for (int i = 0; i < m; i++) {
    matrix[i] = (int *)malloc(sizeof(int) * n);
    colSize[i] = n;
    for (int j = 0; j < n; j++) matrix[i][j] = data[i][j];
  }
  sds input = matrix_show(matrix, m, colSize);
  printf("Input:  %s\n", input);
  sdsfree(input);
  setZeroes(matrix, m, n);
  sds output = matrix_show(matrix, m, colSize);
  printf("Output: %s\n", output);
  sdsfree(output);
  for (int i = 0; i < m; i++) free(matrix[i]);
  free(matrix);
  free(colSize);
  return EXIT_SUCCESS;
}
