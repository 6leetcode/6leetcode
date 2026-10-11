#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------------------- solution begin -------------------------------
int numDistinct(char *s, char *t) {
  int n = (int)strlen(s);
  int m = (int)strlen(t);

  unsigned long long *dp = (unsigned long long *)calloc(m + 1, sizeof(unsigned long long));
  dp[0] = 1;

  for (int i = 0; i < n; i++) {
    for (int j = m; j >= 1; j--) {
      if (s[i] == t[j - 1]) {
        dp[j] += dp[j - 1];
      }
    }
  }

  int ans = (int)dp[m];
  free(dp);
  return ans;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  struct {
    char *s;
    char *t;
  } cases[] = {
      {"rabbbit", "rabbit"},
      {"babgbag", "bag"},
      {"ddd", "dd"},
  };

  int count = sizeof(cases) / sizeof(cases[0]);
  for (int i = 0; i < count; i++) {
    printf("Input:  \"%s\", \"%s\"\n", cases[i].s, cases[i].t);
    printf("Output: %d\n", numDistinct(cases[i].s, cases[i].t));
  }

  return EXIT_SUCCESS;
}
