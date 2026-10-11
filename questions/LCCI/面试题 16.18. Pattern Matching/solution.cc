#include <iostream>
#include <string>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
  bool check(const string &pattern, const string &value, int la, int lb) {
    int n = value.size();
    int aPos = -1, bPos = -1, aLen = -1, bLen = -1, pos = 0;
    for (char c : pattern) {
      if (c == 'a') {
        if (pos + la > n) return false;
        if (aPos == -1) {
          aPos = pos;
          aLen = la;
        } else if (aLen != la || value.compare(aPos, la, value, pos, la) != 0) {
          return false;
        }
        pos += la;
      } else {
        if (pos + lb > n) return false;
        if (bPos == -1) {
          bPos = pos;
          bLen = lb;
        } else if (bLen != lb || value.compare(bPos, lb, value, pos, lb) != 0) {
          return false;
        }
        pos += lb;
      }
    }
    if (pos != n) return false;
    if (aPos != -1 && bPos != -1 && aLen == bLen && value.compare(aPos, aLen, value, bPos, bLen) == 0) return false;
    return true;
  }

public:
  bool patternMatching(string pattern, string value) {
    int n = value.size();
    if (pattern.empty()) return n == 0;
    int na = 0;
    for (char c : pattern) if (c == 'a') na++;
    int nb = pattern.size() - na;
    for (int la = 0; la <= n; la++) {
      if (na * la > n) break;
      int rem = n - na * la;
      if (nb == 0) {
        if (rem == 0 && check(pattern, value, la, 0)) return true;
      } else {
        if (rem % nb != 0) continue;
        if (check(pattern, value, la, rem / nb)) return true;
      }
    }
    return false;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  string pattern = "abba", value = "dogcatcatdog";
  cout << "Input:  pattern = " << pattern << ", value = " << value << endl;
  Solution solution;
  cout << "Output: " << (solution.patternMatching(pattern, value) ? "true" : "false") << endl;
  return EXIT_SUCCESS;
}
