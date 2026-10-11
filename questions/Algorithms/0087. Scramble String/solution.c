#include <stdbool.h>
#include <stdio.h>
#include <string.h>

// ------------------------------- solution begin -------------------------------
static bool scrambleCheck(const char *s1, const char *s2, int len) {
  if (len == 1) return s1[0] == s2[0];

  int cnt[26] = {0};
  for (int i = 0; i < len; i++) {
    cnt[s1[i] - 'a']++;
    cnt[s2[i] - 'a']--;
  }
  for (int i = 0; i < 26; i++) {
    if (cnt[i]) return false;
  }

  for (int i = 1; i < len; i++) {
    if ((scrambleCheck(s1, s2, i) && scrambleCheck(s1 + i, s2 + i, len - i)) ||
        (scrambleCheck(s1, s2 + len - i, i) && scrambleCheck(s1 + i, s2, len - i))) {
      return true;
    }
  }
  return false;
}

bool isScramble(char *s1, char *s2) {
  int n = strlen(s1);
  if (n != (int)strlen(s2)) return false;
  return scrambleCheck(s1, s2, n);
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  char s1[] = "great", s2[] = "rgeat";
  printf("Input:  %s %s\n", s1, s2);
  printf("Output: %s\n", isScramble(s1, s2) ? "true" : "false");
  return 0;
}
