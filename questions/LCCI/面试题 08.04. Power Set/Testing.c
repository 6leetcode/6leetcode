#include <stdio.h>
#include <stdlib.h>

#include <matrix.h>

// ------------------------------- solution begin -------------------------------
static void dfs(int *nums, int n, int start, int *cur, int depth, int **res, int *size, int **cols) {
  res[*size] = (int *)malloc(sizeof(int) * depth);
  for (int i = 0; i < depth; i++) res[*size][i] = cur[i];
  (*cols)[*size] = depth;
  (*size)++;
  for (int i = start; i < n; i++) {
    cur[depth] = nums[i];
    dfs(nums, n, i + 1, cur, depth + 1, res, size, cols);
  }
}

int **subsets(int *nums, int numsSize, int *returnSize, int **returnColumnSizes) {
  int **res = (int **)malloc(sizeof(int *) * 100000);
  *returnColumnSizes = (int *)malloc(sizeof(int) * 100000);
  int *cur = (int *)malloc(sizeof(int) * (numsSize + 1));
  *returnSize = 0;
  dfs(nums, numsSize, 0, cur, 0, res, returnSize, returnColumnSizes);
  free(cur);
  return res;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int nums[] = {1, 2, 3};
  printf("Input:  [1, 2, 3]\n");
  int size = 0;
  int *cols = NULL;
  int **res = subsets(nums, 3, &size, &cols);
  sds out = matrix_show(res, size, cols);
  printf("Output: %s\n", out);
  sdsfree(out);
  for (int i = 0; i < size; i++) free(res[i]);
  free(res);
  free(cols);
  return EXIT_SUCCESS;
}
