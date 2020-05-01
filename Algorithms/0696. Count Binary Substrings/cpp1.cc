#include <iostream>

using namespace std;

class Solution {
public:
  int countBinarySubstrings(string s) {
    int n = 0, pre = 0, curr = 1, len = s.size() - 1;
    for (int i = 0; i < len; ++i) {
      if (s[i] == s[i + 1])
        ++curr;
      else {
        pre  = curr;
        curr = 1;
      }
      if (pre >= curr) ++n;
    }
    return n;
  }
};

int main(int argc, char const *argv[]) {
  string input = "00110011";
  cout << "Input:  " << input << endl;
  Solution solution;
  cout << "Output: " << solution.countBinarySubstrings(input) << endl;
  return EXIT_SUCCESS;
}
