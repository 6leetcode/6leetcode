#include <algorithm>
#include <iostream>
#include <vector>

#include <cc/array.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  int candy(vector<int> &ratings) {
    int n = ratings.size();
    vector<int> c(n, 1);

    for (int i = 1; i < n; i++) {
      if (ratings[i] > ratings[i - 1]) {
        c[i] = c[i - 1] + 1;
      }
    }
    for (int i = n - 2; i >= 0; i--) {
      if (ratings[i] > ratings[i + 1] && c[i] <= c[i + 1]) {
        c[i] = c[i + 1] + 1;
      }
    }

    int total = 0;
    for (int i = 0; i < n; i++) {
      total += c[i];
    }
    return total;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  Solution solution;

  vector<int> t1 = {1, 0, 2};
  cout << "Input:  " << array_show(t1) << endl;
  cout << "Output: " << solution.candy(t1) << endl;

  vector<int> t2 = {1, 2, 2};
  cout << "Input:  " << array_show(t2) << endl;
  cout << "Output: " << solution.candy(t2) << endl;

  return EXIT_SUCCESS;
}
