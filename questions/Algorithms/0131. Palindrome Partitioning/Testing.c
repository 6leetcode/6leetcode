#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------------------- solution begin -------------------------------
static int isPalindrome(const char *s, int l, int r) {
  while (l < r) {
    if (s[l] != s[r]) return 0;
    l++;
    r--;
  }
  return 1;
}

static void backtrack(const char *s, int n, int start, char **path, int pathLen,
                      char ****res, int *size, int *cap, int **colSizes) {
  if (start == n) {
    if (*size == *cap) {
      *cap *= 2;
      *res = (char ***)realloc(*res, sizeof(char **) * *cap);
      *colSizes = (int *)realloc(*colSizes, sizeof(int) * *cap);
    }
    char **part = (char **)malloc(sizeof(char *) * (pathLen > 0 ? pathLen : 1));
    for (int i = 0; i < pathLen; i++) {
      int len = (int)strlen(path[i]);
      part[i] = (char *)malloc(len + 1);
      memcpy(part[i], path[i], len + 1);
    }
    (*res)[*size] = part;
    (*colSizes)[*size] = pathLen;
    (*size)++;
    return;
  }

  for (int end = start; end < n; end++) {
    if (!isPalindrome(s, start, end)) continue;
    int len = end - start + 1;
    char *sub = (char *)malloc(len + 1);
    memcpy(sub, s + start, len);
    sub[len] = '\0';
    path[pathLen] = sub;
    backtrack(s, n, end + 1, path, pathLen + 1, res, size, cap, colSizes);
    free(sub);
  }
}

char ***partition(char *s, int *returnSize, int **returnColumnSizes) {
  int n = (int)strlen(s);
  int cap = 16;
  char ***res = (char ***)malloc(sizeof(char **) * cap);
  *returnColumnSizes = (int *)malloc(sizeof(int) * cap);
  *returnSize = 0;
  char **path = (char **)malloc(sizeof(char *) * (n > 0 ? n : 1));
  backtrack(s, n, 0, path, 0, &res, returnSize, &cap, returnColumnSizes);
  free(path);
  return res;
}
// ------------------------------- solution end ---------------------------------

static void run(char *s) {
  int returnSize = 0;
  int *colSizes = NULL;
  char ***res = partition(s, &returnSize, &colSizes);

  printf("Input:  %s\n", s);
  printf("Output: [");
  for (int i = 0; i < returnSize; i++) {
    printf("%s[", i == 0 ? "" : ", ");
    for (int j = 0; j < colSizes[i]; j++) {
      printf("%s\"%s\"", j == 0 ? "" : ", ", res[i][j]);
      free(res[i][j]);
    }
    printf("]");
    free(res[i]);
  }
  printf("]\n");

  free(res);
  free(colSizes);
}

int main(int argc, char const *argv[]) {
  char t1[] = "aab";
  char t2[] = "a";

  run(t1);
  run(t2);

  return EXIT_SUCCESS;
}
