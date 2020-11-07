#include <iostream>
#include <unordered_map>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  string freqAlphabets(string s) {
    unordered_map<string, char> mp;
    for (int i = 1; i <= 9; i++)
      mp[to_string(i)] = 'a' + i - 1;

    for (int i = 10; i <= 26; i++)
      mp[to_string(i) + '#'] = 'j' + i - 10;

    string result = "";
    for (int i = 0; i < s.size(); i++) {
      if (i + 2 < s.size()) {
        auto t = s.substr(i, 3);
        if (mp.count(t)) {
          result += mp[t];
          i += 2;
          continue;
        }
      }
      result += mp[s.substr(i, 1)];
    }
    return result;
  }
};

// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  Solution solution;
  string input = "12345678910#11#12#13#14#15#16#17#18#19#20#21#22#23#24#25#26#";
  string output = solution.freqAlphabets(input);
  cout << "Input:  " << input << endl;
  cout << "Output: " << output << endl;
  return EXIT_SUCCESS;
}
