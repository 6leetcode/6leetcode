#include <iostream>
#include <string>
#include <vector>

#include <cc/array.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
  int idx(char c) {
    if (c == 'R') return 0;
    if (c == 'Y') return 1;
    if (c == 'G') return 2;
    return 3;
  }

public:
  vector<int> masterMind(string solution, string guess) {
    int hits = 0;
    vector<int> sCount(4, 0), gCount(4, 0);
    for (size_t i = 0; i < solution.size(); i++) {
      if (solution[i] == guess[i]) {
        hits++;
      } else {
        sCount[idx(solution[i])]++;
        gCount[idx(guess[i])]++;
      }
    }
    int pseudo = 0;
    for (int i = 0; i < 4; i++) pseudo += min(sCount[i], gCount[i]);
    return {hits, pseudo};
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  string solution = "RGBY", guess = "GGRR";
  cout << "Input:  solution = " << solution << ", guess = " << guess << endl;
  Solution sol;
  cout << "Output: " << array_show(sol.masterMind(solution, guess)) << endl;
  return EXIT_SUCCESS;
}
