#include <stdio.h>
#include <stdlib.h>

#include <array.h>

// ------------------------------- solution begin -------------------------------
void merge(int *A, int ASize, int m, int *B, int BSize, int n) {
  (void)ASize;
  (void)BSize;
  int i = m - 1, j = n - 1, k = m + n - 1;
  while (j >= 0) {
    if (i >= 0 && A[i] > B[j]) {
      A[k--] = A[i--];
    } else {
      A[k--] = B[j--];
    }
  }
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int A[] = {1, 2, 3, 0, 0, 0};
  int B[] = {2, 5, 6};
  int m = 3, n = 3;
  sds a = array_show(A, 6), b = array_show(B, 3);
  printf("Input:  A = %s, m = %d; B = %s, n = %d\n", a, m, b, n);
  sdsfree(a);
  sdsfree(b);
  merge(A, 6, m, B, 3, n);
  sds out = array_show(A, 6);
  printf("Output: %s\n", out);
  sdsfree(out);
  return EXIT_SUCCESS;
}
