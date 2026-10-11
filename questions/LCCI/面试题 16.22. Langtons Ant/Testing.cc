#include <iostream>
#include <set>
#include <string>
#include <utility>
#include <vector>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  vector<string> printKMoves(int K) {
    int dr[] = {0, 1, 0, -1};
    int dc[] = {1, 0, -1, 0};
    int dir = 0, r = 0, c = 0;
    set<pair<int, int>> black;
    set<pair<int, int>> visited;
    visited.insert({0, 0});
    for (int k = 0; k < K; k++) {
      auto p = make_pair(r, c);
      if (!black.count(p)) {
        black.insert(p);
        dir = (dir + 1) % 4;
      } else {
        black.erase(p);
        dir = (dir + 3) % 4;
      }
      r += dr[dir];
      c += dc[dir];
      visited.insert({r, c});
    }
    int minR = 0, maxR = 0, minC = 0, maxC = 0;
    for (auto &p : visited) {
      minR = min(minR, p.first);
      maxR = max(maxR, p.first);
      minC = min(minC, p.second);
      maxC = max(maxC, p.second);
    }
    const string letters = "RDLU";
    vector<string> res;
    for (int i = minR; i <= maxR; i++) {
      string row;
      for (int j = minC; j <= maxC; j++) {
        if (i == r && j == c) {
          row += letters[dir];
        } else if (black.count({i, j})) {
          row += 'X';
        } else {
          row += '_';
        }
      }
      res.push_back(row);
    }
    return res;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int K = 0;
  cout << "Input:  " << K << endl;
  Solution solution;
  vector<string> res = solution.printKMoves(K);
  cout << "Output: [";
  for (size_t i = 0; i < res.size(); i++) cout << (i == 0 ? "" : ", ") << "\"" << res[i] << "\"";
  cout << "]" << endl;
  return EXIT_SUCCESS;
}
