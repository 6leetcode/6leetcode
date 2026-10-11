#include <stdio.h>
#include <stdlib.h>

#include <array.h>

// ------------------------------- solution begin -------------------------------
int *divingBoard(int shorter, int longer, int k, int *returnSize) {
  if (k == 0) {
    *returnSize = 0;
    return NULL;
  }
  if (shorter == longer) {
    int *res = (int *)malloc(sizeof(int));
    res[0] = shorter * k;
    *returnSize = 1;
    return res;
  }
  int *res = (int *)malloc(sizeof(int) * (k + 1));
  for (int i = 0; i <= k; i++) {
    res[i] = shorter * (k - i) + longer * i;
  }
  *returnSize = k + 1;
  return res;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int shorter = 1, longer = 2, k = 3;
  printf("Input:  shorter = %d, longer = %d, k = %d\n", shorter, longer, k);
  int size = 0;
  int *res = divingBoard(shorter, longer, k, &size);
  sds out = array_show(res, size);
  printf("Output: %s\n", out);
  sdsfree(out);
  free(res);
  return EXIT_SUCCESS;
}
