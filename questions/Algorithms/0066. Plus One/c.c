#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

// ------------------------------- solution begin -------------------------------
int *plusOne(int *digits, int digitsSize, int *returnSize) {
  int carry = 1;
  for (int i = digitsSize - 1; i >= 0; i--) {
    int new_digit = (digits[i] + carry) % 10;
    carry = (digits[i] + carry) / 10;
    digits[i] = new_digit;
  }

  *returnSize = digitsSize;

  int *ans;

  if (carry == 1) {
    ans = (int *)malloc(sizeof(int) * (digitsSize + 1));
    bzero(ans, sizeof(int) * (digitsSize + 1));
    *returnSize = digitsSize + 1;
    ans[0] = 1;
  } else {
    ans = (int *)malloc(sizeof(int) * digitsSize);
    memcpy(ans, digits, sizeof(int) * digitsSize);
  }

  return ans;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int digits[]   = {0, 0};
  int returnSize = 0;

  printf("Input:  [%d", digits[0]);
  for (int i = 1; i < sizeof(digits) / sizeof(int); i++) {
    printf(", %d", digits[i]);
  }
  printf("]\n");
  int *ans = plusOne(digits, sizeof(digits) / sizeof(int), &returnSize);
  printf("Output: [%d", ans[0]);
  for (int i = 1; i < returnSize; i++) {
    printf(", %d", ans[i]);
  }
  printf("]\n");

  free(ans);

  return EXIT_SUCCESS;
}
