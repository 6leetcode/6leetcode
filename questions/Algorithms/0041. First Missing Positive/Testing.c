#include <stdio.h>
#include <stdlib.h>

#include <array.h>

// ------------------------------- solution begin -------------------------------
int firstMissingPositive(int *nums, int numsSize) {
  for (int i = 0; i < numsSize; i++) {
    while (nums[i] > 0 && nums[i] <= numsSize && nums[nums[i] - 1] != nums[i]) {
      int t = nums[nums[i] - 1];
      nums[nums[i] - 1] = nums[i];
      nums[i] = t;
    }
  }
  for (int i = 0; i < numsSize; i++) {
    if (nums[i] != i + 1) {
      return i + 1;
    }
  }
  return numsSize + 1;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int nums[] = {3, 4, -1, 1};
  int size = sizeof(nums) / sizeof(int);
  sds input = array_show(nums, size);
  printf("Input:  %s\n", input);
  sdsfree(input);
  printf("Output: %d\n", firstMissingPositive(nums, size));
  return EXIT_SUCCESS;
}
