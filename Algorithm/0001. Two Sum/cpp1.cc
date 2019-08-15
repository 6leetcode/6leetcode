#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

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

int main(int argc, char const *argv[]) {
  Solution solution;
  vector<int> input = {1, 2, 3};

  int target = 3;

  cout << "Input:  [" << input[0];
  for (int i = 1; i < input.size(); i++) {
    cout << ", " << input[i];
  }
  cout << "] " << target << endl;
  vector<int> output = solution.twoSum(input, target);
  cout << "Output: [" << output[0];
  for (int i = 1; i < output.size(); i++) {
    cout << ", " << output[i];
  }
  cout << "]" << endl;
  return 0;
}
