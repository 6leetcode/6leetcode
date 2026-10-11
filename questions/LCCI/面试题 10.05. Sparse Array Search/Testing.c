#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------------------- solution begin -------------------------------
int findString(char **words, int wordsSize, char *s) {
  int lo = 0, hi = wordsSize - 1;
  while (lo <= hi) {
    int mid = lo + (hi - lo) / 2;
    int m = mid;
    while (m < hi && words[m][0] == '\0') m++;
    if (words[m][0] == '\0') {
      hi = mid - 1;
      continue;
    }
    int cmp = strcmp(words[m], s);
    if (cmp == 0) return m;
    if (cmp < 0) {
      lo = m + 1;
    } else {
      hi = mid - 1;
    }
  }
  return -1;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  char *words[] = {"at", "", "", "", "ball", "", "", "car", "", "", "dad", "", ""};
  int size = 13;
  char s[] = "ball";
  printf("Input:  [\"at\", \"\", \"\", \"\", \"ball\", \"\", \"\", \"car\", \"\", \"\", \"dad\", \"\", \"\"], s = \"ball\"\n");
  printf("Output: %d\n", findString(words, size, s));
  return EXIT_SUCCESS;
}
