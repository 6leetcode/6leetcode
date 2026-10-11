#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------------------- solution begin -------------------------------
char *printBin(double num) {
  char *res = (char *)malloc(40);
  strcpy(res, "0.");
  int len = 2;
  while (num > 0 && len < 32) {
    num *= 2;
    if (num >= 1) {
      res[len++] = '1';
      num -= 1;
    } else {
      res[len++] = '0';
    }
  }
  res[len] = '\0';
  if (num > 0) strcpy(res, "ERROR");
  return res;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  double input = 0.625;
  printf("Input:  %g\n", input);
  char *res = printBin(input);
  printf("Output: %s\n", res);
  free(res);
  return EXIT_SUCCESS;
}
