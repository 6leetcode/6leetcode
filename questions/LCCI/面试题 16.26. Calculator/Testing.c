#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------------------- solution begin -------------------------------
int calculate(char *s) {
  int n = strlen(s);
  long long result = 0, prev = 0, cur = 0;
  char op = '+';
  for (int i = 0; i <= n; i++) {
    if (i < n && s[i] >= '0' && s[i] <= '9') {
      cur = cur * 10 + (s[i] - '0');
    } else if (i == n || s[i] != ' ') {
      if (op == '+') {
        result += prev;
        prev = cur;
      } else if (op == '-') {
        result += prev;
        prev = -cur;
      } else if (op == '*') {
        prev *= cur;
      } else if (op == '/') {
        prev /= cur;
      }
      if (i < n) op = s[i];
      cur = 0;
    }
  }
  return (int)(result + prev);
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  char input[] = "3+2*2";
  printf("Input:  \"%s\"\n", input);
  printf("Output: %d\n", calculate(input));
  return EXIT_SUCCESS;
}
