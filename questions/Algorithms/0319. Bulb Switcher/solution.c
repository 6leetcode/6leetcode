#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int bulbSwitch(int n) {
  return (int)sqrt(n);
}

int main(int argc, char const *argv[]) {
  int input = 16;
  printf("Input:  %d\n", input);
  printf("Output: %d\n", bulbSwitch(input));
  return EXIT_SUCCESS;
}
