#include <iostream>
#include <string>
#include <vector>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  bool wordBreak(string s, vector<string> &wordDict) {
    int n = s.size();
    vector<bool> dp(n + 1, false);
    dp[0] = true;
    for (int i = 1; i <= n; i++) {
      for (auto &w : wordDict) {
        int len = w.size();
        if (i >= len && dp[i - len] && s.compare(i - len, len, w) == 0) {
          dp[i] = true;
          break;
        }
      }
    }
    return dp[n];
  }
};
// ------------------------------- solution end ---------------------------------

static void run(string s, vector<string> dict) {
  cout << "Input:  s = \"" << s << "\", wordDict = [";
  for (size_t i = 0; i < dict.size(); i++) {
    cout << (i == 0 ? "" : ", ") << "\"" << dict[i] << "\"";
  }
  cout << "]" << endl;
  Solution solution;
  cout << "Output: " << (solution.wordBreak(s, dict) ? "true" : "false") << endl;
}

int main(int argc, char const *argv[]) {
  run("leetcode", {"leet", "code"});
  run("applepenapple", {"apple", "pen"});
  run("catsandog", {"cats", "dog", "sand", "and", "cat"});
  return EXIT_SUCCESS;
}
