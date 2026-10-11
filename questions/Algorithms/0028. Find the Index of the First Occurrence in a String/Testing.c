#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------------------- solution begin -------------------------------
int strStr(char *haystack, char *needle) {
  int n = strlen(haystack);
  int m = strlen(needle);
  if (m == 0) {
    return 0;
  }
  for (int i = 0; i + m <= n; i++) {
    int j = 0;
    while (j < m && haystack[i + j] == needle[j]) {
      j++;
    }
    if (j == m) {
      return i;
    }
  }
  return -1;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  char haystack[] = "sadbutsad";
  char needle[] = "sad";
  printf("Input:  %s %s\n", haystack, needle);
  printf("Output: %d\n", strStr(haystack, needle));
  return EXIT_SUCCESS;
}
