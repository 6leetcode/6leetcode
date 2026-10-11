#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------------------- solution begin -------------------------------
char *compressString(char *S) {
  int n = strlen(S);
  char *res = (char *)malloc(n * 2 + 16);
  int p = 0;
  for (int i = 0; i < n;) {
    int j = i;
    while (j < n && S[j] == S[i]) j++;
    p += sprintf(res + p, "%c%d", S[i], j - i);
    i = j;
  }
  res[p] = '\0';
  if (p >= n) {
    free(res);
    char *orig = (char *)malloc(n + 1);
    memcpy(orig, S, n + 1);
    return orig;
  }
  return res;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  char input[] = "aabcccccaaa";
  printf("Input:  %s\n", input);
  char *res = compressString(input);
  printf("Output: %s\n", res);
  free(res);
  return EXIT_SUCCESS;
}
