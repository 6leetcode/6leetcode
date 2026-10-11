#include <iostream>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  bool detectCapitalUse(string word) {
    int size = word.size();
    int count_isupper = 0, count_islower = 0;
    for (int i = 0; i < size; i++) {
      if (islower(word[i]))
        count_islower++;
      else
        count_isupper++;
    }
    return count_isupper == size || count_islower == size || count_isupper == 1 && isupper(word[0]);
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  string input = "Google";
  cout << "Input:  " << input << endl;
  Solution solution;
  cout << "Output: " << solution.detectCapitalUse(input) << endl;
  return EXIT_SUCCESS;
}
