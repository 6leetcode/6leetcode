#include <iostream>
#include <string>
#include <vector>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
  void backtrack(vector<string> &res, string &cur, int open, int close, int n) {
    if ((int)cur.size() == n * 2) {
      res.push_back(cur);
      return;
    }
    if (open < n) {
      cur.push_back('(');
      backtrack(res, cur, open + 1, close, n);
      cur.pop_back();
    }
    if (close < open) {
      cur.push_back(')');
      backtrack(res, cur, open, close + 1, n);
      cur.pop_back();
    }
  }

public:
  vector<string> generateParenthesis(int n) {
    vector<string> res;
    string cur;
    backtrack(res, cur, 0, 0, n);
    return res;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int input = 3;
  cout << "Input:  " << input << endl;
  Solution solution;
  vector<string> res = solution.generateParenthesis(input);
  cout << "Output: [";
  for (size_t i = 0; i < res.size(); i++) cout << (i == 0 ? "" : ", ") << "\"" << res[i] << "\"";
  cout << "]" << endl;
  return EXIT_SUCCESS;
}
