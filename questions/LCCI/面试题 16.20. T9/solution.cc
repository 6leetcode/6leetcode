#include <iostream>
#include <string>
#include <vector>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  vector<string> T9(string num, vector<string> &words) {
    const vector<string> map = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    vector<string> res;
    for (const string &w : words) {
      if (w.size() != num.size()) continue;
      bool ok = true;
      for (size_t j = 0; j < w.size(); j++) {
        if (map[num[j] - '0'].find(w[j]) == string::npos) {
          ok = false;
          break;
        }
      }
      if (ok) res.push_back(w);
    }
    return res;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  string num = "8733";
  vector<string> words = {"tree", "used"};
  cout << "Input:  num = \"8733\", words = [\"tree\", \"used\"]" << endl;
  Solution solution;
  vector<string> res = solution.T9(num, words);
  cout << "Output: [";
  for (size_t i = 0; i < res.size(); i++) cout << (i == 0 ? "" : ", ") << "\"" << res[i] << "\"";
  cout << "]" << endl;
  return EXIT_SUCCESS;
}
