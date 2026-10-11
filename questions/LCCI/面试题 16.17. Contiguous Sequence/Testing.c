#include <stdio.h>
#include <stdlib.h>

#include <array.h>

// ------------------------------- solution begin -------------------------------
int maxSubArray(int *nums, int numsSize) {
  int pre = 0, maxAns = nums[0];
  for (int i = 0; i < numsSize; i++) {
    pre = (pre + nums[i] > nums[i]) ? pre + nums[i] : nums[i];
    maxAns = pre > maxAns ? pre : maxAns;
  }
  return maxAns;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int nums[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
  sds input = array_show(nums, 9);
  printf("Input:  %s\n", input);
  sdsfree(input);
  printf("Output: %d\n", maxSubArray(nums, 9));
  return EXIT_SUCCESS;
}
