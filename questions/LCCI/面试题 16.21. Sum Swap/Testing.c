#include <stdio.h>
#include <stdlib.h>

#include <array.h>

// ------------------------------- solution begin -------------------------------
int *findSwapValues(int *array1, int array1Size, int *array2, int array2Size, int *returnSize) {
  long long sum1 = 0, sum2 = 0;
  for (int i = 0; i < array1Size; i++) sum1 += array1[i];
  for (int j = 0; j < array2Size; j++) sum2 += array2[j];
  long long diff = sum2 - sum1;
  if (diff % 2 != 0) {
    *returnSize = 0;
    return NULL;
  }
  long long target = diff / 2;
  for (int i = 0; i < array1Size; i++) {
    long long need = array1[i] + target;
    for (int j = 0; j < array2Size; j++) {
      if (array2[j] == need) {
        int *res = (int *)malloc(sizeof(int) * 2);
        res[0] = array1[i];
        res[1] = array2[j];
        *returnSize = 2;
        return res;
      }
    }
  }
  *returnSize = 0;
  return NULL;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int a1[] = {4, 1, 2, 1, 1, 2};
  int a2[] = {3, 6, 3, 3};
  sds s1 = array_show(a1, 6), s2 = array_show(a2, 4);
  printf("Input:  array1 = %s, array2 = %s\n", s1, s2);
  sdsfree(s1);
  sdsfree(s2);
  int size = 0;
  int *res = findSwapValues(a1, 6, a2, 4, &size);
  if (size == 0) {
    printf("Output: []\n");
  } else {
    printf("Output: [%d, %d]\n", res[0], res[1]);
    free(res);
  }
  return EXIT_SUCCESS;
}
