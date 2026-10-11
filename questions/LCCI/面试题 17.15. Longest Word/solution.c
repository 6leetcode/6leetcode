#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------------------- solution begin -------------------------------
static int cmpLen(const void *a, const void *b) {
  const char *x = *(const char **)a, *y = *(const char **)b;
  int lx = strlen(x), ly = strlen(y);
  if (lx != ly) return ly - lx;
  return strcmp(x, y);
}

static int canForm(char *w, char **words, int wordsSize) {
  int n = strlen(w);
  int *dp = (int *)calloc(n + 1, sizeof(int));
  dp[0] = 1;
  for (int i = 1; i <= n; i++) {
    for (int j = 0; j < i; j++) {
      if (!dp[j]) continue;
      if (i == n && j == 0) continue;
      int len = i - j;
      for (int k = 0; k < wordsSize; k++) {
        if ((int)strlen(words[k]) == len && strncmp(words[k], w + j, len) == 0) {
          dp[i] = 1;
          break;
        }
      }
      if (dp[i]) break;
    }
  }
  int res = dp[n];
  free(dp);
  return res;
}

char *longestWord(char **words, int wordsSize) {
  qsort(words, wordsSize, sizeof(char *), cmpLen);
  for (int i = 0; i < wordsSize; i++) {
    if (canForm(words[i], words, wordsSize)) return words[i];
  }
  return "";
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  char *words[] = {"cat", "banana", "dog", "nana", "walk", "walker", "dogwalker"};
  printf("Input:  [\"cat\",\"banana\",\"dog\",\"nana\",\"walk\",\"walker\",\"dogwalker\"]\n");
  char *res = longestWord(words, 7);
  printf("Output: \"%s\"\n", res);
  return EXIT_SUCCESS;
}
