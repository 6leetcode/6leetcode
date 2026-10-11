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
    int n = nums.size();
    if (n == 0) {
      return 0;
    }
    vector<int> dp(n, 1);
    int maxLen = 1;
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < i; ++j) {
        if (nums[i] > nums[j]) {
          dp[i] = max(dp[i], dp[j] + 1);
        }
      }
      maxLen = max(maxLen, dp[i]);
    }
    return maxLen;
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
