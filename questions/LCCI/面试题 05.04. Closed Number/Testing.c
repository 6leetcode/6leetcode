#include <stdio.h>
#include <stdlib.h>

#include <array.h>

// ------------------------------- solution begin -------------------------------
static int nextBigger(int num) {
  int c = num, c0 = 0, c1 = 0;
  while (c && !(c & 1)) {
    c0++;
    c >>= 1;
  }
  while (c & 1) {
    c1++;
    c >>= 1;
  }
  if (c0 + c1 >= 31) return -1;
  int p = c0 + c1;
  num |= (1 << p);
  num &= ~((1 << p) - 1);
  num |= (1 << (c1 - 1)) - 1;
  return num;
}

static int nextSmaller(int num) {
  int c = num, c0 = 0, c1 = 0;
  while (c & 1) {
    c1++;
    c >>= 1;
  }
  if (c == 0) return -1;
  while (c && !(c & 1)) {
    c0++;
    c >>= 1;
  }
  int p = c0 + c1;
  num &= ~((1 << (p + 1)) - 1);
  num |= ((1 << (c1 + 1)) - 1) << (c0 - 1);
  return num;
}

int *findClosedNumbers(int num, int *returnSize) {
  int *res = (int *)malloc(sizeof(int) * 2);
  *returnSize = 2;
  res[0] = nextBigger(num);
  res[1] = nextSmaller(num);
  return res;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int input = 2;
  printf("Input:  %d\n", input);
  int size = 0;
  int *res = findClosedNumbers(input, &size);
  sds out = array_show(res, size);
  printf("Output: %s\n", out);
  sdsfree(out);
  free(res);
  return EXIT_SUCCESS;
}
