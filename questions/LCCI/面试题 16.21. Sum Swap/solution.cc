#include <iostream>
#include <vector>

#include <cc/array.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  vector<int> findSwapValues(vector<int> &array1, vector<int> &array2) {
    long long sum1 = 0, sum2 = 0;
    for (int x : array1) sum1 += x;
    for (int x : array2) sum2 += x;
    long long diff = sum2 - sum1;
    if (diff % 2 != 0) return {};
    long long target = diff / 2;
    for (int x : array1) {
      for (int y : array2) {
        if (y == x + target) return {x, y};
      }
    }
    return {};
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<int> array1 = {4, 1, 2, 1, 1, 2};
  vector<int> array2 = {3, 6, 3, 3};
  cout << "Input:  array1 = " << array_show(array1) << ", array2 = " << array_show(array2) << endl;
  Solution solution;
  cout << "Output: " << array_show(solution.findSwapValues(array1, array2)) << endl;
  return EXIT_SUCCESS;
}
