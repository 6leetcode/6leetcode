#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include <array.h>

// ------------------------------- solution begin -------------------------------
bool search(int *nums, int numsSize, int target) {
  int lo = 0, hi = numsSize - 1;
  while (lo <= hi) {
    int mid = lo + (hi - lo) / 2;
    if (nums[mid] == target) return true;
    if (nums[lo] == nums[mid] && nums[mid] == nums[hi]) {
      lo++;
      hi--;
    } else if (nums[lo] <= nums[mid]) {
      if (nums[lo] <= target && target < nums[mid]) {
        hi = mid - 1;
      } else {
        lo = mid + 1;
      }
    } else {
      if (nums[mid] < target && target <= nums[hi]) {
        lo = mid + 1;
      } else {
        hi = mid - 1;
      }
    }
  }
  return false;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int nums[] = {2, 5, 6, 0, 0, 1, 2};
  int size = sizeof(nums) / sizeof(int);
  int target = 0;
  sds input = array_show(nums, size);
  printf("Input:  %s %d\n", input, target);
  sdsfree(input);
  printf("Output: %s\n", search(nums, size, target) ? "true" : "false");
  return EXIT_SUCCESS;
}
