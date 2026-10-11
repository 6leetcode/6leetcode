#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>

#include <cc/array.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  int smallestDifference(vector<int> &a, vector<int> &b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int i = 0, j = 0;
    long long best = LLONG_MAX;
    while (i < (int)a.size() && j < (int)b.size()) {
      best = min(best, llabs((long long)a[i] - b[j]));
      if (a[i] < b[j]) {
        i++;
      } else {
        j++;
      }
    }
    return (int)best;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<int> a = {1, 3, 15, 11, 2};
  vector<int> b = {23, 127, 235, 19, 8};
  cout << "Input:  " << array_show(a) << ", " << array_show(b) << endl;
  Solution solution;
  cout << "Output: " << solution.smallestDifference(a, b) << endl;
  return EXIT_SUCCESS;
}
