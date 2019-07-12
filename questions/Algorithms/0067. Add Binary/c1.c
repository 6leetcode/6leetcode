#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *addBinary(char *a, char *b) {
  int len_a = strlen(a);
  int len_b = strlen(b);

  int len    = len_a > len_b ? len_a + 1 : len_b + 1;
  int length = len;

  char *res = (char *)malloc(len * (sizeof(char)));
  memset(res, '\0', len);

  int upper = 0;
  while (len_a > 0 || len_b > 0) {
    int an = len_a > 0 ? a[--len_a] - '0' : 0;
    int bn = len_b > 0 ? b[--len_b] - '0' : 0;
    if (an + bn + upper == 3) {
      res[len - 2] = 49;
      upper        = 1;
    } else if (an + bn + upper == 2) {
      res[len - 2] = 48;
      upper        = 1;
    } else if (an + bn + upper == 1) {
      res[len - 2] = 49;
      upper        = 0;
    } else if (an + bn + upper == 0) {
      res[len - 2] = 48;
      upper        = 0;
    }
    len--;
  }
  if (upper == 1) {
    res = (char *)realloc(res, (length + 1) * (sizeof(char)));
    memmove(res + 1, res, length * sizeof(char));
    res[0] = '1';
  }
  return res;
}

int main(int argc, char const *argv[]) {
  char *input1 = "1011";
  char *input2 = "111";
  printf("Input:  %s %s\n", input1, input2);
  char *output = addBinary(input1, input2);
  printf("Output: %s\n", output);
  free(output);
  return EXIT_SUCCESS;
}
