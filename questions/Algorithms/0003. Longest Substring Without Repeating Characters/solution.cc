#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  int lengthOfLongestSubstring(string s) {
    unordered_map<char, int> last;
    int start = 0, result = 0;
    for (int i = 0; i < (int)s.size(); i++) {
      if (last.count(s[i]) && last[s[i]] >= start) {
        start = last[s[i]] + 1;
      }
      last[s[i]] = i;
      result = max(result, i - start + 1);
    }
    return result;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  string input = "abcabcbb";
  cout << "Input:  " << input << endl;
  Solution solution;
  cout << "Output: " << solution.lengthOfLongestSubstring(input) << endl;
  return EXIT_SUCCESS;
}
