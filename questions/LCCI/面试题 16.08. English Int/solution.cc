#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
  const vector<string> ones = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine",
                               "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen",
                               "Seventeen", "Eighteen", "Nineteen"};
  const vector<string> tens = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
  const vector<string> thousands = {"", "Thousand", "Million", "Billion"};

  void below1000(int n, vector<string> &out) {
    if (n >= 100) {
      out.push_back(ones[n / 100]);
      out.push_back("Hundred");
      n %= 100;
    }
    if (n >= 20) {
      out.push_back(tens[n / 10]);
      n %= 10;
    }
    if (n > 0) out.push_back(ones[n]);
  }

public:
  string numberToWords(int num) {
    if (num == 0) return "Zero";
    vector<string> out;
    if (num < 0) {
      out.push_back("Negative");
      num = -num;
    }
    vector<int> chunks;
    int tmp = num;
    while (tmp > 0) {
      chunks.push_back(tmp % 1000);
      tmp /= 1000;
    }
    for (int i = chunks.size() - 1; i >= 0; i--) {
      if (chunks[i] == 0) continue;
      below1000(chunks[i], out);
      if (!thousands[i].empty()) out.push_back(thousands[i]);
    }
    string res;
    for (size_t i = 0; i < out.size(); i++) {
      if (i > 0) res += " ";
      res += out[i];
    }
    return res;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int input = 12345;
  cout << "Input:  " << input << endl;
  Solution solution;
  cout << "Output: \"" << solution.numberToWords(input) << "\"" << endl;
  return EXIT_SUCCESS;
}
