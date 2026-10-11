#include <stdio.h>
#include <stdlib.h>

#include <array.h>

// ------------------------------- solution begin -------------------------------
int lengthOfLIS(int *nums, int numsSize) {
  if (nums == NULL || numsSize == 0) return 0;
  int *lis = (int *)malloc(numsSize * sizeof(int));
  lis[0] = nums[0];
  int len = 1;
  int i;
  for (i = 1; i < numsSize; i++) {
    if (nums[i] > lis[len - 1]) {
      lis[len++] = nums[i];
    } else {
      int l = 0, r = len - 1;
      while (l < r) {
        int m = l + (r - l) / 2;
        if (lis[m] >= nums[i]) {
          r = m;
        } else {
          l = m + 1;
        }
      }
      lis[l] = nums[i];
    }
  }
  free(lis);
  return len;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int input1[] = {10, 9, 2, 5, 3, 7, 101, 18};
  int input2 = sizeof(input1) / sizeof(int);
  sds str = array_show(input1, input2);
  printf("Input:  %s %d\n", str, input2);
  sdsfree(str);
  printf("Output: %d\n", lengthOfLIS(input1, input2));
  return EXIT_SUCCESS;
}
