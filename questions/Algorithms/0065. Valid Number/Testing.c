#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------------------- solution begin -------------------------------
bool isNumber(char *s) {
  while (*s == ' ') s++;
  int len = strlen(s);
  while (len > 0 && s[len - 1] == ' ') len--;

  int i = 0;
  bool seenDigit = false, seenDot = false, seenExp = false;
  if (i < len && (s[i] == '+' || s[i] == '-')) i++;
  for (; i < len; i++) {
    char c = s[i];
    if (c >= '0' && c <= '9') {
      seenDigit = true;
    } else if (c == '.') {
      if (seenDot || seenExp) return false;
      seenDot = true;
    } else if (c == 'e' || c == 'E') {
      if (seenExp || !seenDigit) return false;
      seenExp = true;
      seenDigit = false;
      if (i + 1 < len && (s[i + 1] == '+' || s[i + 1] == '-')) i++;
    } else {
      return false;
    }
  }
  return seenDigit;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  char input[] = "2e10";
  printf("Input:  %s\n", input);
  printf("Output: %s\n", isNumber(input) ? "true" : "false");
  return EXIT_SUCCESS;
}
