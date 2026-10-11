#include <algorithm>
#include <iostream>
#include <vector>

#include <cc/array.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
  int dfs(vector<vector<int>> &land, int r, int c) {
    if (r < 0 || r >= (int)land.size() || c < 0 || c >= (int)land[0].size() || land[r][c] != 0) return 0;
    land[r][c] = -1;
    int size = 1;
    for (int dr = -1; dr <= 1; dr++) {
      for (int dc = -1; dc <= 1; dc++) {
        if (dr != 0 || dc != 0) size += dfs(land, r + dr, c + dc);
      }
    }
    return size;
  }

public:
  vector<int> pondSizes(vector<vector<int>> &land) {
    vector<int> res;
    for (int i = 0; i < (int)land.size(); i++) {
      for (int j = 0; j < (int)land[0].size(); j++) {
        if (land[i][j] == 0) res.push_back(dfs(land, i, j));
      }
    }
    sort(res.begin(), res.end());
    return res;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<vector<int>> land = {{0, 2, 1, 0}, {0, 1, 0, 1}, {1, 1, 0, 1}, {0, 1, 0, 1}};
  cout << "Input:  [[0,2,1,0],[0,1,0,1],[1,1,0,1],[0,1,0,1]]" << endl;
  Solution solution;
  cout << "Output: " << array_show(solution.pondSizes(land)) << endl;
  return EXIT_SUCCESS;
}
