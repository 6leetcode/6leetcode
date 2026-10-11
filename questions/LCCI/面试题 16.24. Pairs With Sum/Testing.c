#include <stdio.h>
#include <stdlib.h>

#include <matrix.h>

// ------------------------------- solution begin -------------------------------
static int cmp(const void *a, const void *b) {
  return *(int *)a - *(int *)b;
}

int **pairSums(int *nums, int numsSize, int target, int *returnSize, int **returnColumnSizes) {
  qsort(nums, numsSize, sizeof(int), cmp);
  int **res = (int **)malloc(sizeof(int *) * (numsSize / 2 + 1));
  *returnColumnSizes = (int *)malloc(sizeof(int) * (numsSize / 2 + 1));
  *returnSize = 0;
  int i = 0, j = numsSize - 1;
  while (i < j) {
    int sum = nums[i] + nums[j];
    if (sum < target) {
      i++;
    } else if (sum > target) {
      j--;
    } else {
      res[*returnSize] = (int *)malloc(sizeof(int) * 2);
      res[*returnSize][0] = nums[i];
      res[*returnSize][1] = nums[j];
      (*returnColumnSizes)[*returnSize] = 2;
      (*returnSize)++;
      i++;
      j--;
    }
  }
  return res;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int nums[] = {5, 6, 5, 6};
  int target = 11;
  printf("Input:  nums = [5,6,5,6], target = 11\n");
  int size = 0;
  int *cols = NULL;
  int **res = pairSums(nums, 4, target, &size, &cols);
  sds out = matrix_show(res, size, cols);
  printf("Output: %s\n", out);
  sdsfree(out);
  for (int i = 0; i < size; i++) free(res[i]);
  free(res);
  free(cols);
  return EXIT_SUCCESS;
}
