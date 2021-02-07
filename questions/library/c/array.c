#include <stdio.h>
#include <stdlib.h>

#include <array.h>

int main(int argc, char const *argv[]) {
  int size = 4;
  int *arr = (int *)malloc(sizeof(int) * size);
  for (int i = 0; i < size; ++i) {
    arr[i] = i;
  }
  sds str = array_show(arr, size);
  printf("%s\n", str);
  sdsfree(str);
  free(arr);
  return EXIT_SUCCESS;
}
