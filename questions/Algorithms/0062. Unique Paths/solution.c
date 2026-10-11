#include <stdio.h>
#include <stdlib.h>

// ------------------------------- solution begin -------------------------------
int uniquePaths(int m, int n) {
  long long dp[100];
  for (int j = 0; j < n; j++) dp[j] = 1;
  for (int i = 1; i < m; i++) {
    for (int j = 1; j < n; j++) {
      dp[j] += dp[j - 1];
    }
  }
  return (int)dp[n - 1];
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int m = 3, n = 7;
  printf("Input:  %d %d\n", m, n);
  printf("Output: %d\n", uniquePaths(m, n));
  return EXIT_SUCCESS;
}
