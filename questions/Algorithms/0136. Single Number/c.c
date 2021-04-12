#include <stdio.h>
#include <stdlib.h>

// ------------------------------- solution begin -------------------------------
int singleNumber(int *nums, int numsSize) {
  int result = 0;
  for (int i = 1; i < numsSize; i++) {
    if (i != 0) {
      result ^= *(nums + i);
    } else {
      result = *nums;
    }
  }
  return result;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int input[] = {4, 1, 2, 1, 2};
  int length  = sizeof(input) / sizeof(int);
  printf("Input: [");
  for (int i = 0; i < length; i++) {
    printf("%d", input[i]);
    if (i < length - 1) {
      printf(" ");
    }
  }
  printf("]\n");
  printf("Output: %d\n", singleNumber(input, length));
  return EXIT_SUCCESS;
}
