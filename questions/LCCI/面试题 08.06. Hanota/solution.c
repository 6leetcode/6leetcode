#include <stdio.h>
#include <stdlib.h>

// ------------------------------- solution begin -------------------------------
static void hanoi(int *src, int *srcSize, int *aux, int *auxSize, int *dst, int *dstSize, int n) {
  if (n == 0) return;
  hanoi(src, srcSize, dst, dstSize, aux, auxSize, n - 1);
  dst[(*dstSize)++] = src[--(*srcSize)];
  hanoi(aux, auxSize, src, srcSize, dst, dstSize, n - 1);
}

void hanota(int *A, int ASize, int *B, int BSize, int *C, int *CSize) {
  hanoi(A, &ASize, B, &BSize, C, &CSize, ASize);
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int A[] = {2, 1, 0};
  int B[3];
  int C[3];
  int ASize = 3, BSize = 0, CSize = 0;
  printf("Input:  A = [2, 1, 0], B = [], C = []\n");
  hanota(A, ASize, B, BSize, C, &CSize);
  printf("Output: C = [");
  for (int i = 0; i < CSize; i++) {
    printf("%s%d", i == 0 ? "" : ", ", C[i]);
  }
  printf("]\n");
  return EXIT_SUCCESS;
}
