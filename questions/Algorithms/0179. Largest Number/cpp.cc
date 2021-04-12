#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <vector>

#include <vector.hpp>

using namespace std;

class Solution {
public:
  string largestNumber(vector<int> &nums) {
    sort(nums.begin(), nums.end(), [](const int &x, const int &y) {
      long sx = 10, sy = 10;
      while (sx <= x) {
        sx *= 10;
      }
      while (sy <= y) {
        sy *= 10;
      }
      return sy * x + y > sx * y + x;
    });
    if (nums[0] == 0) {
      return "0";
    }
    string ret;
    for (int &x : nums) {
      ret += to_string(x);
    }
    return ret;
  }
};

int main(int argc, char const *argv[]) {
  vector<int> input = {3, 30, 34, 5, 9};
  cout << "Input:  " << vector_show(input) << endl;
  Solution solution;
  cout << "Output: " << solution.largestNumber(input) << endl;
  return EXIT_SUCCESS;
}
