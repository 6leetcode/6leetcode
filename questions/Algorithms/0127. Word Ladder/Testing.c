#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------------------- solution begin -------------------------------
int ladderLength(char *beginWord, char *endWord, char **wordList, int wordListSize) {
  int hasEnd = 0;
  for (int i = 0; i < wordListSize; i++) {
    if (strcmp(wordList[i], endWord) == 0) hasEnd = 1;
  }
  if (!hasEnd) return 0;

  bool *used = (bool *)calloc(wordListSize, sizeof(bool));
  char(*queue)[16] = malloc(sizeof(char) * 16 * (wordListSize + 1));
  int head = 0, tail = 0;
  strcpy(queue[tail++], beginWord);

  int level = 1;
  int result = 0;

  while (head < tail) {
    int levelSize = tail - head;
    for (int i = 0; i < levelSize; i++) {
      char *word = queue[head++];
      if (strcmp(word, endWord) == 0) {
        result = level;
        break;
      }
      int len = (int)strlen(word);
      for (int j = 0; j < len; j++) {
        char origin = word[j];
        for (char c = 'a'; c <= 'z'; c++) {
          if (c == origin) continue;
          word[j] = c;
          for (int k = 0; k < wordListSize; k++) {
            if (!used[k] && strcmp(wordList[k], word) == 0) {
              used[k] = true;
              strcpy(queue[tail++], wordList[k]);
              break;
            }
          }
        }
        word[j] = origin;
      }
    }
    if (result) break;
    level++;
  }

  free(used);
  free(queue);
  return result;
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

int main(int argc, char const *argv[]) {
  char *list1[] = {"hot", "dot", "dog", "lot", "log", "cog"};
  char *list2[] = {"hot", "dot", "dog", "lot", "log"};
  char *list3[] = {"hot", "dog", "dot"};

  printf("Input:  beginWord = \"hit\", endWord = \"cog\", wordList = ");
  showWords(list1, 6);
  printf("\n");
  printf("Output: %d\n", ladderLength("hit", "cog", list1, 6));

  printf("Input:  beginWord = \"hit\", endWord = \"cog\", wordList = ");
  showWords(list2, 5);
  printf("\n");
  printf("Output: %d\n", ladderLength("hit", "cog", list2, 5));

  printf("Input:  beginWord = \"hot\", endWord = \"dog\", wordList = ");
  showWords(list3, 3);
  printf("\n");
  printf("Output: %d\n", ladderLength("hot", "dog", list3, 3));

  return EXIT_SUCCESS;
}
