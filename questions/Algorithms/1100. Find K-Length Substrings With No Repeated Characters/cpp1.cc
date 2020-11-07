#include <iostream>
#include <unordered_map>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  int numKLenSubstrNoRepeats(string S, int k) {
    unordered_map<char, int> mp;
    int n = S.size();
    if (n < k)
      return 0;
    int ans = 0;

    for (int i = 0; i < k; i++)
      mp[S[i]]++;

    if (mp.size() == k)
      ans++;

    for (int i = k; i < n; i++) {
      mp[S[i - k]]--;
      if (!mp[S[i - k]])
        mp.erase(S[i - k]);

      mp[S[i]]++;

      if (mp.size() == k)
        ans++;
    }
    return ans;
  }
};

// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  Solution solution;
  string input1 = "havefunonleetcode";
  int input2 = 5;
  int output = solution.numKLenSubstrNoRepeats(input1, input2);
  cout << "Input:  " << input1 << " " << input2 << endl;
  cout << "Output: " << output << endl;
  return EXIT_SUCCESS;
}
