#include <iostream>
#include <vector>

#include <vector.hpp>

using namespace std;

class Solution {
private:
  void backtrack(vector<vector<int>> &res, vector<int> &output, int first, int len) {
    if (first == len) {
      res.emplace_back(output);
      return;
    }
    for (int i = first; i < len; ++i) {
      swap(output[i], output[first]);
      backtrack(res, output, first + 1, len);
      swap(output[i], output[first]);
    }
  }

public:
  vector<vector<int>> permute(vector<int> &nums) {
    vector<vector<int>> res;
    backtrack(res, nums, 0, (int)nums.size());
    return res;
  }
};

int main() {
  vector<int> input = {1, 2, 3};
  cout << "Input:  " << vector_show(input) << endl;
  cout << "Output: ";
  Solution solution;
  vector<vector<int>> output = solution.permute(input);
  cout << "[";
  if (output.size() > 1) {
    cout << vector_show(input);
  }
  for (auto i : output) {
    cout << ", " << vector_show(i);
  }
  cout << "]" << endl;
}
