#include <iostream>
#include <vector>

#include <cc/array.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  vector<int> plusOne(vector<int> &digits) {
    int n = digits.size();
    int carry = 1;
    for (int i = n - 1; i >= 0; i--) {
      int new_digit = (digits[i] + carry) % 10;
      carry = (digits[i] + carry) / 10;
      digits[i] = new_digit;
    }
    if (carry) digits.insert(digits.begin(), 1);
    return digits;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<int> input = {9, 9};
  cout << "Input:  " << array_show(input) << endl;
  Solution solution;
  vector<int> output = solution.plusOne(input);
  cout << "Output: " << array_show(output) << endl;
  return 0;
}
