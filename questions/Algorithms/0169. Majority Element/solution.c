#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void *a, const void *b) {
  return (*(signed int *)b > *(signed int *)a) ? 1 : 0;
}

int majorityElement(int *nums, int numsSize) {
  qsort(nums, numsSize, sizeof(int), cmpfunc);
  return nums[numsSize / 2];
}

int main(int argc, char const *argv[]) {
  int input[] = {-1, -1, 2147483647};
  int length  = sizeof(input) / sizeof(int);
  printf("Input:  [%d", input[0]);
  for (int i = 1; i < length; i++) {
    printf(", %d", input[i]);
  }
  printf("]\n");
  printf("Output: %d\n", majorityElement(input, length));
  return EXIT_SUCCESS;
}
