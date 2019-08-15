#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2) {
    double result = 0;
    nums1.insert(nums1.end(), nums2.begin(), nums2.end());
    sort(nums1.begin(), nums1.end());

    uint length = nums1.size();
    if (length % 2 == 0) {
      result = (nums1[length / 2 - 1] + nums1[length / 2]) / 2.0;
    } else {
      result = double(nums1[length / 2]);
    }
    return result;
  }
};

int main(int argc, char const *argv[]) {
  vector<int> input1 = {4, 3, 2, 1};
  vector<int> input2 = {9, 8, 7, 6};
  cout << "Input: [ ";
  for (int i = 0; i < input1.size(); i++) {
    cout << input1[i] << " ";
  }
  cout << "] [ ";
  for (int i = 0; i < input2.size(); i++) {
    cout << input2[i] << " ";
  }
  cout << "]" << endl;
  Solution solution;
  cout << "Output: " << solution.findMedianSortedArrays(input1, input2) << endl;
  return EXIT_SUCCESS;
}
