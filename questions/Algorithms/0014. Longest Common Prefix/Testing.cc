#include <iostream>
#include <string>
#include <vector>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  string longestCommonPrefix(vector<string> &strs) {
    if (strs.empty()) return "";
    string prefix = strs[0];
    for (size_t i = 1; i < strs.size(); i++) {
      while (strs[i].find(prefix) != 0) {
        prefix = prefix.substr(0, prefix.size() - 1);
        if (prefix.empty()) return "";
      }
    }
    return prefix;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<string> input = {"flower", "flow", "flight"};
  cout << "Input:  [";
  for (size_t i = 0; i < input.size(); i++) {
    cout << (i == 0 ? "" : " ") << input[i];
  }
  cout << "]" << endl;
  Solution solution;
  cout << "Output: " << solution.longestCommonPrefix(input) << endl;
  return EXIT_SUCCESS;
}
