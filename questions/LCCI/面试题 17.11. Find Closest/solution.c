#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------------------- solution begin -------------------------------
int findClosest(char **words, int wordsSize, char *word1, char *word2) {
  int best = wordsSize, p1 = -1, p2 = -1;
  for (int i = 0; i < wordsSize; i++) {
    if (strcmp(words[i], word1) == 0) {
      p1 = i;
      if (p2 != -1 && i - p2 < best) best = i - p2;
    } else if (strcmp(words[i], word2) == 0) {
      p2 = i;
      if (p1 != -1 && i - p1 < best) best = i - p1;
    }
  }
  return best;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  char *words[] = {"I", "am", "a", "student", "from", "a", "university", "in", "a", "city"};
  char word1[] = "a", word2[] = "student";
  printf("Input:  words = [...], word1 = \"a\", word2 = \"student\"\n");
  printf("Output: %d\n", findClosest(words, 10, word1, word2));
  return EXIT_SUCCESS;
}
