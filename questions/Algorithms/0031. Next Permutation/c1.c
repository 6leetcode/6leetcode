#include <stdio.h>
#include <stdlib.h>

#include <array.h>

// ------------------------------- solution begin -------------------------------
void swap(int *a, int *b) {
  int t = *a;
  *a = *b, *b = t;
}

void reverse(int *nums, int left, int right) {
  while (left < right) {
    swap(nums + left, nums + right);
    left++, right--;
  }
}

void nextPermutation(int *nums, int numsSize) {
  int i = numsSize - 2;
  while (i >= 0 && nums[i] >= nums[i + 1]) {
    i--;
  }
  if (i >= 0) {
    int j = numsSize - 1;
    while (j >= 0 && nums[i] >= nums[j]) {
      j--;
    }
    swap(nums + i, nums + j);
  }
  reverse(nums, i + 1, numsSize - 1);
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int input1[] = {1, 2, 3};
  int input2 = (int)(sizeof(input1) / sizeof(int));
  printf("Input:  ");
  array_show(input1, input2);
  printf("\n");
  nextPermutation(input1, input2);
  printf("Output: ");
  array_show(input1, input2);
  printf("\n");
  return EXIT_SUCCESS;
}
