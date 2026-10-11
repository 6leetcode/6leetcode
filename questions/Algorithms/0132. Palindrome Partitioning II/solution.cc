#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  int minCut(string s) {
    int n = s.size();
    if (n <= 1) return 0;

    vector<vector<bool>> pal(n, vector<bool>(n, false));
    for (int i = n - 1; i >= 0; i--) {
      for (int j = i; j < n; j++) {
        if (s[i] == s[j] && (j - i < 2 || pal[i + 1][j - 1])) {
          pal[i][j] = true;
        }
      }
    }

    vector<int> dp(n, 0);
    for (int i = 0; i < n; i++) {
      if (pal[0][i]) {
        dp[i] = 0;
        continue;
      }
      dp[i] = i;
      for (int j = 1; j <= i; j++) {
        if (pal[j][i]) {
          dp[i] = min(dp[i], dp[j - 1] + 1);
        }
      }
    }
    return dp[n - 1];
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  Solution solution;
  vector<string> tests = {"aab", "a", "ab"};
  for (const string &s : tests) {
    cout << "Input:  " << s << endl;
    cout << "Output: " << solution.minCut(s) << endl;
  }
  return EXIT_SUCCESS;
}
