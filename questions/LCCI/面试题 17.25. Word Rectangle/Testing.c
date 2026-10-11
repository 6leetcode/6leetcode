#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------------------- solution begin -------------------------------
static char **wordsByLen[128];
static int countByLen[128];
static char *rows[128];
static int rowCount;
static char **best;
static int bestCount;
static int bestArea;
static int targetW, targetH;

static bool prefixOk(void) {
  for (int c = 0; c < targetW; c++) {
    char prefix[256];
    for (int r = 0; r < rowCount; r++) prefix[r] = rows[r][c];
    prefix[rowCount] = '\0';
    bool ok = false;
    for (int i = 0; i < countByLen[targetH]; i++) {
      if (strncmp(wordsByLen[targetH][i], prefix, rowCount) == 0) {
        ok = true;
        break;
      }
    }
    if (!ok) return false;
  }
  return true;
}

static void backtrack(void) {
  if (rowCount == targetH) {
    for (int c = 0; c < targetW; c++) {
      char col[256];
      for (int r = 0; r < targetH; r++) col[r] = rows[r][c];
      col[targetH] = '\0';
      bool ok = false;
      for (int i = 0; i < countByLen[targetH]; i++) {
        if (strcmp(wordsByLen[targetH][i], col) == 0) {
          ok = true;
          break;
        }
      }
      if (!ok) return;
    }
    if (targetW * targetH > bestArea) {
      bestArea = targetW * targetH;
      bestCount = targetH;
      for (int i = 0; i < targetH; i++) best[i] = rows[i];
    }
    return;
  }
  for (int i = 0; i < countByLen[targetW]; i++) {
    rows[rowCount++] = wordsByLen[targetW][i];
    if (prefixOk()) backtrack();
    rowCount--;
  }
}

char **maxRectangle(char **words, int wordsSize, int *returnSize) {
  for (int i = 0; i < 128; i++) countByLen[i] = 0;
  for (int i = 0; i < wordsSize; i++) {
    int l = strlen(words[i]);
    wordsByLen[l] = (char **)realloc(wordsByLen[l], sizeof(char *) * (countByLen[l] + 1));
    wordsByLen[l][countByLen[l]++] = words[i];
  }
  best = (char **)malloc(sizeof(char *) * 128);
  bestArea = 0;
  bestCount = 0;
  for (int w = 1; w < 128; w++) {
    for (int h = 1; h < 128; h++) {
      if (countByLen[w] == 0 || countByLen[h] == 0) continue;
      if (w * h <= bestArea) continue;
      targetW = w;
      targetH = h;
      rowCount = 0;
      backtrack();
    }
  }
  *returnSize = bestCount;
  return best;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  char *words[] = {"this", "real", "hard", "trh", "hea", "iar", "sld"};
  printf("Input:  [\"this\", \"real\", \"hard\", \"trh\", \"hea\", \"iar\", \"sld\"]\n");
  int size = 0;
  char **res = maxRectangle(words, 7, &size);
  printf("Output: [");
  for (int i = 0; i < size; i++) printf("%s\"%s\"", i == 0 ? "" : ", ", res[i]);
  printf("]\n");
  free(best);
  return EXIT_SUCCESS;
}
