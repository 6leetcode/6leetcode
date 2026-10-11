#include <stdio.h>
#include <stdlib.h>

// ------------------------------- solution begin -------------------------------
int waysToChange(int n) {
  const long long MOD = 1000000007;
  int coins[] = {1, 5, 10, 25};
  long long *dp = (long long *)calloc(n + 1, sizeof(long long));
  dp[0] = 1;
  for (int k = 0; k < 4; k++) {
    for (int i = coins[k]; i <= n; i++) {
      dp[i] = (dp[i] + dp[i - coins[k]]) % MOD;
    }
  }
  int res = (int)dp[n];
  free(dp);
  return res;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int input = 10;
  printf("Input:  %d\n", input);
  printf("Output: %d\n", waysToChange(input));
  return EXIT_SUCCESS;
}
