#include <stdio.h>
#include <stdlib.h>

int majorityElement(int *nums, int numsSize) {
  int candidate = nums[0], count = 1;
  for (int i = 1; i < numsSize; i++) {
    if (count == 0) {
      candidate = nums[i];
      count     = 1;
    } else if (nums[i] == candidate) {
      count++;
    } else {
      count--;
    }
  }
  return candidate;
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
