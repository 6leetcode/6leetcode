#include <stdio.h>
#include <stdlib.h>

#define __USE_MISC
#include <math.h>

int mySqrt(int x) {
  if (x < 2) return x;

  int left = (int)pow(M_E, 0.5 * log(x));
  int right = left + 1;
  return (long)right * right > x ? left : right;
}

int main(int argc, char const *argv[]) {
  int input = 8;
  printf("Input:  %d\n", input);
  int output = mySqrt(input);
  printf("Output: %d\n", output);
  return EXIT_SUCCESS;
}
