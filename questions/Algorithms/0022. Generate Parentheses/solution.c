#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------------------- solution begin -------------------------------
static void backtrack(char **res, int *size, char *cur, int len, int open, int close, int n) {
  if (len == n * 2) {
    cur[len] = '\0';
    res[*size] = strdup(cur);
    (*size)++;
    return;
  }
  if (open < n) {
    cur[len] = '(';
    backtrack(res, size, cur, len + 1, open + 1, close, n);
  }
  if (close < open) {
    cur[len] = ')';
    backtrack(res, size, cur, len + 1, open, close + 1, n);
  }
}

char **generateParenthesis(int n, int *returnSize) {
  char **res = (char **)malloc(sizeof(char *) * 20000);
  char *cur = (char *)malloc(sizeof(char) * (n * 2 + 1));
  *returnSize = 0;
  backtrack(res, returnSize, cur, 0, 0, 0, n);
  free(cur);
  return res;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int input = 3;
  int size = 0;
  printf("Input:  %d\n", input);
  char **res = generateParenthesis(input, &size);
  printf("Output: [");
  for (int i = 0; i < size; i++) {
    printf("%s%s", i == 0 ? "" : ", ", res[i]);
    free(res[i]);
  }
  printf("]\n");
  free(res);
  return EXIT_SUCCESS;
}
