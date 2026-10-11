#include <iostream>
#include <string>
#include <utility>
#include <vector>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  int numDistinct(string s, string t) {
    int m = t.size();
    vector<unsigned long long> dp(m + 1, 0);
    dp[0] = 1;
    for (char c : s) {
      for (int j = m; j >= 1; j--) {
        if (c == t[j - 1]) {
          dp[j] += dp[j - 1];
        }
      }
    }
    return (int)dp[m];
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<pair<string, string>> cases = {
      {"rabbbit", "rabbit"},
      {"babgbag", "bag"},
      {"ddd", "dd"},
  };

  Solution solution;
  for (auto &c : cases) {
    cout << "Input:  \"" << c.first << "\", \"" << c.second << "\"" << endl;
    cout << "Output: " << solution.numDistinct(c.first, c.second) << endl;
  }

  return EXIT_SUCCESS;
}
