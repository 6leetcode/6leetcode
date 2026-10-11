#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------------------- solution begin -------------------------------
char **fullJustify(char **words, int wordsSize, int maxWidth, int *returnSize) {
  char **res = (char **)malloc(sizeof(char *) * wordsSize);
  *returnSize = 0;
  int i = 0;
  while (i < wordsSize) {
    int j = i, len = 0;
    while (j < wordsSize && len + (int)strlen(words[j]) + (j - i) <= maxWidth) {
      len += strlen(words[j]);
      j++;
    }
    int count = j - i;
    char *line = (char *)malloc(maxWidth + 1);
    int pos = 0;
    if (j == wordsSize || count == 1) {
      for (int k = i; k < j; k++) {
        int l = strlen(words[k]);
        memcpy(line + pos, words[k], l);
        pos += l;
        if (k != j - 1) line[pos++] = ' ';
      }
      while (pos < maxWidth) line[pos++] = ' ';
    } else {
      int totalChars = 0;
      for (int k = i; k < j; k++) totalChars += strlen(words[k]);
      int gaps = count - 1;
      int spaces = maxWidth - totalChars;
      int base = spaces / gaps;
      int extra = spaces % gaps;
      for (int k = i; k < j; k++) {
        int l = strlen(words[k]);
        memcpy(line + pos, words[k], l);
        pos += l;
        if (k != j - 1) {
          int sp = base + (k - i < extra ? 1 : 0);
          for (int t = 0; t < sp; t++) line[pos++] = ' ';
        }
      }
    }
    line[maxWidth] = '\0';
    res[(*returnSize)++] = line;
    i = j;
  }
  return res;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  char *words[] = {"This", "is", "an", "example", "of", "text", "justification."};
  int wordsSize = 7, maxWidth = 16;
  printf("Input:  [This, is, an, example, of, text, justification.] %d\n", maxWidth);
  int size = 0;
  char **res = fullJustify(words, wordsSize, maxWidth, &size);
  printf("Output: [");
  for (int i = 0; i < size; i++) {
    printf("%s\"%s\"", i == 0 ? "" : ", ", res[i]);
    free(res[i]);
  }
  printf("]\n");
  free(res);
  return EXIT_SUCCESS;
}
