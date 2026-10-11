#include <iostream>
#include <string>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
  bool check(const string &s1, const string &s2) {
    if (s1 == s2) return true;
    if (s1.size() == 1) return false;

    int cnt[26] = {0};
    for (char c : s1) cnt[c - 'a']++;
    for (char c : s2) cnt[c - 'a']--;
    for (int i = 0; i < 26; i++) {
      if (cnt[i]) return false;
    }

    int n = s1.size();
    for (int i = 1; i < n; i++) {
      if ((check(s1.substr(0, i), s2.substr(0, i)) && check(s1.substr(i), s2.substr(i))) ||
          (check(s1.substr(0, i), s2.substr(n - i)) && check(s1.substr(i), s2.substr(0, n - i)))) {
        return true;
      }
    }
    return false;
  }

public:
  bool isScramble(string s1, string s2) {
    return check(s1, s2);
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  string s1 = "great", s2 = "rgeat";
  cout << "Input:  " << s1 << " " << s2 << endl;
  Solution solution;
  cout << "Output: " << (solution.isScramble(s1, s2) ? "true" : "false") << endl;
  return EXIT_SUCCESS;
}
