#include <iostream>

using namespace std;

class Solution {
public:
  int numDecodings(string s) {
    if (s[0] == '0') return 0;
    int pre = 1, curr = 1; //dp[-1] = dp[0] = 1
    for (int i = 1; i < s.size(); i++) {
      int tmp = curr;
      if (s[i] == '0')
        if (s[i - 1] == '1' || s[i - 1] == '2')
          curr = pre;
        else
          return 0;
      else if (s[i - 1] == '1' || (s[i - 1] == '2' && s[i] >= '1' && s[i] <= '6'))
        curr = curr + pre;
      pre = tmp;
    }
    return curr;
  }
};

int main(int argc, char const *argv[]) {
  string input = "226";
  cout << "Input:  " << input << endl;
  Solution solution;
  cout << "Output: " << solution.numDecodings(input) << endl;
  return EXIT_SUCCESS;
}
