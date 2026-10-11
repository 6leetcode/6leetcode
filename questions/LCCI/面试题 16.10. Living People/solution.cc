#include <iostream>
#include <vector>

#include <cc/array.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  int maxAliveYear(vector<int> &birth, vector<int> &death) {
    vector<int> delta(102, 0);
    for (size_t i = 0; i < birth.size(); i++) {
      delta[birth[i] - 1900]++;
      delta[death[i] - 1900 + 1]--;
    }
    int best = 0, cur = 0, bestYear = 1900;
    for (int i = 0; i <= 100; i++) {
      cur += delta[i];
      if (cur > best) {
        best = cur;
        bestYear = 1900 + i;
      }
    }
    return bestYear;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<int> birth = {1900, 1901, 1950};
  vector<int> death = {1948, 1951, 2000};
  cout << "Input:  birth = " << array_show(birth) << ", death = " << array_show(death) << endl;
  Solution solution;
  cout << "Output: " << solution.maxAliveYear(birth, death) << endl;
  return EXIT_SUCCESS;
}
