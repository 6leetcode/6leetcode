#include <stdio.h>
#include <stdlib.h>

#include <array.h>

// ------------------------------- solution begin -------------------------------
static int cmp(const void *a, const void *b) {
  return *(int *)a - *(int *)b;
}

int *smallestK(int *arr, int arrSize, int k, int *returnSize) {
  qsort(arr, arrSize, sizeof(int), cmp);
  int *res = (int *)malloc(sizeof(int) * k);
  for (int i = 0; i < k; i++) res[i] = arr[i];
  *returnSize = k;
  return res;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int arr[] = {1, 3, 5, 7, 2, 4, 6, 8};
  int k = 4;
  sds input = array_show(arr, 8);
  printf("Input:  %s, k = %d\n", input, k);
  sdsfree(input);
  int size = 0;
  int *res = smallestK(arr, 8, k, &size);
  sds out = array_show(res, size);
  printf("Output: %s\n", out);
  sdsfree(out);
  free(res);
  return EXIT_SUCCESS;
}
