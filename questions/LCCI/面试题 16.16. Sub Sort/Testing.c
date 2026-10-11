#include <stdio.h>
#include <stdlib.h>

#include <array.h>

// ------------------------------- solution begin -------------------------------
int *subSort(int *array, int arraySize, int *returnSize) {
  int m = -1, n = -1;
  int max = array[0];
  for (int i = 1; i < arraySize; i++) {
    if (array[i] < max) {
      n = i;
    } else {
      max = array[i];
    }
  }
  int min = array[arraySize - 1];
  for (int i = arraySize - 2; i >= 0; i--) {
    if (array[i] > min) {
      m = i;
    } else {
      min = array[i];
    }
  }
  int *res = (int *)malloc(sizeof(int) * 2);
  res[0] = m;
  res[1] = n;
  *returnSize = 2;
  return res;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int array[] = {1, 2, 4, 7, 10, 11, 7, 12, 6, 7, 16, 18, 19};
  sds input = array_show(array, 13);
  printf("Input:  %s\n", input);
  sdsfree(input);
  int size = 0;
  int *res = subSort(array, 13, &size);
  sds out = array_show(res, size);
  printf("Output: %s\n", out);
  sdsfree(out);
  free(res);
  return EXIT_SUCCESS;
}
