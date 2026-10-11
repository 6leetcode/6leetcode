#include <iostream>
#include <string>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  bool isUnique(string astr) {
    bool seen[128] = {};
    for (char c : astr) {
      if (seen[(unsigned char)c]) return false;
      seen[(unsigned char)c] = true;
    }
    return true;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  string input = "leetcode";
  cout << "Input:  " << input << endl;
  Solution solution;
  cout << "Output: " << (solution.isUnique(input) ? "true" : "false") << endl;
  return EXIT_SUCCESS;
}
