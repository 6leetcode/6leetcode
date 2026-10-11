#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  vector<vector<string>> groupAnagrams(vector<string> &strs) {
    unordered_map<string, vector<string>> groups;
    vector<string> order;
    for (const string &s : strs) {
      string key = s;
      sort(key.begin(), key.end());
      if (groups.find(key) == groups.end()) {
        order.push_back(key);
      }
      groups[key].push_back(s);
    }
    vector<vector<string>> res;
    for (const string &key : order) {
      res.push_back(groups[key]);
    }
    return res;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<string> input = {"eat", "tea", "tan", "ate", "nat", "bat"};
  cout << "Input:  [eat, tea, tan, ate, nat, bat]" << endl;
  Solution solution;
  vector<vector<string>> output = solution.groupAnagrams(input);
  cout << "Output: [";
  for (size_t i = 0; i < output.size(); i++) {
    cout << (i == 0 ? "" : ", ") << "[";
    for (size_t j = 0; j < output[i].size(); j++) {
      cout << (j == 0 ? "" : ", ") << output[i][j];
    }
    cout << "]";
  }
  cout << "]" << endl;
  return EXIT_SUCCESS;
}
