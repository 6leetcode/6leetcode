#include <stdbool.h>
#include <stdio.h>

bool isPowerOfTwo(int n) {
  return n <= 0 ? false : (n & (n - 1)) == 0;
}

int main(int argc, char const *argv[]) {
  int input1 = 16;
  printf("Input: %d\n", input1);
  printf("Output: %s\n", isPowerOfTwo(input1) ? "true" : "false");
  int input2 = -16;
  printf("Input: %d\n", input2);
  printf("Output: %s\n", isPowerOfTwo(input2) ? "true" : "false");
  return 0;
}
