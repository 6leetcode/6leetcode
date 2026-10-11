#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------------------- solution begin -------------------------------
int numDecodings(char *s) {
  int n = strlen(s);
  if (n == 0 || s[0] == '0') {
    return 0;
  }
  int pre = 1, cur = 1;
  for (int i = 1; i < n; i++) {
    int tmp = cur;
    if (s[i] == '0') {
      if (s[i - 1] == '1' || s[i - 1] == '2') {
        cur = pre;
      } else {
        return 0;
      }
    } else if (s[i - 1] == '1' || (s[i - 1] == '2' && s[i] >= '1' && s[i] <= '6')) {
      cur = cur + pre;
    }
    pre = tmp;
  }
  return cur;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  char input[] = "226";
  printf("Input:  %s\n", input);
  printf("Output: %d\n", numDecodings(input));
  return EXIT_SUCCESS;
}
