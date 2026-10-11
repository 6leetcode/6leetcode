#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
  unordered_map<int, vector<string>> byLen;
  vector<string> rows;
  vector<string> best;
  int bestArea = 0;
  int targetW = 0, targetH = 0;

  bool prefixOk() {
    for (int c = 0; c < targetW; c++) {
      string prefix;
      for (int r = 0; r < (int)rows.size(); r++) prefix += rows[r][c];
      bool ok = false;
      for (const string &w : byLen[targetH]) {
        if (w.compare(0, prefix.size(), prefix) == 0) {
          ok = true;
          break;
        }
      }
      if (!ok) return false;
    }
    return true;
  }

  void backtrack() {
    if ((int)rows.size() == targetH) {
      for (int c = 0; c < targetW; c++) {
        string col;
        for (int r = 0; r < targetH; r++) col += rows[r][c];
        if (!count(byLen[targetH].begin(), byLen[targetH].end(), col)) return;
      }
      if (targetW * targetH > bestArea) {
        bestArea = targetW * targetH;
        best = rows;
      }
      return;
    }
    for (const string &w : byLen[targetW]) {
      rows.push_back(w);
      if (prefixOk()) backtrack();
      rows.pop_back();
    }
  }

public:
  vector<string> maxRectangle(vector<string> &words) {
    for (const string &w : words) byLen[w.size()].push_back(w);
    for (auto &a : byLen) {
      for (auto &b : byLen) {
        int w = a.first, h = b.first;
        if (w * h <= bestArea) continue;
        targetW = w;
        targetH = h;
        rows.clear();
        backtrack();
      }
    }
    return best;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<string> words = {"this", "real", "hard", "trh", "hea", "iar", "sld"};
  cout << "Input:  [\"this\", \"real\", \"hard\", \"trh\", \"hea\", \"iar\", \"sld\"]" << endl;
  Solution solution;
  vector<string> res = solution.maxRectangle(words);
  cout << "Output: [";
  for (size_t i = 0; i < res.size(); i++) cout << (i == 0 ? "" : ", ") << "\"" << res[i] << "\"";
  cout << "]" << endl;
  return EXIT_SUCCESS;
}
