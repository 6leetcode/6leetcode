#include <iostream>
#include <vector>

#include <cc/matrix.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
  void dfs(vector<vector<int>> &image, int r, int c, int oldColor, int newColor) {
    if (r < 0 || r >= (int)image.size() || c < 0 || c >= (int)image[0].size() || image[r][c] != oldColor) return;
    image[r][c] = newColor;
    dfs(image, r + 1, c, oldColor, newColor);
    dfs(image, r - 1, c, oldColor, newColor);
    dfs(image, r, c + 1, oldColor, newColor);
    dfs(image, r, c - 1, oldColor, newColor);
  }

public:
  vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int newColor) {
    int oldColor = image[sr][sc];
    if (oldColor != newColor) dfs(image, sr, sc, oldColor, newColor);
    return image;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<vector<int>> image = {{1, 1, 1}, {1, 1, 0}, {1, 0, 1}};
  cout << "Input:  [[1,1,1],[1,1,0],[1,0,1]], sr = 1, sc = 1, newColor = 2" << endl;
  Solution solution;
  cout << "Output: " << matrix_show(solution.floodFill(image, 1, 1, 2)) << endl;
  return EXIT_SUCCESS;
}
