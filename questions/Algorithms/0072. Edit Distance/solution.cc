#include <iostream>
#include <string>
#include <vector>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  int minDistance(string word1, string word2) {
    int m = word1.size(), n = word2.size();
    vector<int> dp(n + 1);
    for (int j = 0; j <= n; j++) dp[j] = j;
    for (int i = 1; i <= m; i++) {
      int prev = dp[0];
      dp[0] = i;
      for (int j = 1; j <= n; j++) {
        int tmp = dp[j];
        if (word1[i - 1] == word2[j - 1]) {
          dp[j] = prev;
        } else {
          dp[j] = 1 + min(prev, min(dp[j], dp[j - 1]));
        }
        prev = tmp;
      }
    }
    return dp[n];
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  string word1 = "horse", word2 = "ros";
  cout << "Input:  " << word1 << " " << word2 << endl;
  Solution solution;
  cout << "Output: " << solution.minDistance(word1, word2) << endl;
  return EXIT_SUCCESS;
}
