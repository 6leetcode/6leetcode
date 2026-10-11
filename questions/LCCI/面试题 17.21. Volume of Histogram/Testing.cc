#include <iostream>
#include <vector>

#include <cc/array.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  int trap(vector<int> &height) {
    int l = 0, r = height.size() - 1, lmax = 0, rmax = 0, res = 0;
    while (l < r) {
      if (height[l] < height[r]) {
        if (height[l] >= lmax) lmax = height[l];
        else res += lmax - height[l];
        l++;
      } else {
        if (height[r] >= rmax) rmax = height[r];
        else res += rmax - height[r];
        r--;
      }
    }
    return res;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<int> height = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
  cout << "Input:  " << array_show(height) << endl;
  Solution solution;
  cout << "Output: " << solution.trap(height) << endl;
  return EXIT_SUCCESS;
}
