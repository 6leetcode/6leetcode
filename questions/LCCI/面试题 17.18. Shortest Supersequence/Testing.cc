#include <iostream>
#include <unordered_set>
#include <vector>

#include <cc/array.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  vector<int> shortestSeq(vector<int> &big, vector<int> &small) {
    unordered_set<int> need(small.begin(), small.end());
    int bestLen = big.size() + 1, bestL = -1, bestR = -1;
    for (int l = 0; l < (int)big.size(); l++) {
      if (!need.count(big[l])) continue;
      int found = 0, r = l;
      unordered_set<int> seen;
      for (; r < (int)big.size(); r++) {
        if (need.count(big[r]) && !seen.count(big[r])) {
          seen.insert(big[r]);
          found++;
          if (found == (int)need.size()) break;
        }
      }
      if (found == (int)need.size()) {
        int len = r - l + 1;
        if (len < bestLen) {
          bestLen = len;
          bestL = l;
          bestR = r;
        }
      }
    }
    if (bestL == -1) return {};
    return {bestL, bestR};
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<int> big = {7, 5, 9, 0, 2, 1, 3, 5, 7, 9, 1, 1, 5, 8, 8, 9, 7};
  vector<int> small = {1, 5, 9};
  cout << "Input:  big = " << array_show(big) << ", small = " << array_show(small) << endl;
  Solution solution;
  cout << "Output: " << array_show(solution.shortestSeq(big, small)) << endl;
  return EXIT_SUCCESS;
}
