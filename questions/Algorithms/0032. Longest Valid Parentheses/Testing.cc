#include <iostream>
#include <stack>
#include <string>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  int longestValidParentheses(string s) {
    int best = 0;
    stack<int> stk;
    stk.push(-1);
    for (int i = 0; i < (int)s.size(); i++) {
      if (s[i] == '(') {
        stk.push(i);
      } else {
        stk.pop();
        if (stk.empty()) {
          stk.push(i);
        } else {
          best = max(best, i - stk.top());
        }
      }
    }
    return best;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  string input = "(()";
  cout << "Input:  " << input << endl;
  Solution solution;
  cout << "Output: " << solution.longestValidParentheses(input) << endl;
  return EXIT_SUCCESS;
}
