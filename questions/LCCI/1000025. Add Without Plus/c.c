#include <stdio.h>
#include <stdlib.h>

int add(int a, int b) {
  if (a == 0) {
    return b;
  } else if (b == 0) {
    return a;
  }
  int sum = 0;
  unsigned int carry = 0;
  while (b != 0) {
    sum = (a ^ b);
    carry = (unsigned int)(a & b) << 1;
    a = sum;
    b = carry;
  }
  return a;
}

int main(int argc, char const *argv[]) {
  int input1 = -1;
  int input2 = 2;
  printf("Input:  %d %d\n", input1, input2);
  printf("Output: %d\n", add(input1, input2));
  return EXIT_SUCCESS;
}
