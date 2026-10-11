#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
  bool onSegment(vector<int> &p, vector<int> &a, vector<int> &b) {
    double cross = (double)(b[0] - a[0]) * (p[1] - a[1]) - (double)(b[1] - a[1]) * (p[0] - a[0]);
    if (fabs(cross) > 1e-9) return false;
    return p[0] >= min(a[0], b[0]) && p[0] <= max(a[0], b[0]) && p[1] >= min(a[1], b[1]) &&
           p[1] <= max(a[1], b[1]);
  }

public:
  vector<double> intersection(vector<int> &start1, vector<int> &end1, vector<int> &start2, vector<int> &end2) {
    double x1 = start1[0], y1 = start1[1], x2 = end1[0], y2 = end1[1];
    double x3 = start2[0], y3 = start2[1], x4 = end2[0], y4 = end2[1];
    double d = (x1 - x2) * (y3 - y4) - (y1 - y2) * (x3 - x4);
    if (fabs(d) > 1e-12) {
      double t = ((x1 - x3) * (y3 - y4) - (y1 - y3) * (x3 - x4)) / d;
      double u = ((x1 - x3) * (y1 - y2) - (y1 - y3) * (x1 - x2)) / d;
      if (t >= -1e-9 && t <= 1 + 1e-9 && u >= -1e-9 && u <= 1 + 1e-9) {
        return {x1 + t * (x2 - x1), y1 + t * (y2 - y1)};
      }
      return {};
    }
    vector<vector<int>> candidates;
    if (onSegment(start1, start2, end2)) candidates.push_back(start1);
    if (onSegment(end1, start2, end2)) candidates.push_back(end1);
    if (onSegment(start2, start1, end1)) candidates.push_back(start2);
    if (onSegment(end2, start1, end1)) candidates.push_back(end2);
    if (candidates.empty()) return {};
    sort(candidates.begin(), candidates.end());
    return {(double)candidates[0][0], (double)candidates[0][1]};
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<int> start1 = {0, 0}, end1 = {1, 0}, start2 = {1, 1}, end2 = {0, -1};
  cout << "Input:  line1 = {0, 0}, {1, 0}; line2 = {1, 1}, {0, -1}" << endl;
  Solution solution;
  vector<double> res = solution.intersection(start1, end1, start2, end2);
  cout << "Output: {" << res[0] << ", " << res[1] << "}" << endl;
  return EXIT_SUCCESS;
}
