#include <stdio.h>
#include <stdlib.h>

// ------------------------------- solution begin -------------------------------
int numberOf2sInRange(int n) {
  long long count = 0;
  for (long long factor = 1; factor <= n; factor *= 10) {
    long long cur = (n / factor) % 10;
    long long higher = n / (factor * 10);
    long long lower = n % factor;
    if (cur < 2) {
      count += higher * factor;
    } else if (cur == 2) {
      count += higher * factor + lower + 1;
    } else {
      count += (higher + 1) * factor;
    }
  }
  return (int)count;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int input = 25;
  printf("Input:  %d\n", input);
  printf("Output: %d\n", numberOf2sInRange(input));
  return EXIT_SUCCESS;
}
