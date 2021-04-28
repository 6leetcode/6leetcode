#include <iostream>
#include <map>
#include <vector>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
private:
  map<string, bool> memo;

public:
  bool canWin(string s) {
    if (memo.count(s)) return memo[s];
    for (int i = 1; i < s.size(); ++i) {
      if (s[i] == '+' && s[i - 1] == '+') {
        string t = s;
        t[i] = t[i - 1] = '-';
        if (!canWin(t)) {
          memo[s] = true;
          return true;
        }
      }
    }
    memo[s] = false;
    return memo[s];
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  string input = "++++";
  cout << "Input:  " << input << endl;
  Solution solution;
  cout << "Output: " << (solution.canWin(input) ? "true" : "false") << endl;
  return EXIT_SUCCESS;
}
