#include <algorithm>
#include <iostream>
#include <vector>

#include <cc/array.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  vector<int> smallestK(vector<int> &arr, int k) {
    sort(arr.begin(), arr.end());
    return vector<int>(arr.begin(), arr.begin() + k);
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<int> arr = {1, 3, 5, 7, 2, 4, 6, 8};
  int k = 4;
  cout << "Input:  " << array_show(arr) << ", k = " << k << endl;
  Solution solution;
  cout << "Output: " << array_show(solution.smallestK(arr, k)) << endl;
  return EXIT_SUCCESS;
}
