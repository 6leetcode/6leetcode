#include <stdio.h>
#include <stdlib.h>

#include <array.h>

// ------------------------------- solution begin -------------------------------
int missingNumber(int *nums, int numsSize) {
  int res = numsSize;
  for (int i = 0; i < numsSize; i++) {
    res ^= i ^ nums[i];
  }
  return res;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int nums[] = {9, 6, 4, 2, 3, 5, 7, 0, 1};
  sds input = array_show(nums, 9);
  printf("Input:  %s\n", input);
  sdsfree(input);
  printf("Output: %d\n", missingNumber(nums, 9));
  return EXIT_SUCCESS;
}
