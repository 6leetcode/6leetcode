#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  string multiply(string num1, string num2) {
    if (num1 == "0" || num2 == "0") {
      return "0";
    }
    int m = num1.size(), n = num2.size();
    auto ansArr = vector<int>(m + n);
    for (int i = m - 1; i >= 0; i--) {
      int x = num1.at(i) - '0';
      for (int j = n - 1; j >= 0; j--) {
        int y = num2.at(j) - '0';
        ansArr[i + j + 1] += x * y;
      }
    }
    for (int i = m + n - 1; i > 0; i--) {
      ansArr[i - 1] += ansArr[i] / 10;
      ansArr[i] %= 10;
    }
    int index = ansArr[0] == 0 ? 1 : 0;
    string ans;
    while (index < m + n) {
      ans.push_back(ansArr[index]);
      index++;
    }
    for (auto &c : ans) {
      c += '0';
    }
    return ans;
  }
};

int main(int argc, char const *argv[]) {
  string input1 = "2333";
  string input2 = "3334";
  cout << "Input:  " << input1 << ", " << input2 << endl;
  Solution solution;
  cout << "Output: " << solution.multiply(input1, input2) << endl;
  return EXIT_SUCCESS;
}
