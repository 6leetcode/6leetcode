#include <stdio.h>
#include <stdlib.h>

// ------------------------------- solution begin -------------------------------
int exchangeBits(int num) {
  unsigned int n = (unsigned int)num;
  return (int)(((n & 0xaaaaaaaau) >> 1) | ((n & 0x55555555u) << 1));
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int input = 2;
  printf("Input:  %d\n", input);
  printf("Output: %d\n", exchangeBits(input));
  return EXIT_SUCCESS;
}
