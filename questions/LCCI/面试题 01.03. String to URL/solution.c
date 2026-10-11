#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------------------- solution begin -------------------------------
char *replaceSpaces(char *S, int length) {
  char *res = (char *)malloc(length * 3 + 1);
  int p = 0;
  for (int i = 0; i < length; i++) {
    if (S[i] == ' ') {
      res[p++] = '%';
      res[p++] = '2';
      res[p++] = '0';
    } else {
      res[p++] = S[i];
    }
  }
  res[p] = '\0';
  return res;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  char input[] = "Mr John Smith ";
  int length = 13;
  printf("Input:  \"%s\", %d\n", input, length);
  char *res = replaceSpaces(input, length);
  printf("Output: \"%s\"\n", res);
  free(res);
  return EXIT_SUCCESS;
}
