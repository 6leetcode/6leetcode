#include <iostream>
#include <vector>

#include <cc/matrix.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  int minPathSum(vector<vector<int>> &grid) {
    int m = grid.size(), n = grid[0].size();
    vector<int> dp(n, 0);
    dp[0] = grid[0][0];
    for (int j = 1; j < n; j++) dp[j] = dp[j - 1] + grid[0][j];
    for (int i = 1; i < m; i++) {
      dp[0] += grid[i][0];
      for (int j = 1; j < n; j++) {
        dp[j] = min(dp[j], dp[j - 1]) + grid[i][j];
      }
    }
    return dp[n - 1];
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<vector<int>> input = {{1, 3, 1}, {1, 5, 1}, {4, 2, 1}};
  cout << "Input:  " << matrix_show(input) << endl;
  Solution solution;
  cout << "Output: " << solution.minPathSum(input) << endl;
  return EXIT_SUCCESS;
}
