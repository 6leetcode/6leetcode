#include <iostream>
#include <string>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  string longestPalindrome(string s) {
    if (s.empty()) return s;
    int n = s.size();
    int start = 0, maxLen = 1;

    auto expand = [&](int l, int r) {
      while (l >= 0 && r < n && s[l] == s[r]) {
        l--;
        r++;
      }
      if (r - l - 1 > maxLen) {
        maxLen = r - l - 1;
        start = l + 1;
      }
    };

    for (int i = 0; i < n; i++) {
      expand(i, i);
      expand(i, i + 1);
    }
    return s.substr(start, maxLen);
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  string input = "babad";
  cout << "Input:  " << input << endl;
  Solution solution;
  cout << "Output: " << solution.longestPalindrome(input) << endl;
  return EXIT_SUCCESS;
}
