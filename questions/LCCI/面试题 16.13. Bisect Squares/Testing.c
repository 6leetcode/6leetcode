#include <math.h>
#include <stdio.h>
#include <stdlib.h>

// ------------------------------- solution begin -------------------------------
double *cutSquares(int *square1, int *square2, int *returnSize) {
  double c1x = square1[0] + square1[2] / 2.0, c1y = square1[1] + square1[2] / 2.0;
  double c2x = square2[0] + square2[2] / 2.0, c2y = square2[1] + square2[2] / 2.0;
  double *res = (double *)malloc(sizeof(double) * 4);
  *returnSize = 4;
  if (fabs(c1x - c2x) < 1e-12) {
    res[0] = c1x;
    res[1] = fmin(square1[1], square2[1]);
    res[2] = c1x;
    res[3] = fmax(square1[1] + square1[2], square2[1] + square2[2]);
    return res;
  }
  double k = (c2y - c1y) / (c2x - c1x);
  double b = c1y - k * c1x;
  double pts[16][2];
  int n = 0;
  double sq[2][3] = {{square1[0], square1[1], square1[2]}, {square2[0], square2[1], square2[2]}};
  for (int s = 0; s < 2; s++) {
    double x0 = sq[s][0], y0 = sq[s][1], side = sq[s][2];
    double xs[2] = {x0, x0 + side};
    for (int t = 0; t < 2; t++) {
      double x = xs[t], y = k * x + b;
      if (y >= y0 - 1e-6 && y <= y0 + side + 1e-6) {
        pts[n][0] = x;
        pts[n][1] = y;
        n++;
      }
    }
    if (fabs(k) > 1e-12) {
      double ys[2] = {y0, y0 + side};
      for (int t = 0; t < 2; t++) {
        double y = ys[t], x = (y - b) / k;
        if (x >= x0 - 1e-6 && x <= x0 + side + 1e-6) {
          pts[n][0] = x;
          pts[n][1] = y;
          n++;
        }
      }
    }
  }
  int mini = 0, maxi = 0;
  for (int i = 1; i < n; i++) {
    if (pts[i][0] < pts[mini][0] || (pts[i][0] == pts[mini][0] && pts[i][1] < pts[mini][1])) mini = i;
    if (pts[i][0] > pts[maxi][0] || (pts[i][0] == pts[maxi][0] && pts[i][1] > pts[maxi][1])) maxi = i;
  }
  res[0] = pts[mini][0];
  res[1] = pts[mini][1];
  res[2] = pts[maxi][0];
  res[3] = pts[maxi][1];
  return res;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int square1[] = {-1, -1, 2};
  int square2[] = {0, -1, 2};
  printf("Input:  square1 = {-1, -1, 2}, square2 = {0, -1, 2}\n");
  int size = 0;
  double *res = cutSquares(square1, square2, &size);
  printf("Output: {%g, %g, %g, %g}\n", res[0], res[1], res[2], res[3]);
  free(res);
  return EXIT_SUCCESS;
}
