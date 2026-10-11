#include <iostream>
#include <vector>

#include <cc/array.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  vector<int> bestLine(vector<vector<int>> &points) {
    int bestCount = 2, bestI = 0, bestJ = 1;
    for (int i = 0; i < (int)points.size(); i++) {
      for (int j = i + 1; j < (int)points.size(); j++) {
        long long dx = points[j][0] - points[i][0];
        long long dy = points[j][1] - points[i][1];
        int count = 2;
        for (int k = 0; k < (int)points.size(); k++) {
          if (k == i || k == j) continue;
          long long ddx = points[k][0] - points[i][0];
          long long ddy = points[k][1] - points[i][1];
          if (dx * ddy == dy * ddx) count++;
        }
        if (count > bestCount) {
          bestCount = count;
          bestI = i;
          bestJ = j;
        }
      }
    }
    return {bestI, bestJ};
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<vector<int>> points = {{0, 0}, {1, 1}, {1, 0}, {2, 0}};
  cout << "Input:  [[0,0],[1,1],[1,0],[2,0]]" << endl;
  Solution solution;
  cout << "Output: " << array_show(solution.bestLine(points)) << endl;
  return EXIT_SUCCESS;
}
