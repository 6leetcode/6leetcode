#include <algorithm>
#include <iostream>
#include <vector>

#include <cc/array.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  vector<int> subSort(vector<int> &array) {
    int m = -1, n = -1;
    int mx = array[0];
    for (int i = 1; i < (int)array.size(); i++) {
      if (array[i] < mx) {
        n = i;
      } else {
        mx = array[i];
      }
    }
    int mn = array.back();
    for (int i = (int)array.size() - 2; i >= 0; i--) {
      if (array[i] > mn) {
        m = i;
      } else {
        mn = array[i];
      }
    }
    return {m, n};
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<int> array = {1, 2, 4, 7, 10, 11, 7, 12, 6, 7, 16, 18, 19};
  cout << "Input:  " << array_show(array) << endl;
  Solution solution;
  cout << "Output: " << array_show(solution.subSort(array)) << endl;
  return EXIT_SUCCESS;
}
