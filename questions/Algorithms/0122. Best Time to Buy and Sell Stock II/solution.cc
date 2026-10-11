#include <iostream>
#include <vector>

#include <cc/array.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  int maxProfit(vector<int> &prices) {
    int profit = 0;
    for (size_t i = 1; i < prices.size(); i++) {
      if (prices[i] > prices[i - 1]) {
        profit += prices[i] - prices[i - 1];
      }
    }
    return profit;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  Solution solution;

  vector<int> prices1 = {7, 1, 5, 3, 6, 4};
  vector<int> prices2 = {1, 2, 3, 4, 5};
  vector<int> prices3 = {7, 6, 4, 3, 1};

  cout << "Input:  " << array_show(prices1) << endl;
  cout << "Output: " << solution.maxProfit(prices1) << endl;

  cout << "Input:  " << array_show(prices2) << endl;
  cout << "Output: " << solution.maxProfit(prices2) << endl;

  cout << "Input:  " << array_show(prices3) << endl;
  cout << "Output: " << solution.maxProfit(prices3) << endl;

  return EXIT_SUCCESS;
}
