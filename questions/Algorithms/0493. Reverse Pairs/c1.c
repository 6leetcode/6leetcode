#include <stdio.h>
#include <stdlib.h>

#include <array.h>

int reversePairsRecursive(int *nums, int left, int right) {
  if (left == right) {
    return 0;
  } else {
    int mid = (left + right) / 2;
    int n1 = reversePairsRecursive(nums, left, mid);
    int n2 = reversePairsRecursive(nums, mid + 1, right);
    int ret = n1 + n2;

    int i = left;
    int j = mid + 1;
    while (i <= mid) {
      while (j <= right && (long long)nums[i] > 2 * (long long)nums[j]) j++;
      ret += (j - mid - 1);
      i++;
    }

    int sorted[right - left + 1];
    int p1 = left, p2 = mid + 1;
    int p = 0;
    while (p1 <= mid || p2 <= right) {
      if (p1 > mid) {
        sorted[p++] = nums[p2++];
      } else if (p2 > right) {
        sorted[p++] = nums[p1++];
      } else {
        if (nums[p1] < nums[p2]) {
          sorted[p++] = nums[p1++];
        } else {
          sorted[p++] = nums[p2++];
        }
      }
    }
    for (int i = 0; i < right - left + 1; i++) {
      nums[left + i] = sorted[i];
    }
    return ret;
  }
}

int reversePairs(int *nums, int numsSize) {
  if (numsSize == 0) {
    return 0;
  }
  return reversePairsRecursive(nums, 0, numsSize - 1);
}

int main(int argc, char const *argv[]) {
  int input[] = {1, 3, 2, 3, 1};
  int size = sizeof(input) / sizeof(int);
  printf("Input:  ");
  array_show(input, size);
  printf("\n");
  int output = reversePairs(input, size);
  printf("Output: %d", output);
  return EXIT_SUCCESS;
}
