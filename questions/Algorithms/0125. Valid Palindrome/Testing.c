#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------------------- solution begin -------------------------------
bool isPalindrome(char *s) {
  int left = 0;
  int right = (int)strlen(s) - 1;

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
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  char s1[] = "A man, a plan, a canal: Panama";
  char s2[] = "race a car";
  char s3[] = " ";
  char s4[] = "0P";

  printf("Input:  \"%s\"\n", s1);
  printf("Output: %s\n", isPalindrome(s1) ? "true" : "false");

  printf("Input:  \"%s\"\n", s2);
  printf("Output: %s\n", isPalindrome(s2) ? "true" : "false");

  printf("Input:  \"%s\"\n", s3);
  printf("Output: %s\n", isPalindrome(s3) ? "true" : "false");

  printf("Input:  \"%s\"\n", s4);
  printf("Output: %s\n", isPalindrome(s4) ? "true" : "false");

  return EXIT_SUCCESS;
}
