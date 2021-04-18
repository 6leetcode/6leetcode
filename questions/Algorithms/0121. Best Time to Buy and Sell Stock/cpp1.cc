#include <iostream>
#include <vector>

#include <cc/array.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  int maxProfit(vector<int> &prices) {
    if (prices.size() == 0) {
      return 0;
    }
    int max_profit = 0;
    int min_price = prices[0];
    for (auto p = prices.begin(); p != prices.end(); p++) {
      if (p == prices.begin()) {
        continue;
      }
      if (*p <= min_price) {
        min_price = *p;
      } else {
        max_profit = max_profit > *p - min_price ? max_profit : *p - min_price;
      }
    }
    return max_profit;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<int> input = {7, 1, 5, 3, 6, 4};
  cout << "Input:  " << array_show(input) << endl;
  Solution solution;
  cout << "Output: " << solution.maxProfit(input) << endl;
  return EXIT_SUCCESS;
}
