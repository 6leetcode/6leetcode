#include <iostream>
#include <string>
#include <vector>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  vector<vector<int>> multiSearch(string big, vector<string> &smalls) {
    vector<vector<int>> res;
    int bl = big.size();
    for (const string &s : smalls) {
      vector<int> pos;
      int sl = s.size();
      if (sl > 0) {
        for (int j = 0; j + sl <= bl; j++) {
          if (big.compare(j, sl, s) == 0) pos.push_back(j);
        }
      }
      res.push_back(pos);
    }
    return res;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  string big = "mississippi";
  vector<string> smalls = {"is", "ppi", "hi", "sis", "i", "ssippi"};
  cout << "Input:  big = \"mississippi\", smalls = [\"is\",\"ppi\",\"hi\",\"sis\",\"i\",\"ssippi\"]" << endl;
  Solution solution;
  vector<vector<int>> res = solution.multiSearch(big, smalls);
  cout << "Output: [";
  for (size_t i = 0; i < res.size(); i++) {
    cout << (i == 0 ? "" : ", ") << "[";
    for (size_t j = 0; j < res[i].size(); j++) cout << (j == 0 ? "" : ",") << res[i][j];
    cout << "]";
  }
  cout << "]" << endl;
  return EXIT_SUCCESS;
}
