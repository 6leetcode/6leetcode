#include <stdio.h>
#include <stdlib.h>

#include <array.h>

// ------------------------------- solution begin -------------------------------
int *countSmaller(int *nums, int numsSize, int *returnSize) {
  int *res = (int *)malloc(sizeof(int) * numsSize);
  *returnSize = numsSize;
  for (int i = 0; i < numsSize; i++) {
    int count = 0;
    for (int j = i + 1; j < numsSize; j++) {
      if (nums[j] < nums[i]) {
        count++;
      }
    }
    res[i] = count;
  }
  return res;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int nums[] = {5, 2, 6, 1};
  int size = sizeof(nums) / sizeof(int);
  sds input = array_show(nums, size);
  printf("Input:  %s\n", input);
  sdsfree(input);

  int returnSize = 0;
  int *res = countSmaller(nums, size, &returnSize);
  sds output = array_show(res, returnSize);
  printf("Output: %s\n", output);
  sdsfree(output);
  free(res);
  return EXIT_SUCCESS;
}
