#include <stdio.h>
#include <stdlib.h>

// ------------------------------- solution begin -------------------------------
int canCompleteCircuit(int *gas, int gasSize, int *cost, int costSize) {
  (void)costSize;

  int total = 0;
  int tank = 0;
  int start = 0;

  for (int i = 0; i < gasSize; i++) {
    int diff = gas[i] - cost[i];
    total += diff;
    tank += diff;
    if (tank < 0) {
      start = i + 1;
      tank = 0;
    }
  }

  return total >= 0 ? start : -1;
}
// ------------------------------- solution end ---------------------------------

static void run(int *gas, int *cost, int n) {
  printf("Input:  [");
  for (int i = 0; i < n; i++) {
    printf("%s%d", i == 0 ? "" : ", ", gas[i]);
  }
  printf("] [");
  for (int i = 0; i < n; i++) {
    printf("%s%d", i == 0 ? "" : ", ", cost[i]);
  }
  printf("]\n");
  printf("Output: %d\n", canCompleteCircuit(gas, n, cost, n));
}

int main(int argc, char const *argv[]) {
  int gas1[] = {1, 2, 3, 4, 5};
  int cost1[] = {3, 4, 5, 1, 2};
  int gas2[] = {2, 3, 4};
  int cost2[] = {3, 4, 3};

  run(gas1, cost1, 5);
  run(gas2, cost2, 3);

  return EXIT_SUCCESS;
}
