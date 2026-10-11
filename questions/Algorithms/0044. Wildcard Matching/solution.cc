#include <iostream>
#include <string>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  bool isMatch(string s, string p) {
    int sIdx = 0, pIdx = 0, match = 0, star = -1;
    int sLen = s.size(), pLen = p.size();
    while (sIdx < sLen) {
      if (pIdx < pLen && (p[pIdx] == '?' || p[pIdx] == s[sIdx])) {
        sIdx++;
        pIdx++;
      } else if (pIdx < pLen && p[pIdx] == '*') {
        star = pIdx;
        match = sIdx;
        pIdx++;
      } else if (star != -1) {
        pIdx = star + 1;
        match++;
        sIdx = match;
      } else {
        return false;
      }
    }
    while (pIdx < pLen && p[pIdx] == '*') {
      pIdx++;
    }
    return pIdx == pLen;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  string s = "aa";
  string p = "*";
  cout << "Input:  " << s << " " << p << endl;
  Solution solution;
  cout << "Output: " << (solution.isMatch(s, p) ? "true" : "false") << endl;
  return EXIT_SUCCESS;
}
