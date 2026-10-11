#include <stdbool.h>
#include <stdio.h>
#include <string.h>

// ------------------------------- solution begin -------------------------------
bool CheckPermutation(char *s1, char *s2) {
  int n1 = strlen(s1), n2 = strlen(s2);
  if (n1 != n2) return false;
  int count[128] = {0};
  for (int i = 0; i < n1; i++) {
    count[(unsigned char)s1[i]]++;
    count[(unsigned char)s2[i]]--;
  }
  for (int i = 0; i < 128; i++) {
    if (count[i]) return false;
  }
  return true;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  char s1[] = "abc", s2[] = "bca";
  printf("Input:  %s %s\n", s1, s2);
  printf("Output: %s\n", CheckPermutation(s1, s2) ? "true" : "false");
  return 0;
}
