#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------------------- solution begin -------------------------------
const char *map[] = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
const int len[] = {3, 3, 3, 3, 3, 4, 3, 4};

void dfs(char *p, int d, char *buff, char **pp, int *n) {
  const char *m;

  if (!*p) {
    pp[*n] = strdup(buff);
    (*n)++;
    return;
  }

  m = map[(*p) - '2'];
  while (*m) {
    buff[d] = *m;
    dfs(p + 1, d + 1, buff, pp, n);
    m++;
  }
}

char **letterCombinations(char *digits, int *returnSize) {
  char **pp;
  char *buff;
  char *d;
  int n, l;

  *returnSize = 0;

  if (!digits || !*digits) {
    return NULL;
  }

  n = 1;
  d = digits;
  while (*d) {
    n = n * len[*d - '2'];
    d++;
  }

  *returnSize = n;
  l = d - digits;
  pp = malloc(n * sizeof(char *));
  buff = malloc(l + 1);
  buff[l] = 0;

  n = 0;
  dfs(digits, 0, buff, pp, &n);
  free(buff);
  return pp;
}

int main(int argc, char **argv) {
  char input[] = "23";
  int size = 0;
  printf("Input:  %s\n", input);
  char **letters = letterCombinations(input, &size);
  printf("Output: [%s", letters[0]);
  for (size_t i = 1; i < size; i++) {
    printf(" %s", letters[i]);
    free(letters[i]);
  }
  printf("]");
  free(letters);
  return 0;
}
