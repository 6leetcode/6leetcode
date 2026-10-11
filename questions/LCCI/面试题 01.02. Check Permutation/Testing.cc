#include <iostream>
#include <string>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  bool CheckPermutation(string s1, string s2) {
    if (s1.size() != s2.size()) return false;
    int count[128] = {};
    for (size_t i = 0; i < s1.size(); i++) {
      count[(unsigned char)s1[i]]++;
      count[(unsigned char)s2[i]]--;
    }
    for (int i = 0; i < 128; i++) {
      if (count[i]) return false;
    }
    return true;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  string s1 = "abc", s2 = "bca";
  cout << "Input:  " << s1 << " " << s2 << endl;
  Solution solution;
  cout << "Output: " << (solution.CheckPermutation(s1, s2) ? "true" : "false") << endl;
  return EXIT_SUCCESS;
}
