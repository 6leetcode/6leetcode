#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmpfunc(const void *a, const void *b) { return (*(int *)b - *(int *)a); }

double findMedianSortedArrays(int *nums1, int nums1Size, int *nums2, int nums2Size) {
  int total_length = nums1Size + nums2Size;
  int *merge       = (int *)malloc(sizeof(int) * total_length);
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
  int a[] = {0, 1, 2, 3};
  int b[] = {4, 5, 6, 7};
  printf("%f\n", findMedianSortedArrays(a, sizeof(a) / sizeof(int), b, sizeof(b) / sizeof(int)));
  return 0;
}

// Compile: gcc -std=c11 -o findMedianSortedArrays.test c1.c
// Run: ./findMedianSortedArrays.test
