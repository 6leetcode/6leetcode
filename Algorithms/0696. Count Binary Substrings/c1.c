#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int countBinarySubstrings(char *s) {
  int n = 0, pre = 0, curr = 1, len = strlen(s) - 1;
  for (int i = 0; i < len; ++i) {
    if (s[i] == s[i + 1])
      ++curr;
    else {
      pre  = curr;
      curr = 1;
    }
    if (pre >= curr) ++n;
  }
  return n;
}

int main(int argc, char const *argv[]) {
  char input[] = "00110011";
  printf("Input: %s\n", input);
  printf("Output: %d\n", countBinarySubstrings(input));
  return EXIT_SUCCESS;
}
