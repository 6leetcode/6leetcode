#include <stdio.h>
#include <stdlib.h>

// ------------------------------- solution begin -------------------------------
int candy(int *ratings, int ratingsSize) {
  int *c = (int *)malloc(sizeof(int) * ratingsSize);
  for (int i = 0; i < ratingsSize; i++) {
    c[i] = 1;
  }

  for (int i = 1; i < ratingsSize; i++) {
    if (ratings[i] > ratings[i - 1]) {
      c[i] = c[i - 1] + 1;
    }
  }
  for (int i = ratingsSize - 2; i >= 0; i--) {
    if (ratings[i] > ratings[i + 1] && c[i] <= c[i + 1]) {
      c[i] = c[i + 1] + 1;
    }
  }

  int total = 0;
  for (int i = 0; i < ratingsSize; i++) {
    total += c[i];
  }

  free(c);
  return total;
}
// ------------------------------- solution end ---------------------------------

static void run(int *ratings, int n) {
  printf("Input:  [");
  for (int i = 0; i < n; i++) {
    printf("%s%d", i == 0 ? "" : ", ", ratings[i]);
  }
  printf("]\n");
  printf("Output: %d\n", candy(ratings, n));
}

int main(int argc, char const *argv[]) {
  int t1[] = {1, 0, 2};
  int t2[] = {1, 2, 2};

  run(t1, 3);
  run(t2, 3);

  return EXIT_SUCCESS;
}
