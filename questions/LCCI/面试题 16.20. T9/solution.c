#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------------------- solution begin -------------------------------
char **T9(char *num, char **words, int wordsSize, int *returnSize) {
  const char *map[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
  char **res = (char **)malloc(sizeof(char *) * wordsSize);
  *returnSize = 0;
  int numLen = strlen(num);
  for (int i = 0; i < wordsSize; i++) {
    int wl = strlen(words[i]);
    if (wl != numLen) continue;
    bool ok = true;
    for (int j = 0; j < wl; j++) {
      const char *letters = map[num[j] - '0'];
      if (strchr(letters, words[i][j]) == NULL) {
        ok = false;
        break;
      }
    }
    if (ok) res[(*returnSize)++] = words[i];
  }
  return res;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  char *num = "8733";
  char *words[] = {"tree", "used"};
  printf("Input:  num = \"8733\", words = [\"tree\", \"used\"]\n");
  int size = 0;
  char **res = T9(num, words, 2, &size);
  printf("Output: [");
  for (int i = 0; i < size; i++) printf("%s\"%s\"", i == 0 ? "" : ", ", res[i]);
  printf("]\n");
  free(res);
  return EXIT_SUCCESS;
}
