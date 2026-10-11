#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include <array.h>

// ------------------------------- solution begin -------------------------------
bool canJump(int *nums, int numsSize) {
  int rightmost = 0;
  for (int i = 0; i < numsSize; i++) {
    if (i <= rightmost) {
      if (i + nums[i] > rightmost) {
        rightmost = i + nums[i];
      }
      if (rightmost >= numsSize - 1) {
        return true;
      }
    }
  }
  return false;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int nums[] = {3, 2, 1, 0, 4};
  int size = sizeof(nums) / sizeof(int);
  sds input = array_show(nums, size);
  printf("Input:  %s\n", input);
  sdsfree(input);
  printf("Output: %s\n", canJump(nums, size) ? "true" : "false");
  return EXIT_SUCCESS;
}
