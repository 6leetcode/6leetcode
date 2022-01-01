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
  int input1[] = {1, 2, 3, 4};
  int input2 = (int)(sizeof(input1) / sizeof(int));
  sds s = array_show(input1, input2);
  printf("Input:  %s %d\n", s, input2);
  sdsfree(s);
  printf("Output: %s\n", stoneGame(input1, input2) ? "true" : "false");
  return EXIT_SUCCESS;
}
