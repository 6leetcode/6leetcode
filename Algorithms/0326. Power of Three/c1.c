#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool isPowerOfThree(int n) {
  return n > 0 && 1162261467 % n == 0;
}

int main(int argc, char const *argv[]) {
  int input = 27;
  printf("Input:  %d\n", input);
  printf("Output: %s\n", isPowerOfThree(input) ? "true" : "false");
  return EXIT_SUCCESS;
}
