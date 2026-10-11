#include <iostream>
#include <string>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  string compressString(string S) {
    string res;
    int n = S.size();
    for (int i = 0; i < n;) {
      int j = i;
      while (j < n && S[j] == S[i]) j++;
      res += S[i];
      res += to_string(j - i);
      i = j;
    }
    return res.size() < S.size() ? res : S;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  string input = "aabcccccaaa";
  cout << "Input:  " << input << endl;
  Solution solution;
  cout << "Output: " << solution.compressString(input) << endl;
  return EXIT_SUCCESS;
}
