#include <iostream>
#include <unordered_map>
#include <vector>

#include <cc/array.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  vector<int> twoSum(vector<int> &nums, int target) {
    unordered_map<int, int> umap;
    for (int i = 0; i < nums.size(); i++) {
      if (umap.find(target - nums[i]) != umap.end()) {
        return vector<int>{umap.find(target - nums[i])->second, i};
      }
      umap[nums[i]] = i;
    }
    return vector<int>{-1, -1};
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  Solution solution;
  vector<int> input = {1, 2, 3};
  int target = 3;
  cout << "Input: " << array_show(input) << " " << target << endl;
  vector<int> output = solution.twoSum(input, target);
  cout << "Output: " << array_show(output) << endl;
  return EXIT_SUCCESS;
}
