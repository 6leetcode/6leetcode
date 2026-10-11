#include <stdio.h>
#include <stdlib.h>

// ------------------------------- solution begin -------------------------------
static int cmp_int(const void *a, const void *b) {
  int x = *(const int *)a;
  int y = *(const int *)b;
  return (x > y) - (x < y);
}

int longestConsecutive(int *nums, int numsSize) {
  if (numsSize == 0) return 0;

  int *sorted = (int *)malloc(sizeof(int) * numsSize);
  for (int i = 0; i < numsSize; i++) {
    sorted[i] = nums[i];
  }
  qsort(sorted, numsSize, sizeof(int), cmp_int);

  int best = 1;
  int cur = 1;
  for (int i = 1; i < numsSize; i++) {
    if (sorted[i] == sorted[i - 1]) continue;
    if (sorted[i] == sorted[i - 1] + 1) {
      cur++;
    } else {
      cur = 1;
    }
    if (cur > best) best = cur;
  }

  free(sorted);
  return best;
}
// ------------------------------- solution end ---------------------------------

static void run(int *nums, int numsSize) {
  printf("Input:  [");
  for (int i = 0; i < numsSize; i++) {
    printf("%s%d", i == 0 ? "" : ", ", nums[i]);
  }
  printf("]\n");
  printf("Output: %d\n", longestConsecutive(nums, numsSize));
}

int main(int argc, char const *argv[]) {
  int t1[] = {100, 4, 200, 1, 3, 2};
  int t2[] = {0, 3, 7, 2, 5, 8, 4, 6, 0, 1};
  int t3[] = {1, 0, 1, 2};

  run(t1, 6);
  run(t2, 10);
  run(t3, 4);

  return EXIT_SUCCESS;
}
