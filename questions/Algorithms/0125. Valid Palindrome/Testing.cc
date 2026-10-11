#include <cctype>
#include <iostream>
#include <string>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  bool isPalindrome(string s) {
    int left = 0;
    int right = (int)s.size() - 1;

    while (left < right) {
      while (left < right && !isalnum((unsigned char)s[left])) {
        left++;
      }
      while (left < right && !isalnum((unsigned char)s[right])) {
        right--;
      }
      if (tolower((unsigned char)s[left]) != tolower((unsigned char)s[right])) {
        return false;
      }
      left++;
      right--;
    }

    return true;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  Solution solution;

  string s1 = "A man, a plan, a canal: Panama";
  string s2 = "race a car";
  string s3 = " ";
  string s4 = "0P";

  cout << "Input:  \"" << s1 << "\"" << endl;
  cout << "Output: " << (solution.isPalindrome(s1) ? "true" : "false") << endl;

  cout << "Input:  \"" << s2 << "\"" << endl;
  cout << "Output: " << (solution.isPalindrome(s2) ? "true" : "false") << endl;

  cout << "Input:  \"" << s3 << "\"" << endl;
  cout << "Output: " << (solution.isPalindrome(s3) ? "true" : "false") << endl;

  cout << "Input:  \"" << s4 << "\"" << endl;
  cout << "Output: " << (solution.isPalindrome(s4) ? "true" : "false") << endl;

  return EXIT_SUCCESS;
}
