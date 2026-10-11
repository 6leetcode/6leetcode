#include <stdio.h>
#include <stdlib.h>

// ------------------------------- solution begin -------------------------------
int maxProfit(int *prices, int pricesSize) {
  int buy1 = -prices[0], sell1 = 0;
  int buy2 = -prices[0], sell2 = 0;

  for (int i = 0; i < pricesSize; i++) {
    if (-prices[i] > buy1) buy1 = -prices[i];
    if (buy1 + prices[i] > sell1) sell1 = buy1 + prices[i];
    if (sell1 - prices[i] > buy2) buy2 = sell1 - prices[i];
    if (buy2 + prices[i] > sell2) sell2 = buy2 + prices[i];
  }

  return sell2;
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
  int prices1[] = {3, 3, 5, 0, 0, 3, 1, 4};
  int prices2[] = {1, 2, 3, 4, 5};
  int prices3[] = {7, 6, 4, 3, 1};
  int prices4[] = {1};

  printf("Input:  ");
  show(prices1, 8);
  printf("\n");
  printf("Output: %d\n", maxProfit(prices1, 8));

  printf("Input:  ");
  show(prices2, 5);
  printf("\n");
  printf("Output: %d\n", maxProfit(prices2, 5));

  printf("Input:  ");
  show(prices3, 5);
  printf("\n");
  printf("Output: %d\n", maxProfit(prices3, 5));

  printf("Input:  ");
  show(prices4, 1);
  printf("\n");
  printf("Output: %d\n", maxProfit(prices4, 1));

  return EXIT_SUCCESS;
}
