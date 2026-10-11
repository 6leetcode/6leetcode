#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include <array.h>

// ------------------------------- solution begin -------------------------------
int maxSubArray(int *nums, int numsSize) {
  int pre = 0, maxAns = nums[0];
  for (int i = 0; i < numsSize; i++) {
    pre = fmax(pre + nums[i], nums[i]);
    maxAns = fmax(maxAns, pre);
  }
  return maxAns;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int input1[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
  int input2 = sizeof(input1) / sizeof(int);
  sds intput_show = array_show(input1, input2);
  printf("Input:  %s %d\n", intput_show, input2);
  sdsfree(intput_show);
  int output = maxSubArray(input1, input2);
  printf("Output: %d\n", output);
  return EXIT_SUCCESS;
}
