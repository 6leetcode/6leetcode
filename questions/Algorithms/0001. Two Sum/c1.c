#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int *twoSum(int *nums, int numsSize, int target, int *returnSize) {
  *returnSize = 2;

  int *ans = (int *)malloc(sizeof(int) * *returnSize);
  for (int i = 0; i < numsSize; i++) {
    for (int j = i + 1; j < numsSize; j++) {
      if (nums[i] + nums[j] == target) {
        ans[0] = i;
        ans[1] = j;
        return ans;
      }
    }
  }
  return ans;
}

int main(int argc, char const *argv[]) {
  int numsSize = 3;

  int *nums = (int *)malloc(sizeof(int) * numsSize);

  nums[0] = 1;
  nums[1] = 2;
  nums[2] = 3;

  int target = 3;

  int returnSize;

  int *ans = twoSum(nums, numsSize, target, &returnSize);

  printf("Input:  [%d", nums[0]);
  for (int i = 1; i < numsSize; i++) {
    printf(", %d", nums[i]);
  }
  printf("] %d\n", target);

  printf("Output: [%d, %d]\n", ans[0], ans[1]);

  free(ans);
  free(nums);

  return EXIT_SUCCESS;
}
