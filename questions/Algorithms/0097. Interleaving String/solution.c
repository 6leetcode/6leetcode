#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------------------- solution begin -------------------------------
bool isInterleave(char *s1, char *s2, char *s3) {
  int n = strlen(s1), m = strlen(s2), t = strlen(s3);

  int f[n + 1][m + 1];
  memset(f, 0, sizeof(f));

  if (n + m != t) {
    return false;
  }

  f[0][0] = true;
  for (int i = 0; i <= n; ++i) {
    for (int j = 0; j <= m; ++j) {
      int p = i + j - 1;
      if (i > 0) {
        f[i][j] |= (f[i - 1][j] && s1[i - 1] == s3[p]);
      }
      if (j > 0) {
        f[i][j] |= (f[i][j - 1] && s2[j - 1] == s3[p]);
      }
    }
  }
  return f[n][m];
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  char input1[] = "aabcc";
  char input2[] = "dbbca";
  char input3[] = "aadbbbaccc";
  printf("Input:  %s, %s, %s\n", input1, input2, input3);
  printf("Output: %s", isInterleave(input1, input2, input3) ? "true" : "false");
  return EXIT_SUCCESS;
}
