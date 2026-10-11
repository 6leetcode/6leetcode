#include <iostream>
#include <string>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  bool isFlipedString(string s1, string s2) {
    if (s1.size() != s2.size()) return false;
    return (s2 + s2).find(s1) != string::npos;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  string s1 = "waterbottle", s2 = "erbottlewat";
  cout << "Input:  " << s1 << " " << s2 << endl;
  Solution solution;
  cout << "Output: " << (solution.isFlipedString(s1, s2) ? "true" : "false") << endl;
  return EXIT_SUCCESS;
}
