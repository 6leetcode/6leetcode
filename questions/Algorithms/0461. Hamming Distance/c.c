#include <stdio.h>
#include <stdlib.h>

// -------------------------------solution begin-------------------------------
int hammingDistance(int x, int y) {
  return __builtin_popcount(x ^ y);
}
// -------------------------------solution end---------------------------------

int main(int argc, char const *argv[]) {
  int input1 = 1, input2 = 4;
  printf("Input:  %d, %d\n", input1, input2);
  printf("Output: %d\n", hammingDistance(input1, input2));
  return EXIT_SUCCESS;
}
