#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

#include <array.h>

// ------------------------------- solution begin -------------------------------
static int cmp(const void *a, const void *b) {
  int x = *(int *)a, y = *(int *)b;
  return (x > y) - (x < y);
}

int smallestDifference(int *a, int aSize, int *b, int bSize) {
  qsort(a, aSize, sizeof(int), cmp);
  qsort(b, bSize, sizeof(int), cmp);
  int i = 0, j = 0;
  long long best = LLONG_MAX;
  while (i < aSize && j < bSize) {
    long long diff = (long long)a[i] - b[j];
    if (diff < 0) diff = -diff;
    if (diff < best) best = diff;
    if (a[i] < b[j]) {
      i++;
    } else {
      j++;
    }
  }
  return (int)best;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int a[] = {1, 3, 15, 11, 2};
  int b[] = {23, 127, 235, 19, 8};
  sds s1 = array_show(a, 5), s2 = array_show(b, 5);
  printf("Input:  %s, %s\n", s1, s2);
  sdsfree(s1);
  sdsfree(s2);
  printf("Output: %d\n", smallestDifference(a, 5, b, 5));
  return EXIT_SUCCESS;
}
