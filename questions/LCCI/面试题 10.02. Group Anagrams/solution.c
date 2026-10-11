#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------------------- solution begin -------------------------------
static int cmpChar(const void *a, const void *b) {
  return *(char *)a - *(char *)b;
}

char ***groupAnagrams(char **strs, int strsSize, int *returnSize, int **returnColumnSizes) {
  char ***res = (char ***)malloc(sizeof(char **) * strsSize);
  *returnColumnSizes = (int *)malloc(sizeof(int) * strsSize);
  int *used = (int *)calloc(strsSize, sizeof(int));
  *returnSize = 0;
  for (int i = 0; i < strsSize; i++) {
    if (used[i]) continue;
    char key[256];
    strcpy(key, strs[i]);
    qsort(key, strlen(key), 1, cmpChar);
    res[*returnSize] = (char **)malloc(sizeof(char *) * strsSize);
    int count = 0;
    for (int j = i; j < strsSize; j++) {
      if (used[j]) continue;
      char other[256];
      strcpy(other, strs[j]);
      qsort(other, strlen(other), 1, cmpChar);
      if (strcmp(key, other) == 0) {
        res[*returnSize][count++] = strs[j];
        used[j] = 1;
      }
    }
    (*returnColumnSizes)[*returnSize] = count;
    (*returnSize)++;
  }
  free(used);
  return res;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  char *strs[] = {"eat", "tea", "tan", "ate", "nat", "bat"};
  printf("Input:  [\"eat\", \"tea\", \"tan\", \"ate\", \"nat\", \"bat\"]\n");
  int size = 0;
  int *cols = NULL;
  char ***res = groupAnagrams(strs, 6, &size, &cols);
  printf("Output: [");
  for (int i = 0; i < size; i++) {
    printf("%s[", i == 0 ? "" : ", ");
    for (int j = 0; j < cols[i]; j++) printf("%s\"%s\"", j == 0 ? "" : ", ", res[i][j]);
    printf("]");
    free(res[i]);
  }
  printf("]\n");
  free(res);
  free(cols);
  return EXIT_SUCCESS;
}
