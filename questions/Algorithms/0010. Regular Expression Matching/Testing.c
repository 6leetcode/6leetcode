#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------------------- solution begin -------------------------------
bool isMatch(char *s, char *p) {
  if (*p == '\0') {
    return *s == '\0';
  }

  bool first_match = (*s != '\0') && (*s == *p || *p == '.');

  if (p[1] == '*') {
    return isMatch(s, p + 2) || (first_match && isMatch(s + 1, p));
  } else {
    return first_match && isMatch(s + 1, p + 1);
  }
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  char *input1 = "aab";
  char *input2 = "c*a*b";
  printf("Input:  %s %s\n", input1, input2);
  printf("Output: %s\n", isMatch(input1, input2) ? "true" : "false");
  return EXIT_SUCCESS;
}
