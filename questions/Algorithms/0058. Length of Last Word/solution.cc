#include <iostream>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  int lengthOfLastWord(string s) {
    size_t foundNot = s.find_last_not_of(" ");
    if (foundNot == string::npos) {
      return 0;
    } else {
      if (foundNot != (s.size() - 1)) {
        s.erase(s.begin() + foundNot + 1, s.end());
      }
      return s.size() - s.find_last_of(" ") - 1;
    }
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  string input = "Hello World";
  cout << "Input:  " << input << endl;
  Solution solution;
  cout << "Output: " << solution.lengthOfLastWord(input) << endl;
  return EXIT_SUCCESS;
}
