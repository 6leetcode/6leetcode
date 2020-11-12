#include <stdio.h>
#include <stdlib.h>

#include <array.h>

int *sortArrayByParityII(int *A, int ASize, int *returnSize) {
  for (int even = 0, odd = 1; even < ASize; even += 2) {
    if (A[even] & 1) {
      while (A[odd] & 1) {
        odd += 2;
      }
      A[odd] ^= A[even];
      A[even] ^= A[odd];
      A[odd] ^= A[even];
    }
  }

  *returnSize = ASize;
  return A;
}

int main(int argc, char const *argv[]) {
  int input1[] = {4, 2, 5, 7};
  int input2 = sizeof(input1) / sizeof(int);
  printf("Input:  ");
  array_show(input1, input2);
  printf(" %d\n", input2);
  int output2;
  int *output1 = sortArrayByParityII(input1, input2, &output2);
  printf("Output: ");
  array_show(output1, output2);
  printf(" %d", output2);
  return EXIT_SUCCESS;
}
