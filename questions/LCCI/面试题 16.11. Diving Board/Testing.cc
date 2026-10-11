#include <iostream>
#include <vector>

#include <cc/array.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  vector<int> divingBoard(int shorter, int longer, int k) {
    vector<int> res;
    if (k == 0) return res;
    if (shorter == longer) {
      res.push_back(shorter * k);
      return res;
    }
    for (int i = 0; i <= k; i++) {
      res.push_back(shorter * (k - i) + longer * i);
    }
    return res;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int shorter = 1, longer = 2, k = 3;
  cout << "Input:  shorter = " << shorter << ", longer = " << longer << ", k = " << k << endl;
  Solution solution;
  cout << "Output: " << array_show(solution.divingBoard(shorter, longer, k)) << endl;
  return EXIT_SUCCESS;
}
