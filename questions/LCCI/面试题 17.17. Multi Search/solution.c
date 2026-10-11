#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------------------- solution begin -------------------------------
int **multiSearch(char *big, char **smalls, int smallsSize, int *returnSize, int **returnColumnSizes) {
  int bl = strlen(big);
  int **res = (int **)malloc(sizeof(int *) * smallsSize);
  *returnColumnSizes = (int *)malloc(sizeof(int) * smallsSize);
  *returnSize = smallsSize;
  for (int i = 0; i < smallsSize; i++) {
    int sl = strlen(smalls[i]);
    int *pos = (int *)malloc(sizeof(int) * (bl + 1));
    int count = 0;
    if (sl > 0) {
      for (int j = 0; j + sl <= bl; j++) {
        if (strncmp(big + j, smalls[i], sl) == 0) pos[count++] = j;
      }
    }
    res[i] = pos;
    (*returnColumnSizes)[i] = count;
  }
  return res;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  char big[] = "mississippi";
  char *smalls[] = {"is", "ppi", "hi", "sis", "i", "ssippi"};
  printf("Input:  big = \"mississippi\", smalls = [\"is\",\"ppi\",\"hi\",\"sis\",\"i\",\"ssippi\"]\n");
  int size = 0;
  int *cols = NULL;
  int **res = multiSearch(big, smalls, 6, &size, &cols);
  printf("Output: [");
  for (int i = 0; i < size; i++) {
    printf("%s[", i == 0 ? "" : ", ");
    for (int j = 0; j < cols[i]; j++) printf("%s%d", j == 0 ? "" : ",", res[i][j]);
    printf("]");
    free(res[i]);
  }
  printf("]\n");
  free(res);
  free(cols);
  return EXIT_SUCCESS;
}
