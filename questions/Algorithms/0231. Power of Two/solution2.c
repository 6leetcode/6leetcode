#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// ------------------------------- solution begin -------------------------------
bool isPowerOfTwo(int n) {
  return n <= 0 ? false : (n & (n - 1)) == 0;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int input1 = 16;
  printf("Input: %d\n", input1);
  printf("Output: %s\n", isPowerOfTwo(input1) ? "true" : "false");
  return EXIT_SUCCESS;
}
