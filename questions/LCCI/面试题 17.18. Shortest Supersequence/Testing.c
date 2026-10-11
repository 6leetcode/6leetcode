#include <stdio.h>
#include <stdlib.h>

#include <array.h>

// ------------------------------- solution begin -------------------------------
static int inSmall(int v, int *small, int smallSize) {
  for (int i = 0; i < smallSize; i++) {
    if (small[i] == v) return i;
  }
  return -1;
}

int *shortestSeq(int *big, int bigSize, int *small, int smallSize, int *returnSize) {
  int bestLen = bigSize + 1, bestL = -1, bestR = -1;
  for (int l = 0; l < bigSize; l++) {
    if (inSmall(big[l], small, smallSize) < 0) continue;
    int *seen = (int *)calloc(smallSize, sizeof(int));
    int found = 0, r = l;
    for (; r < bigSize; r++) {
      int idx = inSmall(big[r], small, smallSize);
      if (idx >= 0 && !seen[idx]) {
        seen[idx] = 1;
        found++;
        if (found == smallSize) break;
      }
    }
    free(seen);
    if (found == smallSize) {
      int len = r - l + 1;
      if (len < bestLen) {
        bestLen = len;
        bestL = l;
        bestR = r;
      }
    }
  }
  if (bestL == -1) {
    *returnSize = 0;
    return NULL;
  }
  int *res = (int *)malloc(sizeof(int) * 2);
  res[0] = bestL;
  res[1] = bestR;
  *returnSize = 2;
  return res;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int big[] = {7, 5, 9, 0, 2, 1, 3, 5, 7, 9, 1, 1, 5, 8, 8, 9, 7};
  int small[] = {1, 5, 9};
  sds b = array_show(big, 17), s = array_show(small, 3);
  printf("Input:  big = %s, small = %s\n", b, s);
  sdsfree(b);
  sdsfree(s);
  int size = 0;
  int *res = shortestSeq(big, 17, small, 3, &size);
  sds out = array_show(res, size);
  printf("Output: %s\n", out);
  sdsfree(out);
  free(res);
  return EXIT_SUCCESS;
}
