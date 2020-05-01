#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int climbStairs(int n) {
  // with this formal `$\frac{\frac{1+\sqrt{5}^{n}}{2}-\frac{1-\sqrt{5}^{n}}{2}}{\sqrt{5}}$`
  const double s = sqrt(5);
  return floor((pow((1 + s) / 2, n + 1) + pow((1 - s) / 2, n + 1)) / s + 0.5);
}

int main(int argc, char const *argv[]) {
  int input = 10;
  printf("Input:  %d\n", input);
  printf("Output: %d\n", climbStairs(input));
  return EXIT_SUCCESS;
}
