#include <stdio.h>
#include <stdlib.h>

#include <array.h>

// ------------------------------- solution begin -------------------------------
int *getRow(int rowIndex, int *returnSize) {
  int n = rowIndex + 1;
  int *row = (int *)malloc(sizeof(int) * n);
  row[0] = 1;
  for (int i = 1; i <= rowIndex; i++) {
    row[i] = 1;
    for (int j = i - 1; j >= 1; j--) {
      row[j] = row[j] + row[j - 1];
    }
  }
  *returnSize = n;
  return row;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int cases[] = {3, 0, 1, 4};
  int count = sizeof(cases) / sizeof(cases[0]);

  for (int i = 0; i < count; i++) {
    int returnSize = 0;
    int *row = getRow(cases[i], &returnSize);
    sds output = array_show(row, returnSize);
    printf("Input:  %d\n", cases[i]);
    printf("Output: %s\n", output);
    sdsfree(output);
    free(row);
  }

  return EXIT_SUCCESS;
}
