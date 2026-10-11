#include <iostream>
#include <string>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  string replaceSpaces(string S, int length) {
    string res;
    for (int i = 0; i < length; i++) {
      if (S[i] == ' ') {
        res += "%20";
      } else {
        res += S[i];
      }
    }
    return res;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  string input = "Mr John Smith ";
  int length = 13;
  cout << "Input:  \"" << input << "\", " << length << endl;
  Solution solution;
  cout << "Output: \"" << solution.replaceSpaces(input, length) << "\"" << endl;
  return EXIT_SUCCESS;
}
