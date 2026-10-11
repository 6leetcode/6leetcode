#include <iostream>
#include <string>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  bool canPermutePalindrome(string s) {
    int count[128] = {};
    for (char c : s) {
      count[(unsigned char)c] ^= 1;
    }
    int odd = 0;
    for (int i = 0; i < 128; i++) {
      odd += count[i];
    }
    return odd <= 1;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  string input = "tactcoa";
  cout << "Input:  " << input << endl;
  Solution solution;
  cout << "Output: " << (solution.canPermutePalindrome(input) ? "true" : "false") << endl;
  return EXIT_SUCCESS;
}
