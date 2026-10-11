#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXN 512
#define MAXLEN 16
#define MAXP 256

// ------------------------------- solution begin -------------------------------
static char words[MAXN][MAXLEN];
static bool visited[MAXN];
static int parents[MAXN][MAXN];
static int parentCount[MAXN];
static int path[MAXN];
static int pathLen;
static char results[MAXP][MAXN][MAXLEN];
static int resultLen[MAXP];
static int resultCount;

static char *dupStr(const char *s) {
  int len = (int)strlen(s);
  char *r = (char *)malloc(len + 1);
  memcpy(r, s, len + 1);
  return r;
}

static int oneDiff(const char *a, const char *b) {
  if (strlen(a) != strlen(b)) return 0;
  int diff = 0;
  for (int i = 0; a[i]; i++) {
    if (a[i] != b[i]) {
      diff++;
      if (diff > 1) return 0;
    }
  }
  return diff == 1;
}

static void dfs(int u, int beginIdx) {
  path[pathLen++] = u;
  if (u == beginIdx) {
    if (resultCount < MAXP) {
      resultLen[resultCount] = pathLen;
      for (int i = 0; i < pathLen; i++) {
        strcpy(results[resultCount][i], words[path[pathLen - 1 - i]]);
      }
      resultCount++;
    }
    pathLen--;
    return;
  }
  for (int i = 0; i < parentCount[u]; i++) {
    dfs(parents[u][i], beginIdx);
  }
  pathLen--;
}

char ***findLadders(char *beginWord, char *endWord, char **wordList, int wordListSize,
                    int *returnSize, int **returnColumnSizes) {
  resultCount = 0;
  pathLen = 0;

  int m = 0;
  strcpy(words[m++], beginWord);
  for (int i = 0; i < wordListSize; i++) {
    strcpy(words[m++], wordList[i]);
  }

  int endIdx = -1;
  for (int i = 1; i < m; i++) {
    if (strcmp(words[i], endWord) == 0) {
      endIdx = i;
      break;
    }
  }

  *returnSize = 0;
  *returnColumnSizes = NULL;
  if (endIdx == -1) return NULL;

  for (int i = 0; i < m; i++) {
    visited[i] = false;
    parentCount[i] = 0;
  }
  visited[0] = true;

  static int curLevel[MAXN];
  static int nextLevel[MAXN];
  int curCount = 1;
  curLevel[0] = 0;
  bool found = false;

  while (curCount > 0 && !found) {
    int nextCount = 0;
    for (int ci = 0; ci < curCount; ci++) {
      int u = curLevel[ci];
      for (int v = 0; v < m; v++) {
        if (v == u || visited[v]) continue;
        if (!oneDiff(words[u], words[v])) continue;
        parents[v][parentCount[v]++] = u;
        bool present = false;
        for (int t = 0; t < nextCount; t++) {
          if (nextLevel[t] == v) {
            present = true;
            break;
          }
        }
        if (!present) nextLevel[nextCount++] = v;
      }
    }
    for (int t = 0; t < nextCount; t++) {
      visited[nextLevel[t]] = true;
      if (nextLevel[t] == endIdx) found = true;
    }
    for (int t = 0; t < nextCount; t++) {
      curLevel[t] = nextLevel[t];
    }
    curCount = nextCount;
  }

  if (!found) return NULL;

  dfs(endIdx, 0);

  char ***res = (char ***)malloc(sizeof(char **) * resultCount);
  int *colSizes = (int *)malloc(sizeof(int) * resultCount);
  for (int i = 0; i < resultCount; i++) {
    res[i] = (char **)malloc(sizeof(char *) * resultLen[i]);
    for (int j = 0; j < resultLen[i]; j++) {
      res[i][j] = dupStr(results[i][j]);
    }
    colSizes[i] = resultLen[i];
  }

  *returnSize = resultCount;
  *returnColumnSizes = colSizes;
  return res;
}
// ------------------------------- solution end ---------------------------------

static void showWords(char **list, int n) {
  printf("[");
  for (int i = 0; i < n; i++) {
    if (i) printf(", ");
    printf("\"%s\"", list[i]);
  }
  printf("]");
}

static void printPaths(char ***res, int size, int *cols) {
  printf("[");
  for (int i = 0; i < size; i++) {
    if (i) printf(", ");
    printf("[");
    for (int j = 0; j < cols[i]; j++) {
      if (j) printf(", ");
      printf("\"%s\"", res[i][j]);
    }
    printf("]");
  }
  printf("]\n");
}

static void freePaths(char ***res, int size, int *cols) {
  if (res) {
    for (int i = 0; i < size; i++) {
      for (int j = 0; j < cols[i]; j++) {
        free(res[i][j]);
      }
      free(res[i]);
    }
    free(res);
  }
  free(cols);
}

int main(int argc, char const *argv[]) {
  char *list1[] = {"hot", "dot", "dog", "lot", "log", "cog"};
  char *list2[] = {"hot", "dot", "dog", "lot", "log"};

  int size1, size2;
  int *cols1, *cols2;

  char ***res1 = findLadders("hit", "cog", list1, 6, &size1, &cols1);
  printf("Input:  beginWord = \"hit\", endWord = \"cog\", wordList = ");
  showWords(list1, 6);
  printf("\n");
  printf("Output: ");
  printPaths(res1, size1, cols1);
  freePaths(res1, size1, cols1);

  char ***res2 = findLadders("hit", "cog", list2, 5, &size2, &cols2);
  printf("Input:  beginWord = \"hit\", endWord = \"cog\", wordList = ");
  showWords(list2, 5);
  printf("\n");
  printf("Output: ");
  printPaths(res2, size2, cols2);
  freePaths(res2, size2, cols2);

  return EXIT_SUCCESS;
}
