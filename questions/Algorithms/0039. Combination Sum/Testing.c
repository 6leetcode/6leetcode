#include <stdio.h>
#include <stdlib.h>

#include <matrix.h>

// ------------------------------- solution begin -------------------------------
static void dfs(int *c, int n, int target, int start, int *cur, int depth, int **res, int *size, int **cols) {
  if (target == 0) {
    res[*size] = (int *)malloc(sizeof(int) * depth);
    for (int i = 0; i < depth; i++) {
      res[*size][i] = cur[i];
    }
    (*cols)[*size] = depth;
    (*size)++;
    return;
  }
  for (int i = start; i < n; i++) {
    if (c[i] > target) {
      continue;
    }
    cur[depth] = c[i];
    dfs(c, n, target - c[i], i, cur, depth + 1, res, size, cols);
  }
}

int **combinationSum(int *candidates, int candidatesSize, int target, int *returnSize, int **returnColumnSizes) {
  int **res = (int **)malloc(sizeof(int *) * 1000);
  *returnColumnSizes = (int *)malloc(sizeof(int) * 1000);
  int *cur = (int *)malloc(sizeof(int) * 1000);
  *returnSize = 0;
  dfs(candidates, candidatesSize, target, 0, cur, 0, res, returnSize, returnColumnSizes);
  free(cur);
  return res;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int candidates[] = {2, 3, 6, 7};
  int size = sizeof(candidates) / sizeof(int);
  int target = 7;
  printf("Input:  [2, 3, 6, 7] %d\n", target);

  int returnSize = 0;
  int *cols = NULL;
  int **res = combinationSum(candidates, size, target, &returnSize, &cols);
  sds output = matrix_show(res, returnSize, cols);
  printf("Output: %s\n", output);
  sdsfree(output);
  for (int i = 0; i < returnSize; i++) {
    free(res[i]);
  }
  free(res);
  free(cols);
  return EXIT_SUCCESS;
}
