#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------------------- solution begin -------------------------------
#define MAX_WORDS 100000

typedef struct {
  char *words[MAX_WORDS];
  int counts[MAX_WORDS];
  int size;
} WordsFrequency;

WordsFrequency *wordsFrequencyCreate(char **book, int bookSize) {
  WordsFrequency *obj = (WordsFrequency *)malloc(sizeof(WordsFrequency));
  obj->size = 0;
  for (int i = 0; i < bookSize; i++) {
    int found = -1;
    for (int j = 0; j < obj->size; j++) {
      if (strcmp(obj->words[j], book[i]) == 0) {
        found = j;
        break;
      }
    }
    if (found >= 0) {
      obj->counts[found]++;
    } else {
      obj->words[obj->size] = book[i];
      obj->counts[obj->size] = 1;
      obj->size++;
    }
  }
  return obj;
}

int wordsFrequencyGet(WordsFrequency *obj, char *word) {
  for (int j = 0; j < obj->size; j++) {
    if (strcmp(obj->words[j], word) == 0) return obj->counts[j];
  }
  return 0;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  char *book[] = {"i", "have", "an", "apple", "he", "have", "a", "pen"};
  printf("Input:  book = [i, have, an, apple, he, have, a, pen]\n");
  WordsFrequency *obj = wordsFrequencyCreate(book, 8);
  printf("Output: [%d, %d, %d, %d, %d]\n",
         wordsFrequencyGet(obj, "you"), wordsFrequencyGet(obj, "have"),
         wordsFrequencyGet(obj, "an"), wordsFrequencyGet(obj, "apple"),
         wordsFrequencyGet(obj, "pen"));
  free(obj);
  return EXIT_SUCCESS;
}
