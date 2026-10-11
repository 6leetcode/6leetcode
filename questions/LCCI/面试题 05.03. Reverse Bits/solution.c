#include <stdio.h>
#include <stdlib.h>

// ------------------------------- solution begin -------------------------------
int reverseBits(int num) {
  int best = 0, prev = 0, cur = 0;
  for (int i = 0; i < 32; i++) {
    if ((num >> i) & 1) {
      cur++;
    } else {
      int cand = prev + cur + 1;
      if (cand > best) best = cand;
      prev = cur;
      cur = 0;
    }
  }
  int cand = prev + cur + 1;
  if (cand > best) best = cand;
  return best > 32 ? 32 : best;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int input = 1775;
  printf("Input:  %d\n", input);
  printf("Output: %d\n", reverseBits(input));
  return EXIT_SUCCESS;
}
