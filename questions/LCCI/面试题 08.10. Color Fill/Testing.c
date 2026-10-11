#include <stdio.h>
#include <stdlib.h>

#include <matrix.h>

// ------------------------------- solution begin -------------------------------
static void dfs(int **image, int rows, int cols, int r, int c, int oldColor, int newColor) {
  if (r < 0 || r >= rows || c < 0 || c >= cols || image[r][c] != oldColor) return;
  image[r][c] = newColor;
  dfs(image, rows, cols, r + 1, c, oldColor, newColor);
  dfs(image, rows, cols, r - 1, c, oldColor, newColor);
  dfs(image, rows, cols, r, c + 1, oldColor, newColor);
  dfs(image, rows, cols, r, c - 1, oldColor, newColor);
}

int **floodFill(int **image, int imageSize, int *imageColSize, int sr, int sc, int newColor, int *returnSize, int **returnColumnSizes) {
  int oldColor = image[sr][sc];
  if (oldColor != newColor) dfs(image, imageSize, imageColSize[0], sr, sc, oldColor, newColor);
  *returnSize = imageSize;
  *returnColumnSizes = (int *)malloc(sizeof(int) * imageSize);
  for (int i = 0; i < imageSize; i++) (*returnColumnSizes)[i] = imageColSize[i];
  return image;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int rows = 3, cols = 3;
  int data[3][3] = {{1, 1, 1}, {1, 1, 0}, {1, 0, 1}};
  int **image = (int **)malloc(sizeof(int *) * rows);
  int *colSize = (int *)malloc(sizeof(int) * rows);
  for (int i = 0; i < rows; i++) {
    image[i] = (int *)malloc(sizeof(int) * cols);
    colSize[i] = cols;
    for (int j = 0; j < cols; j++) image[i][j] = data[i][j];
  }
  printf("Input:  [[1,1,1],[1,1,0],[1,0,1]], sr = 1, sc = 1, newColor = 2\n");
  int size = 0;
  int *colsOut = NULL;
  int **res = floodFill(image, rows, colSize, 1, 1, 2, &size, &colsOut);
  sds out = matrix_show(res, size, colsOut);
  printf("Output: %s\n", out);
  sdsfree(out);
  for (int i = 0; i < rows; i++) free(image[i]);
  free(image);
  free(colSize);
  free(colsOut);
  return EXIT_SUCCESS;
}
