#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------------------- solution begin -------------------------------
static int diffOne(const char *a, const char *b) {
  int diff = 0;
  for (int i = 0; a[i]; i++) {
    if (a[i] != b[i]) diff++;
  }
  return diff;
}

char **findLadders(char *beginWord, char *endWord, char **wordList, int wordListSize, int *returnSize) {
  char **words = (char **)malloc(sizeof(char *) * (wordListSize + 1));
  int n = 0;
  words[n++] = beginWord;
  for (int i = 0; i < wordListSize; i++) words[n++] = wordList[i];
  int foundEnd = 0;
  for (int i = 0; i < n; i++) {
    if (strcmp(words[i], endWord) == 0) foundEnd = 1;
  }
  *returnSize = 0;
  if (!foundEnd) return NULL;
  char **res = (char **)malloc(sizeof(char *) * (n + 1));
  int *prev = (int *)malloc(sizeof(int) * n);
  int *dist = (int *)malloc(sizeof(int) * n);
  for (int i = 0; i < n; i++) {
    prev[i] = -1;
    dist[i] = -1;
  }
  int *queue = (int *)malloc(sizeof(int) * n);
  int head = 0, tail = 0;
  queue[tail++] = 0;
  dist[0] = 0;
  int endIdx = -1;
  while (head < tail) {
    int u = queue[head++];
    if (strcmp(words[u], endWord) == 0) {
      endIdx = u;
      break;
    }
    for (int v = 0; v < n; v++) {
      if (dist[v] == -1 && diffOne(words[u], words[v]) == 1) {
        dist[v] = dist[u] + 1;
        prev[v] = u;
        queue[tail++] = v;
      }
    }
  }
  if (endIdx == -1) return NULL;
  int len = 0;
  int cur = endIdx;
  while (cur != -1) {
    res[len++] = words[cur];
    cur = prev[cur];
  }
  for (int i = 0; i < len / 2; i++) {
    char *t = res[i];
    res[i] = res[len - 1 - i];
    res[len - 1 - i] = t;
  }
  *returnSize = len;
  free(prev);
  free(dist);
  free(queue);
  free(words);
  return res;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  char beginWord[] = "hit";
  char endWord[] = "cog";
  char *wordList[] = {"hot", "dot", "dog", "lot", "log", "cog"};
  printf("Input:  beginWord = \"hit\", endWord = \"cog\", wordList = [\"hot\",\"dot\",\"dog\",\"lot\",\"log\",\"cog\"]\n");
  int size = 0;
  char **res = findLadders(beginWord, endWord, wordList, 6, &size);
  printf("Output: [");
  for (int i = 0; i < size; i++) printf("%s\"%s\"", i == 0 ? "" : ", ", res[i]);
  printf("]\n");
  free(res);
  return EXIT_SUCCESS;
}
