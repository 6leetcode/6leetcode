#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------------------- solution begin -------------------------------
int numKLenSubstrNoRepeats(char *S, int k) {
  int n = strlen(S);
  if (n < k) {
    return 0;
  }
  int count[26] = {0};
  int ans = 0, distinct = 0;
  for (int i = 0; i < n; i++) {
    int idx = S[i] - 'a';
    if (count[idx] == 0) {
      distinct++;
    }
    count[idx]++;
    if (i >= k) {
      int rm = S[i - k] - 'a';
      count[rm]--;
      if (count[rm] == 0) {
        distinct--;
      }
    }
    if (i >= k - 1 && distinct == k) {
      ans++;
    }
  }
  return ans;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  char input1[] = "havefunonleetcode";
  int input2 = 5;
  printf("Input:  %s %d\n", input1, input2);
  printf("Output: %d\n", numKLenSubstrNoRepeats(input1, input2));
  return EXIT_SUCCESS;
}
