#include <iostream>
#include <string>
#include <vector>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  vector<string> letterCombinations(string digits) {
    vector<string> res;
    if (digits.empty()) return res;
    vector<string> map = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    res.push_back("");
    for (char d : digits) {
      vector<string> next;
      for (const string &prefix : res) {
        for (char c : map[d - '2']) {
          next.push_back(prefix + c);
        }
      }
      res = next;
    }
    return res;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  string input = "23";
  cout << "Input:  " << input << endl;
  Solution solution;
  vector<string> output = solution.letterCombinations(input);
  cout << "Output: [";
  for (size_t i = 0; i < output.size(); i++) {
    cout << (i == 0 ? "" : " ") << output[i];
  }
  cout << "]" << endl;
  return EXIT_SUCCESS;
}
