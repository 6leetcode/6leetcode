#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  int respace(vector<string> &dictionary, string sentence) {
    unordered_set<string> words(dictionary.begin(), dictionary.end());
    int n = sentence.size();
    vector<int> dp(n + 1, 0);
    for (int i = 1; i <= n; i++) {
      dp[i] = dp[i - 1] + 1;
      for (const string &w : dictionary) {
        int wl = w.size();
        if (i >= wl && sentence.compare(i - wl, wl, w) == 0) {
          dp[i] = min(dp[i], dp[i - wl]);
        }
      }
    }
    return dp[n];
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<string> dictionary = {"looked", "just", "like", "her", "brother"};
  string sentence = "jesslookedjustliketimherbrother";
  cout << "Input:  dictionary = [looked, just, like, her, brother], sentence = \"jesslookedjustliketimherbrother\"" << endl;
  Solution solution;
  cout << "Output: " << solution.respace(dictionary, sentence) << endl;
  return EXIT_SUCCESS;
}
