#include <stdio.h>
#include <stdlib.h>

// ------------------------------- solution begin -------------------------------
static int dp[3000];

int cmpBox(const void *a, const void *b) {
  int *x = *(int **)a, *y = *(int **)b;
  return x[0] - y[0];
}

int pileBox(int **box, int boxSize, int *boxColSize) {
  (void)boxColSize;
  qsort(box, boxSize, sizeof(int *), cmpBox);
  int best = 0;
  for (int i = 0; i < boxSize; i++) {
    dp[i] = box[i][2];
    for (int j = 0; j < i; j++) {
      if (box[j][0] < box[i][0] && box[j][1] < box[i][1] && box[j][2] < box[i][2]) {
        if (dp[j] + box[i][2] > dp[i]) dp[i] = dp[j] + box[i][2];
      }
    }
    if (dp[i] > best) best = dp[i];
  }
  return best;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int rows = 3;
  int data[3][3] = {{1, 1, 1}, {2, 2, 2}, {3, 3, 3}};
  int **box = (int **)malloc(sizeof(int *) * rows);
  int *colSize = (int *)malloc(sizeof(int) * rows);
  for (int i = 0; i < rows; i++) {
    box[i] = (int *)malloc(sizeof(int) * 3);
    colSize[i] = 3;
    for (int j = 0; j < 3; j++) box[i][j] = data[i][j];
  }
  printf("Input:  [[1,1,1],[2,2,2],[3,3,3]]\n");
  printf("Output: %d\n", pileBox(box, rows, colSize));
  for (int i = 0; i < rows; i++) free(box[i]);
  free(box);
  free(colSize);
  return EXIT_SUCCESS;
}
