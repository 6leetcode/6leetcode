#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------------------- solution begin -------------------------------
bool isPalindrome(int x) {
  int n, d, k = 0;

  if (x < 0) return false;

  n = x;
  while (n) {
    d = n % 10;
    if (k > (0x7fffffff - d) / 10) return false; // overflow
    k = k * 10 + d;
    n = n / 10;
  }

  return (k == x);
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int input = 121;
  printf("Input:  %d\n", input);
  printf("Output: %s\n", isPalindrome(input) ? "true" : "false");
  return EXIT_SUCCESS;
}
