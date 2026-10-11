#include <algorithm>
#include <iostream>
#include <vector>

#include <cc/array.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  void wiggleSort(vector<int> &nums) {
    sort(nums.begin(), nums.end());
    for (int i = 0; i + 1 < (int)nums.size(); i += 2) {
      swap(nums[i], nums[i + 1]);
    }
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<int> input = {5, 3, 1, 2, 3};
  cout << "Input:  " << array_show(input) << endl;
  Solution solution;
  solution.wiggleSort(input);
  cout << "Output: " << array_show(input) << endl;
  return EXIT_SUCCESS;
}
