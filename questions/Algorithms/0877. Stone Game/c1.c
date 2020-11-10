#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include <array.h>

// ------------------------------- solution begin -------------------------------
bool stoneGame(int *piles, int pilesSize) {
  return true;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int input2 = 4;
  int *input1 = (int *)malloc(sizeof(int) * input2);
  for (int i = 0; i < input2; ++i) {
    input1[i] = i;
  }
  printf("Input:  ");
  array_show(input1, input2);
  printf(" %d\n", input2);
  printf("Output: %s\n", stoneGame(input1, input2) ? "true" : "false");
  return EXIT_SUCCESS;
}
