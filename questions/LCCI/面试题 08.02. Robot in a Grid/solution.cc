#include <iostream>
#include <vector>

#include <cc/matrix.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
  bool dfs(vector<vector<int>> &g, int r, int c, vector<vector<bool>> &visited, vector<vector<int>> &path) {
    if (r >= (int)g.size() || c >= (int)g[0].size() || g[r][c] == 1 || visited[r][c]) return false;
    visited[r][c] = true;
    if ((r == (int)g.size() - 1 && c == (int)g[0].size() - 1) || dfs(g, r + 1, c, visited, path) ||
        dfs(g, r, c + 1, visited, path)) {
      path.push_back({r, c});
      return true;
    }
    return false;
  }

public:
  vector<vector<int>> pathWithObstacles(vector<vector<int>> &obstacleGrid) {
    int rows = obstacleGrid.size(), cols = obstacleGrid[0].size();
    vector<vector<bool>> visited(rows, vector<bool>(cols, false));
    vector<vector<int>> path;
    if (!dfs(obstacleGrid, 0, 0, visited, path)) return {};
    reverse(path.begin(), path.end());
    return path;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<vector<int>> input = {{0, 0, 0}, {0, 1, 0}, {0, 0, 0}};
  cout << "Input:  [[0,0,0],[0,1,0],[0,0,0]]" << endl;
  Solution solution;
  cout << "Output: " << matrix_show(solution.pathWithObstacles(input)) << endl;
  return EXIT_SUCCESS;
}
