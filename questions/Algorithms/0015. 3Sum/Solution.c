#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#include <array.h>
#include <matrix.h>

// ------------------------------- solution begin -------------------------------
int cmpfunc(const void *a, const void *b) {
  return *(int *)a - *(int *)b;
}

int **threeSum(int *nums, int numsSize, int *returnSize, int **returnColumnSizes) {
  qsort(nums, numsSize, sizeof(int), cmpfunc);
  int **ans = NULL;
  *returnSize = 0;
  *returnColumnSizes = NULL;

  int virtual_size = 165;

  ans = (int **)malloc(sizeof(int *) * virtual_size);
  *returnColumnSizes = (int *)malloc(sizeof(int) * virtual_size);

  for (uint16_t i = 0; i < numsSize; i++) {
    if (nums[i] > 0) {
      return ans;
    }
    if (i > 0 && nums[i] == nums[i - 1]) {
      continue;
    }
    int left = i + 1;
    int right = numsSize - 1;
    while (left < right) {
      int temp = nums[i] + nums[left] + nums[right];
      if (temp > 0) {
        right--;
      } else if (temp < 0) {
        left++;
      } else {
        if (*returnSize >= virtual_size) {
          virtual_size *= 2;
          ans = (int **)realloc(ans, sizeof(int *) * virtual_size);
          *returnColumnSizes = (int *)realloc(*returnColumnSizes, sizeof(int) * virtual_size);
        }
        *(ans + *returnSize) = (int *)malloc(sizeof(int) * 3);
        *(*returnColumnSizes + *returnSize) = 3;
        ans[*returnSize][0] = nums[i];
        ans[*returnSize][1] = nums[left];
        ans[*returnSize][2] = nums[right];
        while (left < right && nums[left] == nums[left + 1]) {
          left++;
        }
        while (left < right && nums[right] == nums[right - 1]) {
          right--;
        }
        left++;
        right--;
        (*returnSize)++;
      }
    }
  }
  ans = (int **)realloc(ans, sizeof(int *) * *returnSize);
  *returnColumnSizes = (int *)realloc(*returnColumnSizes, sizeof(int) * *returnSize);
  return ans;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int input1[] = {4, -10, -11, -12, -8, -12, -14, -11, -6, 2, -4, 2, 3, 12, -3, -12, -14, -12, -8, -9, -6, -3, 10, 2, 14, 10, 7, -7, -9, 0, -9, 10, -2, -5, 14, 5, -9, 7, 9, 0, -14, 12, 10, 4, 9, -8, 8, 11, -5, -15, -13, -3, -11, 4, 14, 11, -1, -2, -11, 5, 14, -4, -8, -3, 6, -9, 9, 12, 6, 3, -10, 7, 0, -15, -3, -13, -8, 12, 13, -5, 12, -15, 7, 8, -4, -2, 4, 2, 3, 9, -8, 2, -10, -1, 6, 3, -2, 0, -7, 11, -12, -2, 3, -4, -2, 7, -2, -3, 4, -12, -1, 1, 10, 13, -5, -9, -12, 6, 8, 7, 0, 7, -6, 5, 13, 8, -14, -12};
  int input2 = sizeof(input1) / sizeof(int);
  sds input3 = array_show(input1, input2);
  printf("Input:  %s\n", input3);
  sdsfree(input3);

  int output1 = 1;
  int *output2;
  int **output3 = threeSum(input1, input2, &output1, &output2);
  sds output4 = matrix_show(output3, output1, output2);
  printf("Output: %s\n", output4);
  sdsfree(output4);
  free(output2);
  for (int i = 0; i < output1; i++) {
    free(output3[i]);
  }
  free(output3);
  return EXIT_SUCCESS;
}
