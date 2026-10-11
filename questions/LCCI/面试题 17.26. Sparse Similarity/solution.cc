#include <algorithm>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <unordered_map>
#include <vector>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  vector<string> computeSimilarities(vector<vector<int>> &docs) {
    unordered_map<int, vector<int>> wordDocs;
    for (int i = 0; i < (int)docs.size(); i++) {
      for (int w : docs[i]) wordDocs[w].push_back(i);
    }
    map<pair<int, int>, int> inter;
    for (auto &kv : wordDocs) {
      auto &ids = kv.second;
      for (size_t a = 0; a < ids.size(); a++) {
        for (size_t b = a + 1; b < ids.size(); b++) {
          inter[{ids[a], ids[b]}]++;
        }
      }
    }
    vector<string> res;
    for (auto &kv : inter) {
      int i = kv.first.first, j = kv.first.second;
      int c = kv.second;
      int uni = docs[i].size() + docs[j].size() - c;
      ostringstream oss;
      oss << i << "," << j << ": " << fixed << setprecision(4) << (double)c / uni;
      res.push_back(oss.str());
    }
    return res;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<vector<int>> docs = {{14, 15, 100, 9, 3}, {32, 1, 9, 3, 5}, {15, 29, 2, 6, 8, 7}, {7, 10}};
  cout << "Input:  [[14,15,100,9,3],[32,1,9,3,5],[15,29,2,6,8,7],[7,10]]" << endl;
  Solution solution;
  vector<string> res = solution.computeSimilarities(docs);
  cout << "Output: [";
  for (size_t i = 0; i < res.size(); i++) cout << (i == 0 ? "" : ", ") << "\"" << res[i] << "\"";
  cout << "]" << endl;
  return EXIT_SUCCESS;
}
