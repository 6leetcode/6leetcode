#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include <array.h>

// ------------------------------- solution begin -------------------------------
int cmpfunc(const void *a, const void *b) {
  return *(int *)a - *(int *)b;
}

int threeSumClosest(int *nums, int numsSize, int target) {
  qsort(nums, numsSize, sizeof(int), cmpfunc);
  int ans = nums[0] + nums[1] + nums[numsSize - 1];
  for (int i = 0; i < numsSize; i++) {
    int left = i + 1;
    int right = numsSize - 1;
    while (left < right) {
      int temp = nums[i] + nums[left] + nums[right];
      if (abs(target - ans) > abs(target - temp)) {
        ans = temp;
      }
      if (target > temp) {
        left++;
      } else {
        right--;
      }
    }
  }
  return ans;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int input1[] = {-1, 2, 1, -4};
  int input2 = sizeof(input1) / sizeof(int);
  int input3 = 2;
  sds input4 = array_show(input1, input2);
  printf("Input:  %s\n", input4);
  sdsfree(input4);
  printf("Output: %d\n", threeSumClosest(input1, input2, input3));
  return EXIT_SUCCESS;
}
