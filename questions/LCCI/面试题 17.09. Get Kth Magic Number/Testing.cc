#include <iostream>
#include <vector>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  int getKthMagicNumber(int k) {
    vector<long long> dp(k, 1);
    int i3 = 0, i5 = 0, i7 = 0;
    for (int i = 1; i < k; i++) {
      long long n3 = dp[i3] * 3, n5 = dp[i5] * 5, n7 = dp[i7] * 7;
      long long m = min(n3, min(n5, n7));
      dp[i] = m;
      if (m == n3) i3++;
      if (m == n5) i5++;
      if (m == n7) i7++;
    }
    return (int)dp[k - 1];
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int input = 5;
  cout << "Input:  " << input << endl;
  Solution solution;
  cout << "Output: " << solution.getKthMagicNumber(input) << endl;
  return EXIT_SUCCESS;
}
