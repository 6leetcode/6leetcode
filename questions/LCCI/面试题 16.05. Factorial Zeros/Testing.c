#include <stdio.h>
#include <stdlib.h>

// ------------------------------- solution begin -------------------------------
int trailingZeroes(int n) {
  int count = 0;
  while (n >= 5) {
    n /= 5;
    count += n;
  }
  return count;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int input = 5;
  printf("Input:  %d\n", input);
  printf("Output: %d\n", trailingZeroes(input));
  return EXIT_SUCCESS;
}
