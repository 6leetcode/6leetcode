#include <stdio.h>

void array_show(int* arr, int size) {
  printf("[");
  if (size == 0) {
    printf(" ");
  } else if (size == 1) {
    printf("%d", arr[0]);
  } else {
    printf("%d", arr[0]);
    for (int i = 1; i < size; ++i) {
      printf(", %d", arr[i]);
    }
  }
  printf("]");
}
