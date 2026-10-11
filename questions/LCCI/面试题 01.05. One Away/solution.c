#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------------------- solution begin -------------------------------
bool oneEditAway(char *first, char *second) {
  int m = strlen(first), n = strlen(second);
  if (abs(m - n) > 1) return false;
  if (m > n) {
    char *tmp = first;
    first = second;
    second = tmp;
    int t = m;
    m = n;
    n = t;
  }
  for (int i = 0; i < m; i++) {
    if (first[i] != second[i]) {
      if (m == n) return strcmp(first + i + 1, second + i + 1) == 0;
      return strcmp(first + i, second + i + 1) == 0;
    }
  }
  return true;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  char first[] = "pale", second[] = "ple";
  printf("Input:  %s %s\n", first, second);
  printf("Output: %s\n", oneEditAway(first, second) ? "true" : "false");
  return 0;
}
