#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <vector>

#include <cc/array.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  int lengthOfLIS(vector<int> &nums) {
    vector<int> tails;
    for (int num : nums) {
      auto it = lower_bound(tails.begin(), tails.end(), num);
      if (it == tails.end()) {
        tails.push_back(num);
      } else {
        *it = num;
      }
    }
    return tails.size();
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<vector<int>> inputs = {
      {10, 9, 2, 5, 3, 7, 101, 18},
      {0, 1, 0, 3, 2, 3},
      {7, 7, 7, 7, 7},
  };
  Solution solution;
  for (vector<int> &input : inputs) {
    cout << "Input:  " << array_show(input) << endl;
    cout << "Output: " << solution.lengthOfLIS(input) << endl;
  }
  return EXIT_SUCCESS;
}
