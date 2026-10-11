#include <cctype>
#include <climits>
#include <iostream>
#include <string>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  int myAtoi(string str) {
    int i = 0, n = str.size();
    while (i < n && str[i] == ' ') i++;

    int sign = 1;
    if (i < n && (str[i] == '+' || str[i] == '-')) {
      sign = str[i] == '-' ? -1 : 1;
      i++;
    }

    long long num = 0;
    while (i < n && isdigit(str[i])) {
      num = num * 10 + (str[i] - '0');
      if (sign == 1 && num > INT_MAX) return INT_MAX;
      if (sign == -1 && -num < INT_MIN) return INT_MIN;
      i++;
    }

    return (int)(sign * num);
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  string input = " -42";
  cout << "Input:  " << input << endl;
  Solution solution;
  cout << "Output: " << solution.myAtoi(input) << endl;
  return EXIT_SUCCESS;
}
