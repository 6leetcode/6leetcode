#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool isPowerOfTwo(int n) {
  int cnt = 0; //num of bits 1
  for (; n > 0; n >>= 1) {
    if (n & 1) {
      cnt++;
      if (cnt > 1) return false;
    }
  }
  return cnt == 1;
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
