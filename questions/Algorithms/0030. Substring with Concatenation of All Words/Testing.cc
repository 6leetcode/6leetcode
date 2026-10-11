#include <iostream>
#include <string>
#include <vector>

#include <cc/array.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  vector<int> findSubstring(string s, vector<string> &words) {
    vector<int> res;
    if (words.empty() || s.empty()) {
      return res;
    }
    int w = words[0].size();
    int total = w * words.size();
    int n = s.size();
    for (int i = 0; i + total <= n; i++) {
      vector<bool> used(words.size(), false);
      bool ok = true;
      for (int j = 0; j < (int)words.size() && ok; j++) {
        bool found = false;
        for (int t = 0; t < (int)words.size(); t++) {
          if (!used[t] && s.compare(i + j * w, w, words[t]) == 0) {
            used[t] = true;
            found = true;
            break;
          }
        }
        ok = found;
      }
      if (ok) {
        res.push_back(i);
      }
    }
    return res;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  string s = "barfoothefoobarman";
  vector<string> words = {"foo", "bar"};
  cout << "Input:  " << s << " [foo, bar]" << endl;
  Solution solution;
  cout << "Output: " << array_show(solution.findSubstring(s, words)) << endl;
  return EXIT_SUCCESS;
}
