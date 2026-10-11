#include <stdio.h>
#include <stdlib.h>

#include <array.h>

// ------------------------------- solution begin -------------------------------
int massage(int *nums, int numsSize) {
  int prev = 0, cur = 0;
  for (int i = 0; i < numsSize; i++) {
    int take = prev + nums[i];
    int skip = cur;
    prev = cur;
    cur = take > skip ? take : skip;
  }
  return cur;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int nums[] = {1, 2, 3, 1};
  sds input = array_show(nums, 4);
  printf("Input:  %s\n", input);
  sdsfree(input);
  printf("Output: %d\n", massage(nums, 4));
  return EXIT_SUCCESS;
}
