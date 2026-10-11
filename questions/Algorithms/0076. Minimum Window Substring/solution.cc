#include <climits>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  string minWindow(string s, string t) {
    vector<int> need(128, 0), have(128, 0);
    int required = 0;
    for (char c : t) {
      if (need[c] == 0) required++;
      need[c]++;
    }
    int matched = 0, left = 0, start = 0, minLen = INT_MAX;
    for (int right = 0; right < (int)s.size(); right++) {
      char c = s[right];
      have[c]++;
      if (need[c] > 0 && have[c] == need[c]) matched++;
      while (matched == required) {
        if (right - left + 1 < minLen) {
          minLen = right - left + 1;
          start = left;
        }
        char lc = s[left];
        if (need[lc] > 0 && have[lc] == need[lc]) matched--;
        have[lc]--;
        left++;
      }
    }
    return minLen == INT_MAX ? "" : s.substr(start, minLen);
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  string s = "ADOBECODEBANC", t = "ABC";
  cout << "Input:  " << s << " " << t << endl;
  Solution solution;
  cout << "Output: " << solution.minWindow(s, t) << endl;
  return EXIT_SUCCESS;
}
