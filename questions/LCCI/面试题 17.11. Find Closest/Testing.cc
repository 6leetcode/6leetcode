#include <iostream>
#include <string>
#include <vector>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  int findClosest(vector<string> &words, string word1, string word2) {
    int best = words.size(), p1 = -1, p2 = -1;
    for (int i = 0; i < (int)words.size(); i++) {
      if (words[i] == word1) {
        p1 = i;
        if (p2 != -1) best = min(best, i - p2);
      } else if (words[i] == word2) {
        p2 = i;
        if (p1 != -1) best = min(best, i - p1);
      }
    }
    return best;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<string> words = {"I", "am", "a", "student", "from", "a", "university", "in", "a", "city"};
  string word1 = "a", word2 = "student";
  cout << "Input:  words = [...], word1 = \"a\", word2 = \"student\"" << endl;
  Solution solution;
  cout << "Output: " << solution.findClosest(words, word1, word2) << endl;
  return EXIT_SUCCESS;
}
