#include <iostream>
#include <string>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  bool oneEditAway(string first, string second) {
    int m = first.size(), n = second.size();
    if (abs(m - n) > 1) return false;
    if (m > n) return oneEditAway(second, first);
    for (int i = 0; i < m; i++) {
      if (first[i] != second[i]) {
        if (m == n) return first.substr(i + 1) == second.substr(i + 1);
        return first.substr(i) == second.substr(i + 1);
      }
    }
    return true;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  string first = "pale", second = "ple";
  cout << "Input:  " << first << " " << second << endl;
  Solution solution;
  cout << "Output: " << (solution.oneEditAway(first, second) ? "true" : "false") << endl;
  return EXIT_SUCCESS;
}
