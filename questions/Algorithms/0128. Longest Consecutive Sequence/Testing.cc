#include <algorithm>
#include <iostream>
#include <unordered_set>
#include <vector>

#include <cc/array.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  int longestConsecutive(vector<int> &nums) {
    unordered_set<int> st(nums.begin(), nums.end());
    int best = 0;
    for (int num : st) {
      if (st.find(num - 1) == st.end()) {
        int cur = num;
        int len = 1;
        while (st.find(cur + 1) != st.end()) {
          cur++;
          len++;
        }
        best = max(best, len);
      }
    }
    return best;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  Solution solution;
  vector<vector<int>> tests = {
      {100, 4, 200, 1, 3, 2},
      {0, 3, 7, 2, 5, 8, 4, 6, 0, 1},
      {1, 0, 1, 2},
  };
  for (vector<int> &nums : tests) {
    cout << "Input:  " << array_show(nums) << endl;
    cout << "Output: " << solution.longestConsecutive(nums) << endl;
  }
  return EXIT_SUCCESS;
}
