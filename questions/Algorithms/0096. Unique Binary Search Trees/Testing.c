#include <stdio.h>
#include <stdlib.h>

// ------------------------------- solution begin -------------------------------
int numTrees(int n) {
  long long *dp = (long long *)calloc(n + 1, sizeof(long long));
  dp[0] = 1;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      dp[i] += dp[j - 1] * dp[i - j];
    }
  }
  int res = (int)dp[n];
  free(dp);
  return res;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int input = 3;
  printf("Input:  %d\n", input);
  printf("Output: %d\n", numTrees(input));
  return EXIT_SUCCESS;
}
