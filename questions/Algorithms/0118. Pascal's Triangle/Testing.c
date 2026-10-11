#include <stdio.h>
#include <stdlib.h>

#include <matrix.h>

// ------------------------------- solution begin -------------------------------
int **generate(int numRows, int *returnSize, int **returnColumnSizes) {
  *returnSize = numRows;
  int **ans = (int **)malloc(sizeof(int *) * numRows);
  *returnColumnSizes = (int *)malloc(sizeof(int) * numRows);
  for (int i = 0; i < numRows; i++) {
    ans[i] = (int *)malloc(sizeof(int) * (i + 1));
    (*returnColumnSizes)[i] = i + 1;
    ans[i][0] = 1;
    ans[i][i] = 1;
    for (int j = 1; j < i; j++) {
      ans[i][j] = ans[i - 1][j - 1] + ans[i - 1][j];
    }
  }
  return ans;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int input = 5;
  printf("Input:  %d\n", input);
  int returnSize = 0;
  int *cols = NULL;
  int **ans = generate(input, &returnSize, &cols);
  sds output = matrix_show(ans, returnSize, cols);
  printf("Output: %s\n", output);
  sdsfree(output);
  for (int i = 0; i < returnSize; i++) {
    free(ans[i]);
  }
  free(ans);
  free(cols);
  return EXIT_SUCCESS;
}
