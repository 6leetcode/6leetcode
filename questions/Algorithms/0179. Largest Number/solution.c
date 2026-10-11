#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <array.h>

// ------------------------------- solution begin -------------------------------
int cmp(const void *x, const void *y) {
  long sx = 10, sy = 10;
  while (sx <= *(int *)x) {
    sx *= 10;
  }
  while (sy <= *(int *)y) {
    sy *= 10;
  }
  return sx * (*(int *)y) + (*(int *)x) - sy * (*(int *)x) - (*(int *)y);
}

char *largestNumber(int *nums, int numsSize) {
  qsort(nums, numsSize, sizeof(int), cmp);
  if (nums[0] == 0) {
    char *ret = malloc(sizeof(char) * 2);
    ret[0] = '0', ret[1] = '\0';
    return "0";
  }
  char *ret = malloc(sizeof(char) * 1000);
  char *p = ret;
  for (int i = 0; i < numsSize; i++) {
    sprintf(p, "%d", nums[i]);
    p += strlen(p);
  }
  return ret;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int input1[] = {3, 30, 34, 5, 9};
  int input2 = sizeof(input1) / sizeof(int);
  sds input_show = array_show(input1, input2);
  printf("Input:  %s %d\n", input_show, input2);
  sdsfree(input_show);
  char *output = largestNumber(input1, input2);
  printf("Output: %s\n", output);
  free(output);
  return EXIT_SUCCESS;
}
