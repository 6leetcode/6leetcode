#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ZONE 5

void alloc(char *point, size_t *size) {
  *size += ZONE;
  if (point == NULL) {
    point = malloc((size_t)ZONE * sizeof(char));
  }
  point = realloc(point, *size);
}

int main(int argc, char const *argv[]) {
  int n = 17112;

  int i = 0;

  size_t size = ZONE;

  char *str = NULL;
  alloc(str, &size);

  while (n) {
    if (i + 1 > size) {
      alloc(str, &size);
    }
    if (n & 1) {
      str[i] = '1';
    } else {
      str[i] = '0';
    }
    i++;
    n >>= 1;
  }
  if (i + 1 > size) {
    alloc(str, &size);
  }
  str[i] = '\0';
  // for (size_t i = 0; i < size; i++) {
  //   printf("%c", str[i]);
  // }

  printf("%s, %lu\n", str, strlen(str));
  printf("\n");
  return 0;
}
