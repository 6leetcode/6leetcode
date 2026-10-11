#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------------------- solution begin -------------------------------
int minDistance(char *word1, char *word2) {
  int m = strlen(word1), n = strlen(word2);
  int *dp = (int *)malloc(sizeof(int) * (n + 1));
  for (int j = 0; j <= n; j++) dp[j] = j;
  for (int i = 1; i <= m; i++) {
    int prev = dp[0];
    dp[0] = i;
    for (int j = 1; j <= n; j++) {
      int tmp = dp[j];
      if (word1[i - 1] == word2[j - 1]) {
        dp[j] = prev;
      } else {
        int best = prev < dp[j] ? prev : dp[j];
        if (dp[j - 1] < best) best = dp[j - 1];
        dp[j] = best + 1;
      }
      prev = tmp;
    }
  }
  int res = dp[n];
  free(dp);
  return res;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  char word1[] = "horse", word2[] = "ros";
  printf("Input:  %s %s\n", word1, word2);
  printf("Output: %d\n", minDistance(word1, word2));
  return EXIT_SUCCESS;
}
