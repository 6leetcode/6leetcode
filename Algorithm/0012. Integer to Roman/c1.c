#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

char *intToRoman(int num) {
  char *symbol[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
  int value[]    = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
  char *result   = (char *)malloc(30 * sizeof(char));
  bzero(result, 30 * sizeof(char));
  for (int i = 0; num != 0; i++) {
    while (num >= value[i]) {
      num -= value[i];
      strcat(result, symbol[i]);
    }
  }
  return result;
}

int main(int argc, char const *argv[]) {
  int input = 3;
  printf("Input: %d\n", input);
  char *output = intToRoman(input);
  printf("Output: %s\n", output);
  free(output);
  return EXIT_SUCCESS;
}
