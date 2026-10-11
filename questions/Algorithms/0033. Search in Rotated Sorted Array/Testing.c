#include <stdio.h>
#include <stdlib.h>

#include <array.h>

// ------------------------------- solution begin -------------------------------
int search(int *nums, int numsSize, int target) {
  int lo = 0, hi = numsSize - 1;
  while (lo <= hi) {
    int mid = lo + (hi - lo) / 2;
    if (nums[mid] == target) {
      return mid;
    }
    if (nums[lo] <= nums[mid]) {
      if (target >= nums[lo] && target < nums[mid]) {
        hi = mid - 1;
      } else {
        lo = mid + 1;
      }
    } else {
      if (target > nums[mid] && target <= nums[hi]) {
        lo = mid + 1;
      } else {
        hi = mid - 1;
      }
    }
  }
  return -1;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int nums[] = {4, 5, 6, 7, 0, 1, 2};
  int size = sizeof(nums) / sizeof(int);
  int target = 0;
  sds input = array_show(nums, size);
  printf("Input:  %s %d\n", input, target);
  sdsfree(input);
  printf("Output: %d\n", search(nums, size, target));
  return EXIT_SUCCESS;
}
