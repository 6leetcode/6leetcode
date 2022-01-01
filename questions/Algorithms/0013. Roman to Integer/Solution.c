#include <stdio.h>
#include <stdlib.h>

// ------------------------------- solution begin -------------------------------
int roman_to_integer(char c) {
  switch (c) {
  case 'I':
    return 1;
  case 'V':
    return 5;
  case 'X':
    return 10;
  case 'L':
    return 50;
  case 'C':
    return 100;
  case 'D':
    return 500;
  case 'M':
    return 1000;
  default:
    return 0;
  }
}

int romanToInt(char *s) {
  int i, result = roman_to_integer(s[0]);

  for (i = 1; s[i] != '\0'; i++) {
    int prev = roman_to_integer(s[i - 1]);
    int curr = roman_to_integer(s[i]);
    // if left < right such as : IV(4), XL(40), IX(9) ...
    if (prev < curr) {
      result = result - prev + (curr - prev);
    } else {
      result += curr;
    }
  }

  return result;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  char input[] = "MCMXCIV";
  printf("Input:  %s\n", input);
  printf("Output: %d\n", romanToInt(input));
  return EXIT_SUCCESS;
}
