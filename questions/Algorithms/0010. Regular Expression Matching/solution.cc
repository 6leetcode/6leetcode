#include <iostream>
#include <string>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  bool isMatch(string s, string p) {
    if (p.empty()) return s.empty();

    bool firstMatch = !s.empty() && (s[0] == p[0] || p[0] == '.');

    if (p.size() >= 2 && p[1] == '*') {
      return isMatch(s, p.substr(2)) || (firstMatch && isMatch(s.substr(1), p));
    }
    return firstMatch && isMatch(s.substr(1), p.substr(1));
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  string input1 = "aab";
  string input2 = "c*a*b";
  cout << "Input:  " << input1 << " " << input2 << endl;
  Solution solution;
  cout << "Output: " << (solution.isMatch(input1, input2) ? "true" : "false") << endl;
  return EXIT_SUCCESS;
}
