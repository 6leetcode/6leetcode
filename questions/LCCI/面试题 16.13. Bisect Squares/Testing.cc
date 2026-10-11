#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  vector<double> cutSquares(vector<int> &square1, vector<int> &square2) {
    double c1x = square1[0] + square1[2] / 2.0, c1y = square1[1] + square1[2] / 2.0;
    double c2x = square2[0] + square2[2] / 2.0, c2y = square2[1] + square2[2] / 2.0;
    if (fabs(c1x - c2x) < 1e-12) {
      return {c1x, min((double)square1[1], (double)square2[1]), c1x,
              max((double)square1[1] + square1[2], (double)square2[1] + square2[2])};
    }
    double k = (c2y - c1y) / (c2x - c1x);
    double b = c1y - k * c1x;
    vector<pair<double, double>> pts;
    vector<vector<int>> squares = {square1, square2};
    for (auto &sq : squares) {
      double x0 = sq[0], y0 = sq[1], side = sq[2];
      for (double x : {x0, x0 + side}) {
        double y = k * x + b;
        if (y >= y0 - 1e-6 && y <= y0 + side + 1e-6) pts.push_back({x, y});
      }
      if (fabs(k) > 1e-12) {
        for (double y : {y0, y0 + side}) {
          double x = (y - b) / k;
          if (x >= x0 - 1e-6 && x <= x0 + side + 1e-6) pts.push_back({x, y});
        }
      }
    }
    sort(pts.begin(), pts.end());
    return {pts.front().first, pts.front().second, pts.back().first, pts.back().second};
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<int> square1 = {-1, -1, 2}, square2 = {0, -1, 2};
  cout << "Input:  square1 = {-1, -1, 2}, square2 = {0, -1, 2}" << endl;
  Solution solution;
  vector<double> res = solution.cutSquares(square1, square2);
  cout << "Output: {" << res[0] << ", " << res[1] << ", " << res[2] << ", " << res[3] << "}" << endl;
  return EXIT_SUCCESS;
}
