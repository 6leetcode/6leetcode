#include <stdio.h>
#include <stdlib.h>

#include <array.h>

// ------------------------------- solution begin -------------------------------
void swapNumbers(int *numbers, int numbersSize) {
  (void)numbersSize;
  numbers[0] ^= numbers[1];
  numbers[1] ^= numbers[0];
  numbers[0] ^= numbers[1];
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int numbers[] = {1, 2};
  sds input = array_show(numbers, 2);
  printf("Input:  %s\n", input);
  sdsfree(input);
  swapNumbers(numbers, 2);
  sds out = array_show(numbers, 2);
  printf("Output: %s\n", out);
  sdsfree(out);
  return EXIT_SUCCESS;
}
