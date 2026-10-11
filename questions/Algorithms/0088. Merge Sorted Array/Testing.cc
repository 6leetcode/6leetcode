#include <iostream>
#include <vector>

#include <cc/array.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  void merge(vector<int> &nums1, int m, vector<int> &nums2, int n) {
    int i = m - 1, j = n - 1, k = m + n - 1;
    while (j >= 0) {
      if (i >= 0 && nums1[i] > nums2[j]) {
        nums1[k--] = nums1[i--];
      } else {
        nums1[k--] = nums2[j--];
      }
    }
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<int> input1 = {1, 2, 3, 0, 0, 0};
  vector<int> input2 = {2, 5, 6};
  int m = 3, n = 3;
  cout << "Input:  " << array_show(input1) << " " << m << " " << array_show(input2) << " " << n << endl;
  Solution solution;
  solution.merge(input1, m, input2, n);
  cout << "Output: " << array_show(input1) << endl;
  return EXIT_SUCCESS;
}
