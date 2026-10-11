#include <stdio.h>
#include <stdlib.h>

#include <array.h>

// ------------------------------- solution begin -------------------------------
int maxAliveYear(int *birth, int birthSize, int *death, int deathSize) {
  (void)deathSize;
  int delta[102] = {0};
  for (int i = 0; i < birthSize; i++) {
    delta[birth[i] - 1900]++;
    delta[death[i] - 1900 + 1]--;
  }
  int best = 0, cur = 0, bestYear = 1900;
  for (int i = 0; i <= 100; i++) {
    cur += delta[i];
    if (cur > best) {
      best = cur;
      bestYear = 1900 + i;
    }
  }
  return bestYear;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int birth[] = {1900, 1901, 1950};
  int death[] = {1948, 1951, 2000};
  sds b = array_show(birth, 3), d = array_show(death, 3);
  printf("Input:  birth = %s, death = %s\n", b, d);
  sdsfree(b);
  sdsfree(d);
  printf("Output: %d\n", maxAliveYear(birth, 3, death, 3));
  return EXIT_SUCCESS;
}
