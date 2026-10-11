#include <stdio.h>
#include <stdlib.h>

#include <matrix.h>

// ------------------------------- solution begin -------------------------------
static void dfs(int n, int k, int start, int *cur, int depth, int **res, int *size, int **cols) {
  if (depth == k) {
    res[*size] = (int *)malloc(sizeof(int) * k);
    for (int i = 0; i < k; i++) res[*size][i] = cur[i];
    (*cols)[*size] = k;
    (*size)++;
    return;
  }
  for (int i = start; i <= n; i++) {
    cur[depth] = i;
    dfs(n, k, i + 1, cur, depth + 1, res, size, cols);
  }
}

int **combine(int n, int k, int *returnSize, int **returnColumnSizes) {
  int **res = (int **)malloc(sizeof(int *) * 100000);
  *returnColumnSizes = (int *)malloc(sizeof(int) * 100000);
  int *cur = (int *)malloc(sizeof(int) * k);
  *returnSize = 0;
  dfs(n, k, 1, cur, 0, res, returnSize, returnColumnSizes);
  free(cur);
  return res;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int n = 4, k = 2;
  printf("Input:  %d %d\n", n, k);
  int returnSize = 0;
  int *cols = NULL;
  int **res = combine(n, k, &returnSize, &cols);
  sds output = matrix_show(res, returnSize, cols);
  printf("Output: %s\n", output);
  sdsfree(output);
  for (int i = 0; i < returnSize; i++) free(res[i]);
  free(res);
  free(cols);
  return EXIT_SUCCESS;
}
