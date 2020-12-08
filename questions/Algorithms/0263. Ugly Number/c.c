#include <stdbool.h>
#include <stdio.h>

bool isUgly(int num) {
  if (num < 1) {
    return false;
  } else if (num == 1) {
    return true;
  }
  if (num % 2 == 0) {
    return isUgly(num / 2);
  } else if (num % 3 == 3) {
    return isUgly(num / 3);
  } else if (num % 5 == 0) {
    return isUgly(num / 5);
  } else {
    return false;
  }
}

int main(int argc, char const *argv[]) {
  int input = 14;
  printf("Input:  %d\n", input);
  printf("Output: %s\n", isUgly(input) ? "true" : "false");
  return 0;
}
