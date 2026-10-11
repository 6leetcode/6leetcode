#include <algorithm>
#include <iostream>
#include <stack>
#include <unordered_map>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  bool isValid(string s) {
    int n = s.size();
    if (n % 2 == 1) {
      return false;
    }

    unordered_map<char, char> pairs = {
        {')', '('},
        {']', '['},
        {'}', '{'}};
    stack<char> stk;
    for (char ch : s) {
      if (pairs.count(ch)) {
        if (stk.empty() || stk.top() != pairs[ch]) {
          return false;
        }
        stk.pop();
      } else {
        stk.push(ch);
      }
    }
    return stk.empty();
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  string input = "()[]{}";
  cout << "Input:  " << input << endl;
  Solution solution;
  cout << "Output: " << (solution.isValid(input) ? "true" : "false") << endl;
  return EXIT_SUCCESS;
}
