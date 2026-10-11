#include <iostream>
#include <string>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  int strStr(string haystack, string needle) {
    int n = haystack.size();
    int m = needle.size();
    if (m == 0) {
      return 0;
    }
    for (int i = 0; i + m <= n; i++) {
      int j = 0;
      while (j < m && haystack[i + j] == needle[j]) {
        j++;
      }
      if (j == m) {
        return i;
      }
    }
    return -1;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  string haystack = "sadbutsad";
  string needle = "sad";
  cout << "Input:  " << haystack << " " << needle << endl;
  Solution solution;
  cout << "Output: " << solution.strStr(haystack, needle) << endl;
  return EXIT_SUCCESS;
}
