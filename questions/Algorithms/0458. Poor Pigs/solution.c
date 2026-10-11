#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
  int times = minutesToTest / minutesToDie;
  int base  = times + 1;
  // base ^ ans >= buckets
  // ans >= log(buckets) / log(base)
  double temp = log(buckets) / log(base);
  int ans     = (int)ceil(temp);
  return ans;
}

int main(int argc, char const *argv[]) {
  int buckets       = 1000;
  int minutesToDie  = 15;
  int minutesToTest = 1000;
  printf("Input:  %d, %d, %d\n", buckets, minutesToDie, minutesToTest);
  printf("Output: %d", poorPigs(buckets, minutesToDie, minutesToTest));
  return EXIT_SUCCESS;
}
