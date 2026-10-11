#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
  bool canForm(const string &w, unordered_set<string> &dict) {
    int n = w.size();
    vector<bool> dp(n + 1, false);
    dp[0] = true;
    for (int i = 1; i <= n; i++) {
      for (int j = 0; j < i; j++) {
        if (!dp[j]) continue;
        if (i == n && j == 0) continue;
        if (dict.count(w.substr(j, i - j))) {
          dp[i] = true;
          break;
        }
      }
    }
    return dp[n];
  }

public:
  string longestWord(vector<string> &words) {
    unordered_set<string> dict(words.begin(), words.end());
    sort(words.begin(), words.end(), [](const string &a, const string &b) {
      if (a.size() != b.size()) return a.size() > b.size();
      return a < b;
    });
    for (const string &w : words) {
      if (canForm(w, dict)) return w;
    }
    return "";
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<string> words = {"cat", "banana", "dog", "nana", "walk", "walker", "dogwalker"};
  cout << "Input:  [\"cat\",\"banana\",\"dog\",\"nana\",\"walk\",\"walker\",\"dogwalker\"]" << endl;
  Solution solution;
  cout << "Output: \"" << solution.longestWord(words) << "\"" << endl;
  return EXIT_SUCCESS;
}
