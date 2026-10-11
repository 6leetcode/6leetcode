#define _GNU_SOURCE
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------------------- solution begin -------------------------------
static void backtrack(char *s, int n, bool *used, char *cur, int depth, char **res, int *size) {
  if (depth == n) {
    cur[n] = '\0';
    res[*size] = strdup(cur);
    (*size)++;
    return;
  }
  for (int i = 0; i < n; i++) {
    if (used[i]) continue;
    used[i] = true;
    cur[depth] = s[i];
    backtrack(s, n, used, cur, depth + 1, res, size);
    used[i] = false;
  }
}

char **permutation(char *S, int *returnSize) {
  int n = strlen(S);
  char **res = (char **)malloc(sizeof(char *) * 100000);
  bool *used = (bool *)calloc(n, sizeof(bool));
  char *cur = (char *)malloc(n + 1);
  *returnSize = 0;
  backtrack(S, n, used, cur, 0, res, returnSize);
  free(used);
  free(cur);
  return res;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  char S[] = "qwe";
  printf("Input:  %s\n", S);
  int size = 0;
  char **res = permutation(S, &size);
  printf("Output: [");
  for (int i = 0; i < size; i++) {
    printf("%s\"%s\"", i == 0 ? "" : ", ", res[i]);
    free(res[i]);
  }
  printf("]\n");
  free(res);
  return EXIT_SUCCESS;
}
