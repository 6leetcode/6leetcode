#include <functional>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  vector<string> wordBreak(string s, vector<string> &wordDict) {
    unordered_set<string> dict(wordDict.begin(), wordDict.end());
    unordered_map<int, vector<string>> memo;
    function<vector<string>(int)> dfs = [&](int start) -> vector<string> {
      if (memo.count(start)) return memo[start];
      if (start == (int)s.size()) return vector<string>{""};
      vector<string> res;
      for (int end = start + 1; end <= (int)s.size(); end++) {
        string w = s.substr(start, end - start);
        if (dict.count(w)) {
          for (auto &tail : dfs(end)) {
            res.push_back(tail.empty() ? w : w + " " + tail);
          }
        }
      }
      return memo[start] = res;
    };
    return dfs(0);
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
  vector<string> res = solution.wordBreak(s, dict);
  cout << "Output: [";
  for (size_t i = 0; i < res.size(); i++) {
    cout << (i == 0 ? "" : ", ") << "\"" << res[i] << "\"";
  }
  cout << "]" << endl;
}

int main(int argc, char const *argv[]) {
  run("catsanddog", {"cat", "cats", "and", "sand", "dog"});
  run("pineapplepenapple", {"apple", "pen", "applepen", "pine", "pineapple"});
  run("catsandog", {"cats", "dog", "sand", "and", "cat"});
  return EXIT_SUCCESS;
}
