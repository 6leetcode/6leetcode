#include <stdio.h>
#include <stdlib.h>

#include <matrix.h>

// ------------------------------- solution begin -------------------------------
void rotate(int **matrix, int n) {
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      int t = matrix[i][j];
      matrix[i][j] = matrix[j][i];
      matrix[j][i] = t;
    }
  }
  for (int i = 0; i < n; i++) {
    for (int l = 0, r = n - 1; l < r; l++, r--) {
      int t = matrix[i][l];
      matrix[i][l] = matrix[i][r];
      matrix[i][r] = t;
    }
  }
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int n = 3;
  int data[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int **matrix = (int **)malloc(sizeof(int *) * n);
  int *colSize = (int *)malloc(sizeof(int) * n);
  for (int i = 0; i < n; i++) {
    matrix[i] = (int *)malloc(sizeof(int) * n);
    colSize[i] = n;
    for (int j = 0; j < n; j++) matrix[i][j] = data[i][j];
  }
  sds input = matrix_show(matrix, n, colSize);
  printf("Input:  %s\n", input);
  sdsfree(input);
  rotate(matrix, n);
  sds output = matrix_show(matrix, n, colSize);
  printf("Output: %s\n", output);
  sdsfree(output);
  for (int i = 0; i < n; i++) free(matrix[i]);
  free(matrix);
  free(colSize);
  return EXIT_SUCCESS;
}
