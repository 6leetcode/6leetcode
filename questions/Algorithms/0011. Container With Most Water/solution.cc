#include <algorithm>
#include <iostream>
#include <vector>

#include <cc/array.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  int maxArea(vector<int> &height) {
    int left = 0, right = height.size() - 1, best = 0;
    while (left < right) {
      int h = min(height[left], height[right]);
      best = max(best, (right - left) * h);
      if (height[left] < height[right]) {
        left++;
      } else {
        right--;
      }
    }
    return best;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<int> input = {1, 8, 6, 2, 5, 4, 8, 3, 7};
  cout << "Input:  " << array_show(input) << endl;
  Solution solution;
  cout << "Output: " << solution.maxArea(input) << endl;
  return EXIT_SUCCESS;
}
