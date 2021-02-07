#include <stdio.h>
#include <stdlib.h>

#include <array.h>

int cmp(const void *_a, const void *_b) {
  int a = *(int *)_a, b = *(int *)_b;
  return a - b;
}

int largestPerimeter(int *A, int ASize) {
  qsort(A, ASize, sizeof(int), cmp);
  for (int i = ASize - 1; i >= 2; --i) {
    if (A[i - 2] + A[i - 1] > A[i]) {
      return A[i - 2] + A[i - 1] + A[i];
    }
  }
  return 0;
}

int main(int argc, char const *argv[]) {
  int input[] = {3, 6, 2, 3};
  int size = sizeof(input) / sizeof(int);
  sds input1 = array_show(input, size);
  printf("Input:  %s\n", input1);
  sdsfree(input1);
  printf("Output: %d\n", largestPerimeter(input, size));
  return EXIT_SUCCESS;
}
