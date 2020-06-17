#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  void reverseString(vector<char> &s) {
    for (int i = 0, j = s.size() - 1; i < j; i++, j--) {
      char temp = s[i];
      s[i]      = s[j];
      s[j]      = temp;
    }
  }
};

int main(int argc, char const *argv[]) {
  vector<char> input = {'h', 'e', 'l', 'l', 'o'};
  cout << "Input:  ";
  for (auto i : input) {
    cout << i;
  }
  cout << endl;
  Solution solution;
  solution.reverseString(input);
  cout << "Output: ";
  for (auto i : input) {
    cout << i;
  }
  cout << endl;
  return EXIT_SUCCESS;
}
