#include <stdio.h>
#include <stdlib.h>

// ------------------------------- solution begin -------------------------------
int maximum(int a, int b) {
  long long diff = (long long)a - b;
  int k = (int)(diff >> 63) & 1;
  return a * (1 - k) + b * k;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int a = 1, b = 2;
  printf("Input:  a = %d, b = %d\n", a, b);
  printf("Output: %d\n", maximum(a, b));
  return EXIT_SUCCESS;
}
