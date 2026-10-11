#include <iostream>
#include <vector>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  int waysToChange(int n) {
    const long long MOD = 1000000007;
    vector<int> coins = {1, 5, 10, 25};
    vector<long long> dp(n + 1, 0);
    dp[0] = 1;
    for (int coin : coins) {
      for (int i = coin; i <= n; i++) {
        dp[i] = (dp[i] + dp[i - coin]) % MOD;
      }
    }
    return (int)dp[n];
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int input = 10;
  cout << "Input:  " << input << endl;
  Solution solution;
  cout << "Output: " << solution.waysToChange(input) << endl;
  return EXIT_SUCCESS;
}
