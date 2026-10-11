#include <iostream>
#include <string>
#include <vector>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  string getPermutation(int n, int k) {
    vector<int> fact(n + 1, 1);
    for (int i = 1; i <= n; i++) fact[i] = fact[i - 1] * i;
    string nums;
    for (int i = 1; i <= n; i++) nums += to_string(i);
    string res;
    k--;
    for (int i = n; i >= 1; i--) {
      int idx = k / fact[i - 1];
      res += nums[idx];
      nums.erase(nums.begin() + idx);
      k %= fact[i - 1];
    }
    return res;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int n = 3, k = 3;
  cout << "Input:  " << n << " " << k << endl;
  Solution solution;
  cout << "Output: " << solution.getPermutation(n, k) << endl;
  return EXIT_SUCCESS;
}
