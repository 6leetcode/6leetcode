#include <stdio.h>
#include <stdlib.h>

#include <array.h>

// ------------------------------- solution begin -------------------------------
void sortColors(int *nums, int numsSize) {
  int ptr = 0;
  for (int i = 0; i < numsSize; i++) {
    if (nums[i] == 0) {
      int t = nums[i];
      nums[i] = nums[ptr];
      nums[ptr] = t;
      ptr++;
    }
  }
  for (int i = ptr; i < numsSize; i++) {
    if (nums[i] == 1) {
      int t = nums[i];
      nums[i] = nums[ptr];
      nums[ptr] = t;
      ptr++;
    }
  }
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int nums[] = {2, 0, 2, 1, 1, 0};
  int size = sizeof(nums) / sizeof(int);
  sds input = array_show(nums, size);
  printf("Input:  %s\n", input);
  sdsfree(input);
  sortColors(nums, size);
  sds output = array_show(nums, size);
  printf("Output: %s\n", output);
  sdsfree(output);
  return EXIT_SUCCESS;
}
