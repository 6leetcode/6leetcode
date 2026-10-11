#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------------------- solution begin -------------------------------
char **generatePossibleNextMoves(char *s, int *returnSize) {
  int n = strlen(s);
  char **res = (char **)malloc(sizeof(char *) * (n > 0 ? n : 1));
  *returnSize = 0;
  for (int i = 0; i < n - 1; i++) {
    if (s[i] == '+' && s[i + 1] == '+') {
      char *tmp = strdup(s);
      tmp[i] = '-';
      tmp[i + 1] = '-';
      res[(*returnSize)++] = tmp;
    }
  }
  return res;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  char input[] = "++++";
  printf("Input:  %s\n", input);
  int size = 0;
  char **res = generatePossibleNextMoves(input, &size);
  printf("Output: [");
  for (int i = 0; i < size; i++) {
    printf("%s%s", i == 0 ? "" : ", ", res[i]);
    free(res[i]);
  }
  printf("]\n");
  free(res);
  return EXIT_SUCCESS;
}
