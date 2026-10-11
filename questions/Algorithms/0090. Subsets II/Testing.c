#include <stdio.h>
#include <stdlib.h>

#include <matrix.h>

// ------------------------------- solution begin -------------------------------
static int cmp(const void *a, const void *b) {
  return *(int *)a - *(int *)b;
}

static void dfs(int *nums, int n, int start, int *cur, int depth, int **res, int *size, int **cols) {
  res[*size] = (int *)malloc(sizeof(int) * depth);
  for (int i = 0; i < depth; i++) res[*size][i] = cur[i];
  (*cols)[*size] = depth;
  (*size)++;
  for (int i = start; i < n; i++) {
    if (i > start && nums[i] == nums[i - 1]) continue;
    cur[depth] = nums[i];
    dfs(nums, n, i + 1, cur, depth + 1, res, size, cols);
  }
}

int **subsetsWithDup(int *nums, int numsSize, int *returnSize, int **returnColumnSizes) {
  qsort(nums, numsSize, sizeof(int), cmp);
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
  int nums[] = {1, 2, 2};
  int size = sizeof(nums) / sizeof(int);
  printf("Input:  [1, 2, 2]\n");
  int returnSize = 0;
  int *cols = NULL;
  int **res = subsetsWithDup(nums, size, &returnSize, &cols);
  sds output = matrix_show(res, returnSize, cols);
  printf("Output: %s\n", output);
  sdsfree(output);
  for (int i = 0; i < returnSize; i++) free(res[i]);
  free(res);
  free(cols);
  return EXIT_SUCCESS;
}
