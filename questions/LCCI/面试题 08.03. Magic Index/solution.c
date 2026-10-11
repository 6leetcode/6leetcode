#include <stdio.h>
#include <stdlib.h>

// ------------------------------- solution begin -------------------------------
static int search(int *nums, int lo, int hi) {
  if (lo > hi) return -1;
  int mid = lo + (hi - lo) / 2;
  if (nums[mid] == mid) return mid;
  int leftHi = mid - 1 < nums[mid] ? mid - 1 : nums[mid];
  int res = search(nums, lo, leftHi);
  if (res != -1) return res;
  int rightLo = mid + 1 > nums[mid] ? mid + 1 : nums[mid];
  return search(nums, rightLo, hi);
}

int findMagicIndex(int *nums, int numsSize) {
  return search(nums, 0, numsSize - 1);
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int nums[] = {1, 1, 1};
  printf("Input:  [1, 1, 1]\n");
  printf("Output: %d\n", findMagicIndex(nums, 3));
  return EXIT_SUCCESS;
}
