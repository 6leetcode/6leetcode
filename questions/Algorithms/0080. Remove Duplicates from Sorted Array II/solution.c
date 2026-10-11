#include <stdio.h>
#include <stdlib.h>

#include <array.h>

// ------------------------------- solution begin -------------------------------
int removeDuplicates(int *nums, int numsSize) {
  if (numsSize <= 2) return numsSize;
  int i = 2;
  for (int j = 2; j < numsSize; j++) {
    if (nums[j] != nums[i - 2]) {
      nums[i] = nums[j];
      i++;
    }
  }
  return i;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int nums[] = {1, 1, 1, 2, 2, 3};
  int size = sizeof(nums) / sizeof(int);
  sds input = array_show(nums, size);
  printf("Input:  %s\n", input);
  sdsfree(input);
  int k = removeDuplicates(nums, size);
  sds output = array_show(nums, k);
  printf("Output: %d, %s\n", k, output);
  sdsfree(output);
  return EXIT_SUCCESS;
}
