#include <iostream>
#include <vector>

#include <cc/matrix.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  vector<vector<int>> insert(vector<vector<int>> &intervals, vector<int> &newInterval) {
    vector<vector<int>> res;
    int i = 0;
    while (i < (int)intervals.size() && intervals[i][1] < newInterval[0]) {
      res.push_back(intervals[i++]);
    }
    int lo = newInterval[0], hi = newInterval[1];
    while (i < (int)intervals.size() && intervals[i][0] <= hi) {
      lo = min(lo, intervals[i][0]);
      hi = max(hi, intervals[i][1]);
      i++;
    }
    res.push_back({lo, hi});
    while (i < (int)intervals.size()) {
      res.push_back(intervals[i++]);
    }
    return res;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<vector<int>> input = {{1, 3}, {6, 9}};
  vector<int> newInterval = {2, 5};
  cout << "Input:  " << matrix_show(input) << " [2, 5]" << endl;
  Solution solution;
  cout << "Output: " << matrix_show(solution.insert(input, newInterval)) << endl;
  return EXIT_SUCCESS;
}
