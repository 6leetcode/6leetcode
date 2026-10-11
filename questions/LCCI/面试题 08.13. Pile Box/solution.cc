#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  int pileBox(vector<vector<int>> &box) {
    sort(box.begin(), box.end());
    int n = box.size(), best = 0;
    vector<int> dp(n, 0);
    for (int i = 0; i < n; i++) {
      dp[i] = box[i][2];
      for (int j = 0; j < i; j++) {
        if (box[j][0] < box[i][0] && box[j][1] < box[i][1] && box[j][2] < box[i][2]) {
          dp[i] = max(dp[i], dp[j] + box[i][2]);
        }
      }
      best = max(best, dp[i]);
    }
    return best;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<vector<int>> box = {{1, 1, 1}, {2, 2, 2}, {3, 3, 3}};
  cout << "Input:  [[1,1,1],[2,2,2],[3,3,3]]" << endl;
  Solution solution;
  cout << "Output: " << solution.pileBox(box) << endl;
  return EXIT_SUCCESS;
}
