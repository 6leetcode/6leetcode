#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------------------- solution begin -------------------------------
int calculateTime(char *keyboard, char *word) {
  int pos[26];
  for (int i = 0; i < 26; i++) {
    pos[keyboard[i] - 'a'] = i;
  }
  int ans = 0, cur = 0;
  for (int i = 0; word[i]; i++) {
    int next = pos[word[i] - 'a'];
    ans += abs(cur - next);
    cur = next;
  }
  return ans;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  char input1[] = "abcdefghijklmnopqrstuvwxyz";
  char input2[] = "cba";
  printf("Input:  %s %s\n", input1, input2);
  printf("Output: %d\n", calculateTime(input1, input2));
  return EXIT_SUCCESS;
}
