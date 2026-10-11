#include <stdio.h>
#include <stdlib.h>

#include <array.h>

// ------------------------------- solution begin -------------------------------
static int cmp(const void *a, const void *b) {
  return *(int *)a - *(int *)b;
}

void wiggleSort(int *nums, int numsSize) {
  qsort(nums, numsSize, sizeof(int), cmp);
  for (int i = 0; i + 1 < numsSize; i += 2) {
    int t = nums[i];
    nums[i] = nums[i + 1];
    nums[i + 1] = t;
  }
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int nums[] = {5, 3, 1, 2, 3};
  sds input = array_show(nums, 5);
  printf("Input:  %s\n", input);
  sdsfree(input);
  wiggleSort(nums, 5);
  sds out = array_show(nums, 5);
  printf("Output: %s\n", out);
  sdsfree(out);
  return EXIT_SUCCESS;
}
