#include <iostream>
#include <string>
#include <vector>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  int findString(vector<string> &words, string s) {
    int lo = 0, hi = words.size() - 1;
    while (lo <= hi) {
      int mid = lo + (hi - lo) / 2;
      int m = mid;
      while (m < hi && words[m] == "") m++;
      if (words[m] == "") {
        hi = mid - 1;
        continue;
      }
      if (words[m] == s) return m;
      if (words[m] < s) {
        lo = m + 1;
      } else {
        hi = mid - 1;
      }
    }
    return -1;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<string> words = {"at", "", "", "", "ball", "", "", "car", "", "", "dad", "", ""};
  string s = "ball";
  cout << "Input:  [\"at\", \"\", \"\", \"\", \"ball\", \"\", \"\", \"car\", \"\", \"\", \"dad\", \"\", \"\"], s = \"ball\"" << endl;
  Solution solution;
  cout << "Output: " << solution.findString(words, s) << endl;
  return EXIT_SUCCESS;
}
