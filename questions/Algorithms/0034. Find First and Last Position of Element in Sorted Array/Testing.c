#include <stdio.h>
#include <stdlib.h>

#include <array.h>

// ------------------------------- solution begin -------------------------------
static int lowerBound(int *nums, int n, int target) {
  int lo = 0, hi = n;
  while (lo < hi) {
    int mid = lo + (hi - lo) / 2;
    if (nums[mid] < target) {
      lo = mid + 1;
    } else {
      hi = mid;
    }
  }
  return lo;
}

int *searchRange(int *nums, int numsSize, int target, int *returnSize) {
  *returnSize = 2;
  int *res = (int *)malloc(sizeof(int) * 2);
  int lo = lowerBound(nums, numsSize, target);
  int hi = lowerBound(nums, numsSize, target + 1) - 1;
  if (lo < numsSize && nums[lo] == target) {
    res[0] = lo;
    res[1] = hi;
  } else {
    res[0] = -1;
    res[1] = -1;
  }
  return res;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int nums[] = {5, 7, 7, 8, 8, 10};
  int size = sizeof(nums) / sizeof(int);
  int target = 8;
  sds input = array_show(nums, size);
  printf("Input:  %s %d\n", input, target);
  sdsfree(input);

  int returnSize = 0;
  int *res = searchRange(nums, size, target, &returnSize);
  sds output = array_show(res, returnSize);
  printf("Output: %s\n", output);
  sdsfree(output);
  free(res);
  return EXIT_SUCCESS;
}
