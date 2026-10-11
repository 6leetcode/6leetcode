#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------------------- solution begin -------------------------------
char *freqAlphabets(char *s) {
  int n = strlen(s);
  char *res = (char *)malloc(n + 1);
  int p = 0;
  for (int i = 0; i < n; i++) {
    if (i + 2 < n && s[i + 2] == '#') {
      int num = (s[i] - '0') * 10 + (s[i + 1] - '0');
      res[p++] = 'a' + num - 1;
      i += 2;
    } else {
      res[p++] = 'a' + (s[i] - '0') - 1;
    }
  }
  res[p] = '\0';
  return res;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  char input[] = "12345678910#11#12#13#14#15#16#17#18#19#20#21#22#23#24#25#26#";
  printf("Input:  %s\n", input);
  char *res = freqAlphabets(input);
  printf("Output: %s\n", res);
  free(res);
  return EXIT_SUCCESS;
}
