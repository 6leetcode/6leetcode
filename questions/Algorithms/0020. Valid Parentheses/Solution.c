#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------------------- solution begin -------------------------------
char pairs(char a) {
  if (a == '}') return '{';
  if (a == ']') return '[';
  if (a == ')') return '(';
  return 0;
}

bool isValid(char *s) {
  int n = strlen(s);
  if (n % 2 == 1) {
    return false;
  }
  int stk[n + 1], top = 0;
  for (int i = 0; i < n; i++) {
    char ch = pairs(s[i]);
    if (ch) {
      if (top == 0 || stk[top - 1] != ch) {
        return false;
      }
      top--;
    } else {
      stk[top++] = s[i];
    }
  }
  return top == 0;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  char input[] = "()[]{}";
  printf("Input:  %s\n", input);
  printf("Output: %s\n", isValid(input) ? "true" : "false");
  return EXIT_SUCCESS;
}
