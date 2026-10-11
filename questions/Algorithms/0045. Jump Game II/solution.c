#include <stdio.h>
#include <stdlib.h>

#include <array.h>

// ------------------------------- solution begin -------------------------------
int jump(int *nums, int numsSize) {
  int jumps = 0, curEnd = 0, farthest = 0;
  for (int i = 0; i < numsSize - 1; i++) {
    if (i + nums[i] > farthest) {
      farthest = i + nums[i];
    }
    if (i == curEnd) {
      jumps++;
      curEnd = farthest;
    }
  }
  return jumps;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int nums[] = {2, 3, 1, 1, 4};
  int size = sizeof(nums) / sizeof(int);
  sds input = array_show(nums, size);
  printf("Input:  %s\n", input);
  sdsfree(input);
  printf("Output: %d\n", jump(nums, size));
  return EXIT_SUCCESS;
}
