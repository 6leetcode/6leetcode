#include <stdbool.h>
#include <stdio.h>
#include <string.h>

// ------------------------------- solution begin -------------------------------
bool canWin(char *s) {
  int n = strlen(s);
  for (int i = 1; i < n; i++) {
    if (s[i] == '+' && s[i - 1] == '+') {
      s[i] = s[i - 1] = '-';
      bool win = !canWin(s);
      s[i] = s[i - 1] = '+';
      if (win) {
        return true;
      }
    }
  }
  return false;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  char input[] = "++++";
  printf("Input:  %s\n", input);
  printf("Output: %s\n", canWin(input) ? "true" : "false");
  return 0;
}
