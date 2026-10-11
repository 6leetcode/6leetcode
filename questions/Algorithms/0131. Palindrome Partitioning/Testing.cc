#include <iostream>
#include <string>
#include <vector>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
  bool isPalindrome(const string &s, int l, int r) {
    while (l < r) {
      if (s[l++] != s[r--]) return false;
    }
    return true;
  }

  void backtrack(const string &s, int start, vector<string> &path, vector<vector<string>> &res) {
    if (start == (int)s.size()) {
      res.push_back(path);
      return;
    }
    for (int end = start; end < (int)s.size(); end++) {
      if (!isPalindrome(s, start, end)) continue;
      path.push_back(s.substr(start, end - start + 1));
      backtrack(s, end + 1, path, res);
      path.pop_back();
    }
  }

public:
  vector<vector<string>> partition(string s) {
    vector<vector<string>> res;
    vector<string> path;
    backtrack(s, 0, path, res);
    return res;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  Solution solution;
  vector<string> tests = {"aab", "a"};
  for (const string &s : tests) {
    cout << "Input:  " << s << endl;
    vector<vector<string>> res = solution.partition(s);
    cout << "Output: [";
    for (size_t i = 0; i < res.size(); i++) {
      cout << (i == 0 ? "" : ", ") << "[";
      for (size_t j = 0; j < res[i].size(); j++) {
        cout << (j == 0 ? "" : ", ") << "\"" << res[i][j] << "\"";
      }
      cout << "]";
    }
    cout << "]" << endl;
  }
  return EXIT_SUCCESS;
}
