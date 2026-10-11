#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------------------- solution begin -------------------------------
#define WORD_BREAK_MAX 4096

static char **g_res;
static int g_count;

static void wb_dfs(char *s, int n, char **dict, int dictSize, int pos, char *buf, int blen) {
  if (pos == n) {
    buf[blen] = '\0';
    g_res[g_count] = (char *)malloc(blen + 1);
    strcpy(g_res[g_count], buf);
    g_count++;
    return;
  }
  for (int i = 0; i < dictSize; i++) {
    int len = (int)strlen(dict[i]);
    if (pos + len <= n && strncmp(s + pos, dict[i], len) == 0) {
      int old = blen;
      if (blen > 0) {
        buf[blen++] = ' ';
      }
      memcpy(buf + blen, dict[i], len);
      blen += len;
      wb_dfs(s, n, dict, dictSize, pos + len, buf, blen);
      blen = old;
    }
  }
}

char **wordBreak(char *s, char **wordDict, int wordDictSize, int *returnSize) {
  int n = (int)strlen(s);
  g_res = (char **)malloc(sizeof(char *) * WORD_BREAK_MAX);
  g_count = 0;
  char *buf = (char *)malloc(n * 2 + 2);
  wb_dfs(s, n, wordDict, wordDictSize, 0, buf, 0);
  free(buf);
  *returnSize = g_count;
  return g_res;
}
// ------------------------------- solution end ---------------------------------

static void run(char *s, char **dict, int size) {
  printf("Input:  s = \"%s\", wordDict = [", s);
  for (int i = 0; i < size; i++) {
    printf("%s\"%s\"", i == 0 ? "" : ", ", dict[i]);
  }
  printf("]\n");

  int retSize = 0;
  char **res = wordBreak(s, dict, size, &retSize);

  printf("Output: [");
  for (int i = 0; i < retSize; i++) {
    printf("%s\"%s\"", i == 0 ? "" : ", ", res[i]);
    free(res[i]);
  }
  printf("]\n");
  free(res);
}

int main(int argc, char const *argv[]) {
  char *dict1[] = {"cat", "cats", "and", "sand", "dog"};
  run("catsanddog", dict1, 5);

  char *dict2[] = {"apple", "pen", "applepen", "pine", "pineapple"};
  run("pineapplepenapple", dict2, 5);

  char *dict3[] = {"cats", "dog", "sand", "and", "cat"};
  run("catsandog", dict3, 5);

  return EXIT_SUCCESS;
}
