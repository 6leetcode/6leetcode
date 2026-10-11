#include <iostream>
#include <vector>

#include <cc/matrix.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  int uniquePathsWithObstacles(vector<vector<int>> &obstacleGrid) {
    int m = obstacleGrid.size(), n = obstacleGrid[0].size();
    vector<long long> dp(n, 0);
    dp[0] = obstacleGrid[0][0] == 0 ? 1 : 0;
    for (int j = 1; j < n; j++) dp[j] = obstacleGrid[0][j] == 0 ? dp[j - 1] : 0;
    for (int i = 1; i < m; i++) {
      if (obstacleGrid[i][0]) dp[0] = 0;
      for (int j = 1; j < n; j++) {
        if (obstacleGrid[i][j]) {
          dp[j] = 0;
        } else {
          dp[j] += dp[j - 1];
        }
      }
    }
    return (int)dp[n - 1];
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<vector<int>> input = {{0, 0, 0}, {0, 1, 0}, {0, 0, 0}};
  cout << "Input:  " << matrix_show(input) << endl;
  Solution solution;
  cout << "Output: " << solution.uniquePathsWithObstacles(input) << endl;
  return EXIT_SUCCESS;
}
