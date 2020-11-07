#include <iostream>
#include <unordered_map>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  int calculateTime(string keyboard, string word) {
    unordered_map<char, int> mp;
    for (int i = 0; i < 26; i++)
      mp[keyboard[i]] = i;
    int ans = 0;
    int i = 0;
    for (char c : word) {
      ans += abs(i - mp[c]);
      i = mp[c];
    }

    return ans;
  }
};

// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  Solution solution;
  string input1 = "abcdefghijklmnopqrstuvwxyz";
  string input2 = "cba";
  int output = solution.calculateTime(input1, input2);
  cout << "Input:  " << input1 << " " << input2 << endl;
  cout << "Output: " << output << endl;
  return EXIT_SUCCESS;
}
