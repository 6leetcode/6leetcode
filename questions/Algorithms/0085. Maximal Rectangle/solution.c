#include <stdio.h>
#include <stdlib.h>

// ------------------------------- solution begin -------------------------------
static int largest(int *heights, int n) {
  int *stack = (int *)malloc(sizeof(int) * (n + 1));
  int top = -1, maxArea = 0;
  for (int i = 0; i <= n; i++) {
    int h = (i == n) ? 0 : heights[i];
    while (top >= 0 && heights[stack[top]] > h) {
      int height = heights[stack[top--]];
      int width = top < 0 ? i : i - stack[top] - 1;
      if (height * width > maxArea) maxArea = height * width;
    }
    stack[++top] = i;
  }
  free(stack);
  return maxArea;
}

int maximalRectangle(char **matrix, int matrixSize, int *matrixColSize) {
  if (matrixSize == 0) return 0;
  int n = matrixColSize[0];
  int *heights = (int *)calloc(n, sizeof(int));
  int maxArea = 0;
  for (int i = 0; i < matrixSize; i++) {
    for (int j = 0; j < n; j++) {
      heights[j] = matrix[i][j] == '1' ? heights[j] + 1 : 0;
    }
    int a = largest(heights, n);
    if (a > maxArea) maxArea = a;
  }
  free(heights);
  return maxArea;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  char raw[4][5] = {"10100", "10111", "11111", "10010"};
  int rows = 4, cols = 5;
  char **matrix = (char **)malloc(sizeof(char *) * rows);
  int *colSize = (int *)malloc(sizeof(int) * rows);
  for (int i = 0; i < rows; i++) {
    matrix[i] = (char *)malloc(cols + 1);
    colSize[i] = cols;
    for (int j = 0; j < cols; j++) matrix[i][j] = raw[i][j];
    matrix[i][cols] = '\0';
  }
  printf("Input:  [[1, 0, 1, 0, 0], [1, 0, 1, 1, 1], [1, 1, 1, 1, 1], [1, 0, 0, 1, 0]]\n");
  printf("Output: %d\n", maximalRectangle(matrix, rows, colSize));
  for (int i = 0; i < rows; i++) free(matrix[i]);
  free(matrix);
  free(colSize);
  return EXIT_SUCCESS;
}
