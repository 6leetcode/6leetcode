#include <stdio.h>
#include <stdlib.h>

// ------------------------------- solution begin -------------------------------
char **findLongestSubarray(char **array, int arraySize, int *returnSize) {
  int *prefix = (int *)malloc(sizeof(int) * (arraySize + 1));
  prefix[0] = 0;
  for (int i = 0; i < arraySize; i++) {
    char c = array[i][0];
    int d = (c >= '0' && c <= '9') ? -1 : 1;
    prefix[i + 1] = prefix[i] + d;
  }
  int size = 2 * arraySize + 3;
  int *first = (int *)malloc(sizeof(int) * size);
  for (int i = 0; i < size; i++) first[i] = -1;
  int offset = arraySize + 1;
  int bestLen = 0, bestStart = 0;
  for (int i = 0; i <= arraySize; i++) {
    int idx = prefix[i] + offset;
    if (first[idx] == -1) {
      first[idx] = i;
    } else {
      int len = i - first[idx];
      if (len > bestLen) {
        bestLen = len;
        bestStart = first[idx];
      }
    }
  }
  char **res = (char **)malloc(sizeof(char *) * (bestLen > 0 ? bestLen : 1));
  for (int i = 0; i < bestLen; i++) res[i] = array[bestStart + i];
  *returnSize = bestLen;
  free(prefix);
  free(first);
  return res;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  char *array[] = {"A", "1", "B", "C", "D", "2", "3", "4", "E", "5", "F", "G", "6", "7", "H", "I", "J", "K", "L", "M"};
  printf("Input:  [\"A\",\"1\",\"B\",\"C\",\"D\",\"2\",\"3\",\"4\",\"E\",\"5\",\"F\",\"G\",\"6\",\"7\",\"H\",\"I\",\"J\",\"K\",\"L\",\"M\"]\n");
  int size = 0;
  char **res = findLongestSubarray(array, 20, &size);
  printf("Output: [");
  for (int i = 0; i < size; i++) printf("%s\"%s\"", i == 0 ? "" : ", ", res[i]);
  printf("]\n");
  free(res);
  return EXIT_SUCCESS;
}
