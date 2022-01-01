#include <iostream>
#include <string>

using namespace std;

string intToRoman(int num) {
  string symbol[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
  int value[]     = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
  string result;
  for (int i = 0; num != 0; i++) {
    while (num >= value[i]) {
      num -= value[i];
      result += symbol[i];
    }
  }
  return result;
}

int main(int argc, char const *argv[]) {
  int input = 3;
  cout << "Input: " << input << endl;
  string output = intToRoman(input);
  cout << "Output: " << output << endl;
  return EXIT_SUCCESS;
}
