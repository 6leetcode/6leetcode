#include <stdio.h>
#include <stdlib.h>

// ------------------------------- solution begin -------------------------------
int maxProfit(int *prices, int pricesSize) {
  int profit = 0;
  for (int i = 1; i < pricesSize; i++) {
    if (prices[i] > prices[i - 1]) {
      profit += prices[i] - prices[i - 1];
    }
  }
  return profit;
}
// ------------------------------- solution end ---------------------------------

static void show(int *prices, int size) {
  printf("[%d", prices[0]);
  for (int i = 1; i < size; i++) {
    printf(", %d", prices[i]);
  }
  printf("]");
}

int main(int argc, char const *argv[]) {
  int prices1[] = {7, 1, 5, 3, 6, 4};
  int prices2[] = {1, 2, 3, 4, 5};
  int prices3[] = {7, 6, 4, 3, 1};

  printf("Input:  ");
  show(prices1, 6);
  printf("\n");
  printf("Output: %d\n", maxProfit(prices1, 6));

  printf("Input:  ");
  show(prices2, 5);
  printf("\n");
  printf("Output: %d\n", maxProfit(prices2, 5));

  printf("Input:  ");
  show(prices3, 5);
  printf("\n");
  printf("Output: %d\n", maxProfit(prices3, 5));

  return EXIT_SUCCESS;
}
