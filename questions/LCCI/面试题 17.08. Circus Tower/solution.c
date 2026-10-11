#include <stdio.h>
#include <stdlib.h>

#include <array.h>

// ------------------------------- solution begin -------------------------------
typedef struct {
  int h, w;
} Person;

static int cmp(const void *a, const void *b) {
  Person *x = (Person *)a, *y = (Person *)b;
  if (x->h != y->h) return x->h - y->h;
  return y->w - x->w;
}

int bestSeqAtIndex(int *height, int heightSize, int *weight, int weightSize) {
  (void)weightSize;
  Person *people = (Person *)malloc(sizeof(Person) * heightSize);
  for (int i = 0; i < heightSize; i++) {
    people[i].h = height[i];
    people[i].w = weight[i];
  }
  qsort(people, heightSize, sizeof(Person), cmp);
  int *dp = (int *)malloc(sizeof(int) * heightSize);
  int len = 0;
  for (int i = 0; i < heightSize; i++) {
    int lo = 0, hi = len;
    while (lo < hi) {
      int mid = lo + (hi - lo) / 2;
      if (dp[mid] < people[i].w) {
        lo = mid + 1;
      } else {
        hi = mid;
      }
    }
    dp[lo] = people[i].w;
    if (lo == len) len++;
  }
  free(people);
  free(dp);
  return len;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int height[] = {65, 70, 56, 75, 60, 68};
  int weight[] = {100, 150, 90, 190, 95, 110};
  printf("Input:  height = [65,70,56,75,60,68], weight = [100,150,90,190,95,110]\n");
  printf("Output: %d\n", bestSeqAtIndex(height, 6, weight, 6));
  return EXIT_SUCCESS;
}
