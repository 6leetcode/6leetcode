#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------------------- solution begin -------------------------------
char *minWindow(char *s, char *t) {
  int need[128] = {0}, have[128] = {0};
  int required = 0;
  for (int i = 0; t[i]; i++) {
    if (need[(int)t[i]] == 0) required++;
    need[(int)t[i]]++;
  }
  int matched = 0, left = 0, start = 0, minLen = INT_MAX;
  for (int right = 0; s[right]; right++) {
    int c = s[right];
    have[c]++;
    if (need[c] > 0 && have[c] == need[c]) matched++;
    while (matched == required) {
      if (right - left + 1 < minLen) {
        minLen = right - left + 1;
        start = left;
      }
      int lc = s[left];
      if (need[lc] > 0 && have[lc] == need[lc]) matched--;
      have[lc]--;
      left++;
    }
  }
  if (minLen == INT_MAX) {
    char *empty = (char *)malloc(1);
    empty[0] = '\0';
    return empty;
  }
  char *res = (char *)malloc(minLen + 1);
  memcpy(res, s + start, minLen);
  res[minLen] = '\0';
  return res;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  char s[] = "ADOBECODEBANC", t[] = "ABC";
  printf("Input:  %s %s\n", s, t);
  char *res = minWindow(s, t);
  printf("Output: %s\n", res);
  free(res);
  return EXIT_SUCCESS;
}
