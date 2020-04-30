#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmpfunc(const void *a, const void *b) {
  return (*(signed int *)b > *(signed int *)a) ? 1 : 0;
}

double findMedianSortedArrays(int *nums1, int nums1Size, int *nums2, int nums2Size) {
  int total_length = nums1Size + nums2Size;

  int *merge = (int *)malloc(sizeof(int) * total_length);

  memcpy(merge, nums1, sizeof(int) * nums1Size);
  memcpy(merge + nums1Size, nums2, sizeof(int) * nums2Size);

  qsort(merge, total_length, sizeof(int), cmpfunc);

  double result = 0;

  if (total_length % 2 == 0) {
    result = (*(merge + total_length / 2 - 1) + *(merge + total_length / 2)) / 2.0;
  } else {
    result = *(merge + total_length / 2);
  }

  free(merge);
  return result;
}

int main(int argc, char const *argv[]) {
  int input1[] = {0, 1, 2, 3};
  int input2[] = {4, 5, 6, 7};
  printf("Input:  [ ");
  for (int i = 0; i < sizeof(input1) / sizeof(int); i++) {
    printf("%d ", input1[i]);
  }
  printf("] [ ");
  for (int i = 0; i < sizeof(input2) / sizeof(int); i++) {
    printf("%d ", input2[i]);
  }
  printf("]\n");
  printf("Output: %f\n", findMedianSortedArrays(input1, sizeof(input1) / sizeof(int), input2, sizeof(input2) / sizeof(int)));
  return 0;
}
