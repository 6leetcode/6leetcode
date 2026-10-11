#include <iostream>
#include <string>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  bool isNumber(string s) {
    int i = 0, n = s.size();
    while (i < n && s[i] == ' ') i++;
    while (n > i && s[n - 1] == ' ') n--;
    bool seenDigit = false, seenDot = false, seenExp = false;
    if (i < n && (s[i] == '+' || s[i] == '-')) i++;
    for (; i < n; i++) {
      char c = s[i];
      if (isdigit(c)) {
        seenDigit = true;
      } else if (c == '.') {
        if (seenDot || seenExp) return false;
        seenDot = true;
      } else if (c == 'e' || c == 'E') {
        if (seenExp || !seenDigit) return false;
        seenExp = true;
        seenDigit = false;
        if (i + 1 < n && (s[i + 1] == '+' || s[i + 1] == '-')) i++;
      } else {
        return false;
      }
    }
    return seenDigit;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  string input = "2e10";
  cout << "Input:  " << input << endl;
  Solution solution;
  cout << "Output: " << (solution.isNumber(input) ? "true" : "false") << endl;
  return EXIT_SUCCESS;
}
