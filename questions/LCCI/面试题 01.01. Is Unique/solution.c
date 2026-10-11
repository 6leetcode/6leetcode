#include <stdbool.h>
#include <stdio.h>
#include <string.h>

// ------------------------------- solution begin -------------------------------
bool isUnique(char *astr) {
  bool seen[128] = {false};
  for (int i = 0; astr[i]; i++) {
    unsigned char c = (unsigned char)astr[i];
    if (seen[c]) return false;
    seen[c] = true;
  }
  return true;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  char input[] = "leetcode";
  printf("Input:  %s\n", input);
  printf("Output: %s\n", isUnique(input) ? "true" : "false");
  return 0;
}
