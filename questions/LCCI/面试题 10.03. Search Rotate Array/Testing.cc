#include <iostream>
#include <vector>

#include <cc/array.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  int search(vector<int> &arr, int target) {
    int lo = 0, hi = arr.size() - 1, res = -1;
    while (lo <= hi) {
      int mid = lo + (hi - lo) / 2;
      if (arr[mid] == target) {
        res = mid;
        hi = mid - 1;
      } else if (arr[mid] > arr[lo]) {
        if (target >= arr[lo] && target < arr[mid]) {
          hi = mid - 1;
        } else {
          lo = mid + 1;
        }
      } else if (arr[mid] < arr[lo]) {
        if (target > arr[mid] && target <= arr[hi]) {
          lo = mid + 1;
        } else {
          hi = mid - 1;
        }
      } else {
        if (arr[lo] != target) {
          lo++;
        } else {
          res = mid;
          hi = mid - 1;
        }
      }
    }
    return res;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<int> arr = {15, 16, 19, 20, 25, 1, 3, 4, 5, 7, 10, 14};
  int target = 5;
  cout << "Input:  " << array_show(arr) << ", target = " << target << endl;
  Solution solution;
  cout << "Output: " << solution.search(arr, target) << endl;
  return EXIT_SUCCESS;
}
