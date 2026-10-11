#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------------------- solution begin -------------------------------
char *countAndSay(int n) {
  char *cur = (char *)malloc(5000);
  strcpy(cur, "1");
  for (int k = 1; k < n; k++) {
    char *next = (char *)malloc(5000);
    int p = 0, len = strlen(cur);
    for (int i = 0; i < len;) {
      int j = i;
      while (j < len && cur[j] == cur[i]) {
        j++;
      }
      p += sprintf(next + p, "%d%c", j - i, cur[i]);
      i = j;
    }
    free(cur);
    cur = next;
  }
  return cur;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int input = 4;
  printf("Input:  %d\n", input);
  char *res = countAndSay(input);
  printf("Output: %s\n", res);
  free(res);
  return EXIT_SUCCESS;
}
