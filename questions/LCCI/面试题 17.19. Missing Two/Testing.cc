#include <cmath>
#include <iostream>
#include <vector>

#include <cc/array.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  vector<int> missingTwo(vector<int> &nums) {
    long long n = nums.size() + 2;
    long long sumAll = n * (n + 1) / 2;
    long long sqAll = n * (n + 1) * (2 * n + 1) / 6;
    long long sum = 0, sq = 0;
    for (int x : nums) {
      sum += x;
      sq += (long long)x * x;
    }
    long long ds = sumAll - sum;
    long long dq = sqAll - sq;
    long long diff = (long long)sqrtl((long double)(2 * dq - ds * ds));
    int a = (int)((ds + diff) / 2);
    int b = (int)(ds - a);
    return {a, b};
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<int> nums = {2, 3};
  cout << "Input:  " << array_show(nums) << endl;
  Solution solution;
  cout << "Output: " << array_show(solution.missingTwo(nums)) << endl;
  return EXIT_SUCCESS;
}
