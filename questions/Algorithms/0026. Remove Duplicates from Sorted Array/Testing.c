#include <stdio.h>
#include <stdlib.h>

#include <array.h>

// ------------------------------- solution begin -------------------------------
int removeDuplicates(int *nums, int numsSize) {
  if (numsSize == 0) {
    return 0;
  }
  int i = 0;
  for (int j = 1; j < numsSize; j++) {
    if (nums[j] != nums[i]) {
      i++;
      nums[i] = nums[j];
    }
  }
  return i + 1;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int nums[] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
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
