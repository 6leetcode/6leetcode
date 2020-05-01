#include <stdio.h>
#include <stdlib.h>

int climbStairs(int n) {
  int prev = 0;
  int cur  = 1;
  for (int i = 1; i <= n; ++i) {
    int tmp = cur;
    cur += prev;
    prev = tmp;
  }
  return cur;
}

int main(int argc, char const *argv[]) {
  int input = 10;
  printf("Input:  %d\n", input);
  printf("Output: %d\n", climbStairs(input));
  return EXIT_SUCCESS;
}
