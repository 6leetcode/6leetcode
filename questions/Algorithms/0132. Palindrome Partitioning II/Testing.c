#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------------------- solution begin -------------------------------
int minCut(char *s) {
  int n = (int)strlen(s);
  if (n <= 1) return 0;

  int **pal = (int **)malloc(sizeof(int *) * n);
  for (int i = 0; i < n; i++) {
    pal[i] = (int *)calloc(n, sizeof(int));
  }
  for (int i = n - 1; i >= 0; i--) {
    for (int j = i; j < n; j++) {
      if (s[i] == s[j] && (j - i < 2 || pal[i + 1][j - 1])) {
        pal[i][j] = 1;
      }
    }
  }

  int *dp = (int *)malloc(sizeof(int) * n);
  for (int i = 0; i < n; i++) {
    if (pal[0][i]) {
      dp[i] = 0;
      continue;
    }
    dp[i] = i;
    for (int j = 1; j <= i; j++) {
      if (pal[j][i] && dp[j - 1] + 1 < dp[i]) {
        dp[i] = dp[j - 1] + 1;
      }
    }
  }

  int res = dp[n - 1];
  free(dp);
  for (int i = 0; i < n; i++) free(pal[i]);
  free(pal);
  return res;
}
// ------------------------------- solution end ---------------------------------

static void run(char *s) {
  printf("Input:  %s\n", s);
  printf("Output: %d\n", minCut(s));
}

int main(int argc, char const *argv[]) {
  char t1[] = "aab";
  char t2[] = "a";
  char t3[] = "ab";

  run(t1);
  run(t2);
  run(t3);

  return EXIT_SUCCESS;
}
