#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------------------- solution begin -------------------------------
int *findSubstring(char *s, char **words, int wordsSize, int *returnSize) {
  int n = strlen(s);
  int w = strlen(words[0]);
  int total = w * wordsSize;
  int *res = (int *)malloc(sizeof(int) * (n + 1));
  *returnSize = 0;
  if (n < total) {
    return res;
  }
  for (int i = 0; i + total <= n; i++) {
    int used[wordsSize];
    for (int t = 0; t < wordsSize; t++) {
      used[t] = 0;
    }
    int ok = 1;
    for (int j = 0; j < wordsSize && ok; j++) {
      int found = 0;
      for (int t = 0; t < wordsSize; t++) {
        if (!used[t] && strncmp(s + i + j * w, words[t], w) == 0) {
          used[t] = 1;
          found = 1;
          break;
        }
      }
      ok = found;
    }
    if (ok) {
      res[(*returnSize)++] = i;
    }
  }
  return res;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  char s[] = "barfoothefoobarman";
  char *words[] = {"foo", "bar"};
  int wordsSize = 2;
  printf("Input:  %s [foo, bar]\n", s);

  int size = 0;
  int *res = findSubstring(s, words, wordsSize, &size);
  printf("Output: [");
  for (int i = 0; i < size; i++) {
    printf("%s%d", i == 0 ? "" : ", ", res[i]);
  }
  printf("]\n");
  free(res);
  return EXIT_SUCCESS;
}
