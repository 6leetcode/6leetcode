#include <stdio.h>
#include <stdlib.h>

#include <array.h>

// ------------------------------- solution begin -------------------------------
int removeElement(int *nums, int numsSize, int val) {
  int i = 0;
  for (int j = 0; j < numsSize; j++) {
    if (nums[j] != val) {
      nums[i] = nums[j];
      i++;
    }
  }
  return i;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int nums[] = {3, 2, 2, 3};
  int size = sizeof(nums) / sizeof(int);
  int val = 3;
  sds input = array_show(nums, size);
  printf("Input:  %s %d\n", input, val);
  sdsfree(input);

  int k = removeElement(nums, size, val);
  sds output = array_show(nums, k);
  printf("Output: %d, %s\n", k, output);
  sdsfree(output);

  return EXIT_SUCCESS;
}
