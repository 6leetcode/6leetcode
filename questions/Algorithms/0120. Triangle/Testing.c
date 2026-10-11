#include <stdio.h>
#include <stdlib.h>

#include <matrix.h>

// ------------------------------- solution begin -------------------------------
int minimumTotal(int **triangle, int triangleSize, int *triangleColSize) {
  int *dp = (int *)malloc(sizeof(int) * triangleSize);

  for (int i = triangleSize - 1; i >= 0; i--) {
    for (int j = 0; j <= i; j++) {
      if (i == triangleSize - 1) {
        dp[j] = triangle[i][j];
      } else {
        dp[j] = triangle[i][j] + (dp[j] < dp[j + 1] ? dp[j] : dp[j + 1]);
      }
    }
  }

  int ans = dp[0];
  free(dp);
  return ans;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  {
    int size = 4;
    int cols[] = {1, 2, 3, 4};
    int data[4][4] = {{2}, {3, 4}, {6, 5, 7}, {4, 1, 8, 3}};

    int **triangle = (int **)malloc(sizeof(int *) * size);
    for (int i = 0; i < size; i++) {
      triangle[i] = (int *)malloc(sizeof(int) * cols[i]);
      for (int j = 0; j < cols[i]; j++) {
        triangle[i][j] = data[i][j];
      }
    }

    sds input = matrix_show(triangle, size, cols);
    printf("Input:  %s\n", input);
    sdsfree(input);
    printf("Output: %d\n", minimumTotal(triangle, size, cols));

    for (int i = 0; i < size; i++) free(triangle[i]);
    free(triangle);
  }

  {
    int size = 1;
    int cols[] = {1};

    int **triangle = (int **)malloc(sizeof(int *) * size);
    triangle[0] = (int *)malloc(sizeof(int) * cols[0]);
    triangle[0][0] = -10;

    sds input = matrix_show(triangle, size, cols);
    printf("Input:  %s\n", input);
    sdsfree(input);
    printf("Output: %d\n", minimumTotal(triangle, size, cols));

    free(triangle[0]);
    free(triangle);
  }

  return EXIT_SUCCESS;
}
