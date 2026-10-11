#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------------------- solution begin -------------------------------
bool wordBreak(char *s, char **wordDict, int wordDictSize) {
  int n = (int)strlen(s);
  bool *dp = (bool *)calloc(n + 1, sizeof(bool));
  dp[0] = true;
  for (int i = 1; i <= n; i++) {
    for (int j = 0; j < wordDictSize; j++) {
      int len = (int)strlen(wordDict[j]);
      if (i >= len && dp[i - len] && strncmp(s + i - len, wordDict[j], len) == 0) {
        dp[i] = true;
        break;
      }
    }
  }
  bool res = dp[n];
  free(dp);
  return res;
}
// ------------------------------- solution end ---------------------------------

static void run(char *s, char **dict, int size) {
  printf("Input:  s = \"%s\", wordDict = [", s);
  for (int i = 0; i < size; i++) {
    printf("%s\"%s\"", i == 0 ? "" : ", ", dict[i]);
  }
  printf("]\n");
  printf("Output: %s\n", wordBreak(s, dict, size) ? "true" : "false");
}

int main(int argc, char const *argv[]) {
  char *dict1[] = {"leet", "code"};
  run("leetcode", dict1, 2);

  char *dict2[] = {"apple", "pen"};
  run("applepenapple", dict2, 2);

  char *dict3[] = {"cats", "dog", "sand", "and", "cat"};
  run("catsandog", dict3, 5);

  return EXIT_SUCCESS;
}
