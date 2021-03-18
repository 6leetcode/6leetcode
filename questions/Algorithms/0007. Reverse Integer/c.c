#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

// ------------------------------- solution begin -------------------------------
int reverse(int x) {
  int y = 0;
  int n;
  while (x != 0) {
    n = x % 10;
    if (y > INT_MAX / 10 || y < INT_MIN / 10) {
      return 0;
    }
    y = y * 10 + n;
    x /= 10;
  }
  return y;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int input = 12345;
  printf("Input:  %d\n", input);
  printf("Output: %d\n", reverse(input));
  return EXIT_SUCCESS;
}
