#include <stdio.h>
#include <stdlib.h>

// ------------------------------- solution begin -------------------------------
int convertInteger(int A, int B) {
  unsigned int x = (unsigned int)(A ^ B);
  int count = 0;
  while (x) {
    count += x & 1;
    x >>= 1;
  }
  return count;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int A = 29, B = 15;
  printf("Input:  A = %d, B = %d\n", A, B);
  printf("Output: %d\n", convertInteger(A, B));
  return EXIT_SUCCESS;
}
