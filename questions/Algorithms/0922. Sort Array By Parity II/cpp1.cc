#include <iostream>
#include <vector>

#include <vector.hpp>

using namespace std;

class Solution {
public:
  vector<int> sortArrayByParityII(vector<int> &A) {
    int n = A.size();
    vector<int> ans(n);

    int i = 0;
    for (int x : A) {
      if (x % 2 == 0) {
        ans[i] = x;
        i += 2;
      }
    }
    i = 1;
    for (int x : A) {
      if (x % 2 == 1) {
        ans[i] = x;
        i += 2;
      }
    }
    return ans;
  }
};

int main(int argc, char const *argv[]) {
  vector<int> input = {4, 2, 5, 7};
  cout << "Input:  " << vector_show(input) << endl;
  Solution solution;
  cout << "Output: " << vector_show(solution.sortArrayByParityII(input)) << endl;
  return 0;
}
