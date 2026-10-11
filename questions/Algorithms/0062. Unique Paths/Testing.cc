#include <iostream>
#include <vector>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  int uniquePaths(int m, int n) {
    vector<long long> dp(n, 1);
    for (int i = 1; i < m; i++) {
      for (int j = 1; j < n; j++) {
        dp[j] += dp[j - 1];
      }
    }
    return (int)dp[n - 1];
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int m = 3, n = 7;
  cout << "Input:  " << m << " " << n << endl;
  Solution solution;
  cout << "Output: " << solution.uniquePaths(m, n) << endl;
  return EXIT_SUCCESS;
}
