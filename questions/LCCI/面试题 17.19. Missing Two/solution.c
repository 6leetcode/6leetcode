#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include <array.h>

// ------------------------------- solution begin -------------------------------
int *missingTwo(int *nums, int numsSize, int *returnSize) {
  long long n = numsSize + 2;
  long long sumAll = n * (n + 1) / 2;
  long long sqAll = n * (n + 1) * (2 * n + 1) / 6;
  long long sum = 0, sq = 0;
  for (int i = 0; i < numsSize; i++) {
    sum += nums[i];
    sq += (long long)nums[i] * nums[i];
  }
  long long ds = sumAll - sum;
  long long dq = sqAll - sq;
  long long diff = (long long)sqrtl((long double)(2 * dq - ds * ds));
  int a = (int)((ds + diff) / 2);
  int b = (int)(ds - a);
  int *res = (int *)malloc(sizeof(int) * 2);
  res[0] = a;
  res[1] = b;
  *returnSize = 2;
  return res;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int nums[] = {2, 3};
  sds input = array_show(nums, 2);
  printf("Input:  %s\n", input);
  sdsfree(input);
  int size = 0;
  int *res = missingTwo(nums, 2, &size);
  sds out = array_show(res, size);
  printf("Output: %s\n", out);
  sdsfree(out);
  free(res);
  return EXIT_SUCCESS;
}
