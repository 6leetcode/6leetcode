#include <iostream>
#include <string>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  int calculate(string s) {
    long long result = 0, prev = 0, cur = 0;
    char op = '+';
    int n = s.size();
    for (int i = 0; i <= n; i++) {
      if (i < n && isdigit(s[i])) {
        cur = cur * 10 + (s[i] - '0');
      } else if (i == n || s[i] != ' ') {
        if (op == '+') {
          result += prev;
          prev = cur;
        } else if (op == '-') {
          result += prev;
          prev = -cur;
        } else if (op == '*') {
          prev *= cur;
        } else if (op == '/') {
          prev /= cur;
        }
        if (i < n) op = s[i];
        cur = 0;
      }
    }
    return (int)(result + prev);
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  string input = "3+2*2";
  cout << "Input:  \"" << input << "\"" << endl;
  Solution solution;
  cout << "Output: " << solution.calculate(input) << endl;
  return EXIT_SUCCESS;
}
