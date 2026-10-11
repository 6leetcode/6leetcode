#include <iostream>
#include <map>
#include <numeric>
#include <vector>

#include <cc/matrix.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  int maxPoints(vector<vector<int>> &points) {
    int n = points.size();
    if (n < 3) return n;

    int best = 1;
    for (int i = 0; i < n; i++) {
      map<pair<int, int>, int> cnt;
      for (int j = i + 1; j < n; j++) {
        int dy = points[j][1] - points[i][1];
        int dx = points[j][0] - points[i][0];
        int g = gcd(dy, dx);
        if (g == 0) g = 1;
        dy /= g;
        dx /= g;
        if (dx < 0 || (dx == 0 && dy < 0)) {
          dy = -dy;
          dx = -dx;
        }
        int c = ++cnt[{dy, dx}];
        best = max(best, c + 1);
      }
    }
    return best;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  Solution solution;

  vector<vector<int>> input1 = {{1, 1}, {2, 2}, {3, 3}};
  cout << "Input:  " << matrix_show(input1) << endl;
  cout << "Output: " << solution.maxPoints(input1) << endl;

  vector<vector<int>> input2 = {{1, 1}, {3, 2}, {5, 3}, {4, 1}, {2, 3}, {1, 4}};
  cout << "Input:  " << matrix_show(input2) << endl;
  cout << "Output: " << solution.maxPoints(input2) << endl;

  return EXIT_SUCCESS;
}
