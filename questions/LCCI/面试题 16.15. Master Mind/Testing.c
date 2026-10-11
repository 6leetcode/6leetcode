#include <stdio.h>
#include <stdlib.h>

#include <array.h>

// ------------------------------- solution begin -------------------------------
static int idx(char c) {
  if (c == 'R') return 0;
  if (c == 'Y') return 1;
  if (c == 'G') return 2;
  return 3;
}

int *masterMind(char *solution, char *guess, int *returnSize) {
  int hits = 0, pseudo = 0;
  int sCount[4] = {0}, gCount[4] = {0};
  for (int i = 0; solution[i]; i++) {
    if (solution[i] == guess[i]) {
      hits++;
    } else {
      sCount[idx(solution[i])]++;
      gCount[idx(guess[i])]++;
    }
  }
  for (int i = 0; i < 4; i++) {
    pseudo += sCount[i] < gCount[i] ? sCount[i] : gCount[i];
  }
  int *res = (int *)malloc(sizeof(int) * 2);
  res[0] = hits;
  res[1] = pseudo;
  *returnSize = 2;
  return res;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  char solution[] = "RGBY", guess[] = "GGRR";
  printf("Input:  solution = %s, guess = %s\n", solution, guess);
  int size = 0;
  int *res = masterMind(solution, guess, &size);
  sds out = array_show(res, size);
  printf("Output: %s\n", out);
  sdsfree(out);
  free(res);
  return EXIT_SUCCESS;
}
