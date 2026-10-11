#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------------------- solution begin -------------------------------
int numberOfSubstrings(char *s) {
  int a = 0, b = 0, c = 0, l = 0, ans = 0;
  for (int r = 0; s[r]; r++) {
    if (s[r] == 'a') a++;
    if (s[r] == 'b') b++;
    if (s[r] == 'c') c++;
    while (a > 1 || b > 1 || c > 1) {
      if (s[l] == 'a' && a > 1) {
        a--;
        l++;
      } else if (s[l] == 'b' && b > 1) {
        b--;
        l++;
      } else if (s[l] == 'c' && c > 1) {
        c--;
        l++;
      } else {
        break;
      }
    }
    if (a && b && c) {
      ans += l + 1;
    }
  }
  return ans;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  char input[] = "abcabc";
  printf("Input:  %s\n", input);
  printf("Output: %d\n", numberOfSubstrings(input));
  return EXIT_SUCCESS;
}
