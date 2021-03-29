#include <stdio.h>
#include <stdlib.h>

#include <array.h>

// ------------------------------- solution begin -------------------------------
int lengthOfLIS(int *nums, int numsSize) {
  if (nums == NULL || numsSize == 0) return 0;
  int *dp = (int *)malloc(numsSize * sizeof(int));
  int i, j;
  int max = 1;
  for (i = 0; i < numsSize; i++) {
    int v = 1;
    for (j = 0; j < i; j++) {
      if (nums[i] > nums[j] && dp[j] + 1 > v)
        v = dp[j] + 1;
    }
    dp[i] = v;
    if (v > max)
      max = v;
  }
  free(dp);
  return max;
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
