#include <iostream>
#include <vector>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  int maxBlackSquare(vector<vector<int>> &matrix) {
    int n = matrix.size();
    vector<vector<int>> dp(n, vector<int>(n, 0));
    int best = 0;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < (int)matrix[i].size(); j++) {
        if (matrix[i][j] == 1) {
          if (i == 0 || j == 0) {
            dp[i][j] = 1;
          } else {
            dp[i][j] = min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1])) + 1;
          }
          best = max(best, dp[i][j]);
        }
      }
    }
    return best;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<vector<int>> matrix = {{0, 1, 1, 1}, {1, 1, 1, 1}, {0, 1, 1, 1}, {0, 1, 1, 1}};
  cout << "Input:  [[0,1,1,1],[1,1,1,1],[0,1,1,1],[0,1,1,1]]" << endl;
  Solution solution;
  cout << "Output: " << solution.maxBlackSquare(matrix) << endl;
  return EXIT_SUCCESS;
}
