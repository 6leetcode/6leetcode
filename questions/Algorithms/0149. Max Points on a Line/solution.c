#include <stdio.h>
#include <stdlib.h>

#include <matrix.h>

// ------------------------------- solution begin -------------------------------
static int gcdInt(int a, int b) {
  if (a < 0) a = -a;
  if (b < 0) b = -b;
  while (b != 0) {
    int t = a % b;
    a = b;
    b = t;
  }
  return a;
}

static int cmpSlope(const void *a, const void *b) {
  const int *x = (const int *)a;
  const int *y = (const int *)b;
  if (x[0] != y[0]) return x[0] - y[0];
  return x[1] - y[1];
}

int maxPoints(int **points, int pointsSize, int *pointsColSize) {
  (void)pointsColSize;
  if (pointsSize < 3) return pointsSize;

  int (*slopes)[2] = (int (*)[2])malloc(sizeof(int[2]) * (pointsSize - 1));
  int best = 1;

  for (int i = 0; i < pointsSize; i++) {
    int idx = 0;
    for (int j = i + 1; j < pointsSize; j++) {
      int dy = points[j][1] - points[i][1];
      int dx = points[j][0] - points[i][0];
      int g = gcdInt(dy, dx);
      if (g == 0) g = 1;
      dy /= g;
      dx /= g;
      if (dx < 0 || (dx == 0 && dy < 0)) {
        dy = -dy;
        dx = -dx;
      }
      slopes[idx][0] = dy;
      slopes[idx][1] = dx;
      idx++;
    }

    qsort(slopes, idx, sizeof(int[2]), cmpSlope);

    int run = 0;
    for (int k = 0; k < idx; k++) {
      if (k > 0 && slopes[k][0] == slopes[k - 1][0] && slopes[k][1] == slopes[k - 1][1]) {
        run++;
      } else {
        run = 1;
      }
      if (run + 1 > best) best = run + 1;
    }
  }

  free(slopes);
  return best;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int a[] = {1, 1}, b[] = {2, 2}, c[] = {3, 3};
  int *pts1[] = {a, b, c};
  int cols1[] = {2, 2, 2};
  sds in1 = matrix_show(pts1, 3, cols1);
  printf("Input:  %s\n", in1);
  printf("Output: %d\n", maxPoints(pts1, 3, cols1));
  sdsfree(in1);

  int d[] = {1, 1}, e[] = {3, 2}, f[] = {5, 3}, g[] = {4, 1}, h[] = {2, 3}, i[] = {1, 4};
  int *pts2[] = {d, e, f, g, h, i};
  int cols2[] = {2, 2, 2, 2, 2, 2};
  sds in2 = matrix_show(pts2, 6, cols2);
  printf("Input:  %s\n", in2);
  printf("Output: %d\n", maxPoints(pts2, 6, cols2));
  sdsfree(in2);

  return EXIT_SUCCESS;
}
