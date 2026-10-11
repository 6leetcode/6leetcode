#include <stdio.h>
#include <stdlib.h>

#include <array.h>

// ------------------------------- solution begin -------------------------------
int *bestLine(int **points, int pointsSize, int *pointsColSize, int *returnSize) {
  (void)pointsColSize;
  int bestCount = 2, bestI = 0, bestJ = 1;
  for (int i = 0; i < pointsSize; i++) {
    for (int j = i + 1; j < pointsSize; j++) {
      long long dx = points[j][0] - points[i][0];
      long long dy = points[j][1] - points[i][1];
      int count = 2;
      for (int k = 0; k < pointsSize; k++) {
        if (k == i || k == j) continue;
        long long ddx = points[k][0] - points[i][0];
        long long ddy = points[k][1] - points[i][1];
        if (dx * ddy == dy * ddx) count++;
      }
      if (count > bestCount) {
        bestCount = count;
        bestI = i;
        bestJ = j;
      }
    }
  }
  int *res = (int *)malloc(sizeof(int) * 2);
  res[0] = bestI;
  res[1] = bestJ;
  *returnSize = 2;
  return res;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int rows = 4;
  int data[4][2] = {{0, 0}, {1, 1}, {1, 0}, {2, 0}};
  int **points = (int **)malloc(sizeof(int *) * rows);
  int *colSize = (int *)malloc(sizeof(int) * rows);
  for (int i = 0; i < rows; i++) {
    points[i] = (int *)malloc(sizeof(int) * 2);
    colSize[i] = 2;
    points[i][0] = data[i][0];
    points[i][1] = data[i][1];
  }
  printf("Input:  [[0,0],[1,1],[1,0],[2,0]]\n");
  int size = 0;
  int *res = bestLine(points, rows, colSize, &size);
  sds out = array_show(res, size);
  printf("Output: %s\n", out);
  sdsfree(out);
  free(res);
  for (int i = 0; i < rows; i++) free(points[i]);
  free(points);
  free(colSize);
  return EXIT_SUCCESS;
}
