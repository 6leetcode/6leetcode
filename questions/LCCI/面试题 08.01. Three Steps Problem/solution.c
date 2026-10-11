#include <stdio.h>
#include <stdlib.h>

// ------------------------------- solution begin -------------------------------
int waysToStep(int n) {
  const long long MOD = 1000000007;
  if (n == 1) return 1;
  if (n == 2) return 2;
  if (n == 3) return 4;
  long long a = 1, b = 2, c = 4;
  for (int i = 4; i <= n; i++) {
    long long d = (a + b + c) % MOD;
    a = b;
    b = c;
    c = d;
  }
  return (int)c;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int input = 5;
  printf("Input:  %d\n", input);
  printf("Output: %d\n", waysToStep(input));
  return EXIT_SUCCESS;
}
