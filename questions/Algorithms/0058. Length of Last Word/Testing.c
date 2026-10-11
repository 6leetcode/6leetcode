#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------------------- solution begin -------------------------------
int lengthOfLastWord(char *s) {
  int n = strlen(s);
  int i = n - 1;
  while (i >= 0 && s[i] == ' ') {
    i--;
  }
  int end = i;
  while (i >= 0 && s[i] != ' ') {
    i--;
  }
  return end - i;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  char input[] = "Hello World";
  printf("Input:  %s\n", input);
  printf("Output: %d\n", lengthOfLastWord(input));
  return EXIT_SUCCESS;
}
