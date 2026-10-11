#include <stdio.h>
#include <stdlib.h>

// ------------------------------- solution begin -------------------------------
char **computeSimilarities(int **docs, int docsSize, int *docsColSize, int *returnSize) {
  char **res = (char **)malloc(sizeof(char *) * (docsSize * docsSize + 1));
  *returnSize = 0;
  for (int i = 0; i < docsSize; i++) {
    for (int j = i + 1; j < docsSize; j++) {
      int inter = 0;
      for (int a = 0; a < docsColSize[i]; a++) {
        for (int b = 0; b < docsColSize[j]; b++) {
          if (docs[i][a] == docs[j][b]) {
            inter++;
            break;
          }
        }
      }
      if (inter > 0) {
        int uni = docsColSize[i] + docsColSize[j] - inter;
        char *s = (char *)malloc(64);
        sprintf(s, "%d,%d: %.4f", i, j, (double)inter / uni);
        res[(*returnSize)++] = s;
      }
    }
  }
  return res;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int d0[] = {14, 15, 100, 9, 3};
  int d1[] = {32, 1, 9, 3, 5};
  int d2[] = {15, 29, 2, 6, 8, 7};
  int d3[] = {7, 10};
  int *docs[] = {d0, d1, d2, d3};
  int colSize[] = {5, 5, 6, 2};
  printf("Input:  [[14,15,100,9,3],[32,1,9,3,5],[15,29,2,6,8,7],[7,10]]\n");
  int size = 0;
  char **res = computeSimilarities(docs, 4, colSize, &size);
  printf("Output: [");
  for (int i = 0; i < size; i++) {
    printf("%s\"%s\"", i == 0 ? "" : ", ", res[i]);
    free(res[i]);
  }
  printf("]\n");
  free(res);
  return EXIT_SUCCESS;
}
