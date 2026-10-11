#include <algorithm>
#include <iostream>
#include <vector>

#include <cc/matrix.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  int minimumTotal(vector<vector<int>> &triangle) {
    vector<int> dp = triangle.back();
    for (int i = triangle.size() - 2; i >= 0; i--) {
      for (int j = 0; j <= i; j++) {
        dp[j] = triangle[i][j] + min(dp[j], dp[j + 1]);
      }
    }
    return dp[0];
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<vector<vector<int>>> cases = {
      {{2}, {3, 4}, {6, 5, 7}, {4, 1, 8, 3}},
      {{-10}},
  };

  Solution solution;
  for (auto &triangle : cases) {
    cout << "Input:  " << matrix_show(triangle) << endl;
    cout << "Output: " << solution.minimumTotal(triangle) << endl;
  }

  return EXIT_SUCCESS;
}
