#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <array.h>
#include <matrix.h>

// ------------------------------- solution begin -------------------------------
static int compare(const void *a, const void *b) {
  return *(int *)a - *(int *)b;
}

static void k_sum(int *nums, int low, int high, int target, int total, int k,
                  int *stack, int len, int **results, int *count, int *col_sizes) {
  int i;
  if (k == 2) {
    while (low < high) {
      int sum = nums[low] + nums[high];
      if (sum < target) {
        low++;
      } else if (sum > target) {
        high--;
      } else {
        stack[len++] = nums[low];
        stack[len++] = nums[high];
        results[*count] = malloc(total * sizeof(int));
        memcpy(results[*count], stack, total * sizeof(int));
        col_sizes[*count] = total;
        (*count)++;
        len -= 2;
        while (++low < high && nums[low] == nums[low - 1]) {}
        while (--high > low && nums[high] == nums[high + 1]) {}
      }
    }
  } else {
    for (i = low; i <= high - k + 1; i++) {
      if (i > low && nums[i] == nums[i - 1]) continue;
      stack[len] = nums[i];
      k_sum(nums, i + 1, high, target - nums[i], 4, k - 1, stack, len + 1, results, count, col_sizes);
    }
  }
}

int **fourSum(int *nums, int numsSize, int target, int *returnSize, int **returnColumnSizes) {
  *returnSize = 0;
  int capacity = 50000;
  int **results = malloc(capacity * sizeof(int *));
  *returnColumnSizes = malloc(capacity * sizeof(int));

  if (numsSize >= 4) {
    qsort(nums, numsSize, sizeof(*nums), compare);
    int *stack = malloc(4 * sizeof(int));
    k_sum(nums, 0, numsSize - 1, target, 4, 4, stack, 0, results, returnSize, *returnColumnSizes);
  }
  return results;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int input1[] = {1, 0, -1, 0, -2, 2};
  int input2 = 0;

  printf("Input:  %s %d\n", array_show(input1, sizeof(input1) / sizeof(int)), input2);

  int output2;
  int *output3;
  int **output1 = fourSum(input1, sizeof(input1) / sizeof(int), input2, &output2, &output3);

  printf("Output: %s\n", matrix_show(output1, output2, output3));

  for (int i = 0; i < output2; i++) {
    free(output1[i]);
  }
  free(output1);
  free(output3);

  return 0;
}
