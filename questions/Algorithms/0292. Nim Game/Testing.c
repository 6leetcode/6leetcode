#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// ------------------------------- solution begin -------------------------------
bool canWinNim(int n) {
  return n % 4 != 0;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int input = 4;
  printf("Input:  %d\n", input);
  printf("Output: %s\n", canWinNim(input) ? "true" : "false");
  return EXIT_SUCCESS;
}
