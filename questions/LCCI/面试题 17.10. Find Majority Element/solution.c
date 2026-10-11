#include <stdio.h>
#include <stdlib.h>

#include <array.h>

// ------------------------------- solution begin -------------------------------
int majorityElement(int *nums, int numsSize) {
  int candidate = nums[0], count = 0;
  for (int i = 0; i < numsSize; i++) {
    if (count == 0) candidate = nums[i];
    if (nums[i] == candidate) {
      count++;
    } else {
      count--;
    }
  }
  int c = 0;
  for (int i = 0; i < numsSize; i++) {
    if (nums[i] == candidate) c++;
  }
  return c > numsSize / 2 ? candidate : -1;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int nums[] = {1, 2, 5, 9, 5, 9, 5, 5, 5};
  sds input = array_show(nums, 9);
  printf("Input:  %s\n", input);
  sdsfree(input);
  printf("Output: %d\n", majorityElement(nums, 9));
  return EXIT_SUCCESS;
}
