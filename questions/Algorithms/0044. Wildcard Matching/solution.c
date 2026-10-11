#include <stdbool.h>
#include <stdio.h>
#include <string.h>

// ------------------------------- solution begin -------------------------------
bool isMatch(char *s, char *p) {
  int sIdx = 0, pIdx = 0, match = 0, star = -1;
  int sLen = strlen(s), pLen = strlen(p);
  while (sIdx < sLen) {
    if (pIdx < pLen && (p[pIdx] == '?' || p[pIdx] == s[sIdx])) {
      sIdx++;
      pIdx++;
    } else if (pIdx < pLen && p[pIdx] == '*') {
      star = pIdx;
      match = sIdx;
      pIdx++;
    } else if (star != -1) {
      pIdx = star + 1;
      match++;
      sIdx = match;
    } else {
      return false;
    }
  }
  while (pIdx < pLen && p[pIdx] == '*') {
    pIdx++;
  }
  return pIdx == pLen;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  char s[] = "aa";
  char p[] = "*";
  printf("Input:  %s %s\n", s, p);
  printf("Output: %s\n", isMatch(s, p) ? "true" : "false");
  return 0;
}
