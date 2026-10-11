#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  int bestSeqAtIndex(vector<int> &height, vector<int> &weight) {
    vector<pair<int, int>> people;
    for (size_t i = 0; i < height.size(); i++) people.push_back({height[i], weight[i]});
    sort(people.begin(), people.end(), [](const pair<int, int> &a, const pair<int, int> &b) {
      if (a.first != b.first) return a.first < b.first;
      return a.second > b.second;
    });
    vector<int> dp;
    for (auto &p : people) {
      auto it = lower_bound(dp.begin(), dp.end(), p.second);
      if (it == dp.end()) dp.push_back(p.second);
      else *it = p.second;
    }
    return dp.size();
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<int> height = {65, 70, 56, 75, 60, 68};
  vector<int> weight = {100, 150, 90, 190, 95, 110};
  cout << "Input:  height = [65,70,56,75,60,68], weight = [100,150,90,190,95,110]" << endl;
  Solution solution;
  cout << "Output: " << solution.bestSeqAtIndex(height, weight) << endl;
  return EXIT_SUCCESS;
}
