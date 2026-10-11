#include <stdio.h>
#include <stdlib.h>

#include <array.h>

// ------------------------------- solution begin -------------------------------
int maxProfit(int *prices, int pricesSize) {
  if (pricesSize == 0) {
    return 0;
  }
  int minPrice = prices[0];
  int best = 0;
  for (int i = 1; i < pricesSize; i++) {
    if (prices[i] < minPrice) {
      minPrice = prices[i];
    } else if (prices[i] - minPrice > best) {
      best = prices[i] - minPrice;
    }
  }
  return best;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int prices[] = {7, 1, 5, 3, 6, 4};
  int size = sizeof(prices) / sizeof(int);
  sds input = array_show(prices, size);
  printf("Input:  %s\n", input);
  sdsfree(input);
  printf("Output: %d\n", maxProfit(prices, size));
  return EXIT_SUCCESS;
}
