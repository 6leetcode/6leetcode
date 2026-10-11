#include <math.h>
#include <stdio.h>
#include <stdlib.h>

// ------------------------------- solution begin -------------------------------
int *grayCode(int n, int *returnSize) {
  *returnSize = (int)(pow(2, n));
  int *ans = (int *)malloc(sizeof(int) * (*returnSize));
  for (int i = 0; i < *returnSize; i++) {
    ans[i] = (i >> 1) ^ i;
  }
  return ans;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int input = 2;
  printf("Input:  %d\n", input);
  int returnSize;
  int *output = grayCode(input, &returnSize);
  printf("Output: [%d", output[0]);
  if (returnSize > 1) {
    for (int i = 1; i < returnSize; i++) {
      printf(", %d", output[i]);
    }
  }
  printf("]\n");
  free(output);
  return EXIT_SUCCESS;
}
