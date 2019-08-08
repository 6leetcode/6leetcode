#include <stdio.h>
#include <stdlib.h>

void moveZeroes(int *nums, int numsSize) {
  int i = -1;
  int j = 0;
  while (j <= numsSize - 1) {
    if (nums[j] != 0) {
      i++;
      nums[i] = nums[j];
    }
    j++;
  }
  for (int m = i + 1; m < numsSize; m++) {
    nums[m] = 0;
  }
}

int main(int argc, char const *argv[]) {
  int num[]    = {0, 1, 0, 3, 12};
  int numsSize = 5;
  int *nums    = (int *)malloc(sizeof(int) * numsSize);
  for (int i = 0; i < numsSize; i++) {
    nums[i] = num[i];
  }
  printf("Input:  [%d", nums[0]);
  for (int i = 1; i < numsSize; i++) {
    printf(", %d", nums[i]);
  }
  printf("]\n");
  moveZeroes(nums, numsSize);
  printf("Output: [%d", nums[0]);
  for (int i = 1; i < numsSize; i++) {
    printf(", %d", nums[i]);
  }
  printf("]\n");
  return EXIT_SUCCESS;
}
