#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

static double fast_pow(double x, int32_t n) {
  if (n == 0) { return 1.0; }
  if (n == 1) { return x; }
  double t = fast_pow(x, n / 2);
  return n & 1 ? t * t * x : t * t;
}

static double myPow(double x, int n) {
  return n < 0 ? 1 / fast_pow(x, -(int32_t)(n)) : fast_pow(x, (int32_t)n);
}

int main(int argc, char const *argv[]) {
  double x = 2;
  int n    = -8;
  printf("Input:  %f, %d\n", x, n);
  double output = myPow(x, n);
  printf("Output: %f\n", output);
  return 0;
}
