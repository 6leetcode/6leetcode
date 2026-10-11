#include <algorithm>
#include <iostream>
#include <vector>

#include <cc/array.hpp>
#include <cc/matrix.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  vector<vector<int>> merge(vector<vector<int>> &intervals) {
    if (intervals.size() == 0) {
      return {};
    }
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> merged;
    for (int i = 0; i < intervals.size(); ++i) {
      int L = intervals[i][0], R = intervals[i][1];
      if (!merged.size() || merged.back()[1] < L) {
        merged.push_back({L, R});
      } else {
        merged.back()[1] = max(merged.back()[1], R);
      }
    }
    return merged;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<vector<int>> input = {{1, 4}, {4, 5}};
  cout << "Input:  " << matrix_show(input) << endl;
  Solution solution;
  cout << "Output: " << matrix_show(solution.merge(input)) << endl;
  return EXIT_SUCCESS;
}
