#include <stdio.h>
#include <stdlib.h>

#include <matrix.h>

// ------------------------------- solution begin -------------------------------
static int cmp(const void *a, const void *b) {
  return *(int *)a - *(int *)b;
}

static void dfs(int *nums, int n, int *used, int *cur, int depth, int **res, int *size, int **cols) {
  if (depth == n) {
    res[*size] = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
      res[*size][i] = cur[i];
    }
    (*cols)[*size] = n;
    (*size)++;
    return;
  }
  for (int i = 0; i < n; i++) {
    if (used[i]) {
      continue;
    }
    if (i > 0 && nums[i] == nums[i - 1] && !used[i - 1]) {
      continue;
    }
    used[i] = 1;
    cur[depth] = nums[i];
    dfs(nums, n, used, cur, depth + 1, res, size, cols);
    used[i] = 0;
  }
}

int **permuteUnique(int *nums, int numsSize, int *returnSize, int **returnColumnSizes) {
  qsort(nums, numsSize, sizeof(int), cmp);
  int **res = (int **)malloc(sizeof(int *) * 1000);
  *returnColumnSizes = (int *)malloc(sizeof(int) * 1000);
  int *cur = (int *)malloc(sizeof(int) * numsSize);
  int *used = (int *)calloc(numsSize, sizeof(int));
  *returnSize = 0;
  dfs(nums, numsSize, used, cur, 0, res, returnSize, returnColumnSizes);
  free(cur);
  free(used);
  return res;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int nums[] = {1, 1, 2};
  int size = sizeof(nums) / sizeof(int);
  printf("Input:  [1, 1, 2]\n");

  int returnSize = 0;
  int *cols = NULL;
  int **res = permuteUnique(nums, size, &returnSize, &cols);
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
