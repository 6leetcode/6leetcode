#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int binary_size = 5;

int main(int argc, char const *argv[]) {
  int n = 17112;

  int i = 0;

  char *str = (char *)malloc(binary_size * sizeof(char));
  int size  = binary_size;
  while (n) {
    if (i + 1 > size) {
      str = (char *)realloc(str, size + binary_size * sizeof(char));
      size += binary_size;
    }
    if (n & 1) {
      str[i] = '1';
    } else {
      str[i] = '0';
    }
    i++;
    n >>= 1;
  }
  for (size_t i = 0; i < size; i++) {
    printf("%c", str[i]);
  }
  printf("\n");
  free(str);

  return 0;
}
