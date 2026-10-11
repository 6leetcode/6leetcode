#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
  void backtrack(string &s, vector<bool> &used, string &cur, vector<string> &res) {
    if (cur.size() == s.size()) {
      res.push_back(cur);
      return;
    }
    for (size_t i = 0; i < s.size(); i++) {
      if (used[i]) continue;
      if (i > 0 && s[i] == s[i - 1] && !used[i - 1]) continue;
      used[i] = true;
      cur.push_back(s[i]);
      backtrack(s, used, cur, res);
      cur.pop_back();
      used[i] = false;
    }
  }

public:
  vector<string> permutation(string S) {
    sort(S.begin(), S.end());
    vector<string> res;
    vector<bool> used(S.size(), false);
    string cur;
    backtrack(S, used, cur, res);
    return res;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  string input = "qqe";
  cout << "Input:  " << input << endl;
  Solution solution;
  vector<string> res = solution.permutation(input);
  cout << "Output: [";
  for (size_t i = 0; i < res.size(); i++) cout << (i == 0 ? "" : ", ") << "\"" << res[i] << "\"";
  cout << "]" << endl;
  return EXIT_SUCCESS;
}
