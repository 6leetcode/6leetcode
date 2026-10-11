#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverseString(char *s, int sSize) {
  for (int i = 0, j = sSize - 1; i < j; i++, j--) {
    char temp = s[i];
    s[i]      = s[j];
    s[j]      = temp;
  }
}

int main(int argc, char const *argv[]) {
  char input[] = "hello";
  printf("Input: %s\n", input);
  reverseString(input, strlen(input));
  printf("Output: %s\n", input);
  return EXIT_SUCCESS;
}
