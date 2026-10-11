#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include <array.h>

// ------------------------------- solution begin -------------------------------
static bool onSegment(double *p, double *a, double *b) {
  double cross = (b[0] - a[0]) * (p[1] - a[1]) - (b[1] - a[1]) * (p[0] - a[0]);
  if (fabs(cross) > 1e-9) return false;
  return p[0] >= fmin(a[0], b[0]) - 1e-9 && p[0] <= fmax(a[0], b[0]) + 1e-9 &&
         p[1] >= fmin(a[1], b[1]) - 1e-9 && p[1] <= fmax(a[1], b[1]) + 1e-9;
}

double *intersection(int *start1, int *end1, int *start2, int *end2, int *returnSize) {
  double x1 = start1[0], y1 = start1[1], x2 = end1[0], y2 = end1[1];
  double x3 = start2[0], y3 = start2[1], x4 = end2[0], y4 = end2[1];
  double d = (x1 - x2) * (y3 - y4) - (y1 - y2) * (x3 - x4);
  *returnSize = 0;
  if (fabs(d) > 1e-12) {
    double t = ((x1 - x3) * (y3 - y4) - (y1 - y3) * (x3 - x4)) / d;
    double u = ((x1 - x3) * (y1 - y2) - (y1 - y3) * (x1 - x2)) / d;
    if (t >= -1e-9 && t <= 1 + 1e-9 && u >= -1e-9 && u <= 1 + 1e-9) {
      double *res = (double *)malloc(sizeof(double) * 2);
      res[0] = x1 + t * (x2 - x1);
      res[1] = y1 + t * (y2 - y1);
      *returnSize = 2;
      return res;
    }
    return NULL;
  }
  double a1[2] = {x1, y1}, b1[2] = {x2, y2}, a2[2] = {x3, y3}, b2[2] = {x4, y4};
  double candidates[4][2];
  int n = 0;
  if (onSegment(a1, a2, b2)) {
    candidates[n][0] = a1[0];
    candidates[n][1] = a1[1];
    n++;
  }
  if (onSegment(b1, a2, b2)) {
    candidates[n][0] = b1[0];
    candidates[n][1] = b1[1];
    n++;
  }
  if (onSegment(a2, a1, b1)) {
    candidates[n][0] = a2[0];
    candidates[n][1] = a2[1];
    n++;
  }
  if (onSegment(b2, a1, b1)) {
    candidates[n][0] = b2[0];
    candidates[n][1] = b2[1];
    n++;
  }
  if (n == 0) return NULL;
  int best = 0;
  for (int i = 1; i < n; i++) {
    if (candidates[i][0] < candidates[best][0] ||
        (candidates[i][0] == candidates[best][0] && candidates[i][1] < candidates[best][1])) {
      best = i;
    }
  }
  double *res = (double *)malloc(sizeof(double) * 2);
  res[0] = candidates[best][0];
  res[1] = candidates[best][1];
  *returnSize = 2;
  return res;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int start1[] = {0, 0}, end1[] = {1, 0}, start2[] = {1, 1}, end2[] = {0, -1};
  printf("Input:  line1 = {0, 0}, {1, 0}; line2 = {1, 1}, {0, -1}\n");
  int size = 0;
  double *res = intersection(start1, end1, start2, end2, &size);
  printf("Output: {%g, %g}\n", res[0], res[1]);
  free(res);
  return EXIT_SUCCESS;
}
