#include <iostream>
#include <vector>

#include <cc/array.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  int maxProfit(vector<int> &prices) {
    int buy1 = -prices[0], sell1 = 0;
    int buy2 = -prices[0], sell2 = 0;

    for (int price : prices) {
      buy1 = max(buy1, -price);
      sell1 = max(sell1, buy1 + price);
      buy2 = max(buy2, sell1 - price);
      sell2 = max(sell2, buy2 + price);
    }

    return sell2;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  Solution solution;

  vector<int> prices1 = {3, 3, 5, 0, 0, 3, 1, 4};
  vector<int> prices2 = {1, 2, 3, 4, 5};
  vector<int> prices3 = {7, 6, 4, 3, 1};
  vector<int> prices4 = {1};

  cout << "Input:  " << array_show(prices1) << endl;
  cout << "Output: " << solution.maxProfit(prices1) << endl;

  cout << "Input:  " << array_show(prices2) << endl;
  cout << "Output: " << solution.maxProfit(prices2) << endl;

  cout << "Input:  " << array_show(prices3) << endl;
  cout << "Output: " << solution.maxProfit(prices3) << endl;

  cout << "Input:  " << array_show(prices4) << endl;
  cout << "Output: " << solution.maxProfit(prices4) << endl;

  return EXIT_SUCCESS;
}
