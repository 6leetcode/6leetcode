#include <stdio.h>
#include <stdlib.h>

#include <array.h>

// ------------------------------- solution begin -------------------------------
int *drawLine(int length, int w, int x1, int x2, int y) {
  int *res = (int *)calloc(length, sizeof(int));
  int perRow = w / 32;
  for (int x = x1; x <= x2; x++) {
    int group = y * perRow + x / 32;
    int bit = 31 - (x % 32);
    res[group] |= (1 << bit);
  }
  return res;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int length = 1, w = 32, x1 = 30, x2 = 31, y = 0;
  printf("Input:  length = 1, w = 32, x1 = 30, x2 = 31, y = 0\n");
  int *res = drawLine(length, w, x1, x2, y);
  sds out = array_show(res, length);
  printf("Output: %s\n", out);
  sdsfree(out);
  free(res);
  return EXIT_SUCCESS;
}
