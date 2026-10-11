#include <stdio.h>
#include <stdlib.h>

#include <array.h>

// ------------------------------- solution begin -------------------------------
int searchInsert(int *nums, int numsSize, int target) {
  int lo = 0, hi = numsSize;
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
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int nums[] = {1, 3, 5, 6};
  int size = sizeof(nums) / sizeof(int);
  int target = 5;
  sds input = array_show(nums, size);
  printf("Input:  %s %d\n", input, target);
  sdsfree(input);
  printf("Output: %d\n", searchInsert(nums, size, target));
  return EXIT_SUCCESS;
}
