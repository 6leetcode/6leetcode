#include <iostream>
#include <vector>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  int numTrees(int n) {
    vector<long long> dp(n + 1, 0);
    dp[0] = 1;
    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= i; j++) {
        dp[i] += dp[j - 1] * dp[i - j];
      }
    }
    return (int)dp[n];
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int input = 3;
  cout << "Input:  " << input << endl;
  Solution solution;
  cout << "Output: " << solution.numTrees(input) << endl;
  return EXIT_SUCCESS;
}
