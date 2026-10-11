#include <stdio.h>
#include <stdlib.h>

#include <array.h>

// ------------------------------- solution begin -------------------------------
void merge(int *nums1, int nums1Size, int m, int *nums2, int nums2Size, int n) {
  int i = m - 1, j = n - 1, k = m + n - 1;
  while (j >= 0) {
    if (i >= 0 && nums1[i] > nums2[j]) {
      nums1[k--] = nums1[i--];
    } else {
      nums1[k--] = nums2[j--];
    }
  }
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int nums1[] = {1, 2, 3, 0, 0, 0};
  int nums2[] = {2, 5, 6};
  int m = 3, n = 3;
  sds i1 = array_show(nums1, 6);
  sds i2 = array_show(nums2, 3);
  printf("Input:  %s %d %s %d\n", i1, m, i2, n);
  sdsfree(i1);
  sdsfree(i2);
  merge(nums1, 6, m, nums2, 3, n);
  sds output = array_show(nums1, 6);
  printf("Output: %s\n", output);
  sdsfree(output);
  return EXIT_SUCCESS;
}
