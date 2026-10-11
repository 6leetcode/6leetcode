#include <stdio.h>
#include <stdlib.h>

// ------------------------------- solution begin -------------------------------
char *getPermutation(int n, int k) {
  int fact[10];
  fact[0] = 1;
  for (int i = 1; i <= n; i++) fact[i] = fact[i - 1] * i;

  int nums[10];
  for (int i = 0; i < n; i++) nums[i] = i + 1;

  char *res = (char *)malloc(n + 1);
  k--;
  int len = n;
  for (int i = 0; i < n; i++) {
    int idx = k / fact[len - 1];
    res[i] = '0' + nums[idx];
    for (int j = idx; j < len - 1; j++) nums[j] = nums[j + 1];
    k %= fact[len - 1];
    len--;
  }
  res[n] = '\0';
  return res;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int n = 3, k = 3;
  printf("Input:  %d %d\n", n, k);
  char *res = getPermutation(n, k);
  printf("Output: %s\n", res);
  free(res);
  return EXIT_SUCCESS;
}
