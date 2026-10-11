#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------------------- solution begin -------------------------------
char *longestPalindrome(char *s) {
  int sz;
  int i, j, k, l;
  int where = 0, len = 0;

  if (!s || !*s) return s;

  sz = strlen(s);

  for (i = 0, j = 0, k = 0; len < (sz - k) * 2; i = k, j = k) {
    while (j + 1 < sz && s[j] == s[j + 1]) {
      j++; // skip all repeating characters
    }
    k = j + 1; // where to start next try
    while (i > 0 && j + 1 < sz && s[i - 1] == s[j + 1]) {
      i--; // expand dual direction
      j++;
    }
    l = j - i + 1; // what we have fond so far
    if (len < l) {
      len = l;
      where = i;
    }
  }
  char *news = (char *)malloc(sz + 1);
  memcpy(news, s + where, len);
  news[len] = 0;
  return news;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  char *input = "babad";
  printf("Input:  %s\n", input);
  char *output = longestPalindrome(input);
  printf("Output: %s\n", output);
  free(output);
}
