#include <stdbool.h>
#include <stdio.h>
#include <string.h>

// ------------------------------- solution begin -------------------------------
bool canPermutePalindrome(char *s) {
  int count[128] = {0};
  for (int i = 0; s[i]; i++) {
    count[(unsigned char)s[i]] ^= 1;
  }
  int odd = 0;
  for (int i = 0; i < 128; i++) {
    odd += count[i];
  }
  return odd <= 1;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  char input[] = "tactcoa";
  printf("Input:  %s\n", input);
  printf("Output: %s\n", canPermutePalindrome(input) ? "true" : "false");
  return 0;
}
