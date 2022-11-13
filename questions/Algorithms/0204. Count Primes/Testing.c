#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------------------- solution begin -------------------------------
int countPrimes(int n) {
  bool *isPrim = (bool *)malloc(sizeof(bool) * n);
  memset(isPrim, true, n);
  for (int i = 2; i * i < n; i++) {
    if (isPrim[i]) {
      for (int j = i * i; j < n; j += i)
        isPrim[j] = false;
    }
  }
  int count = 0;
  for (int i = 2; i < n; i++)
    if (isPrim[i]) count++;
  free(isPrim);
  return count;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int input = 10;
  printf("Input:  %d\n", input);
  printf("Output: %d\n", countPrimes(input));
  return EXIT_SUCCESS;
}
