#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------------------- solution begin -------------------------------
int respace(char **dictionary, int dictionarySize, char *sentence) {
  int n = strlen(sentence);
  int *dp = (int *)malloc(sizeof(int) * (n + 1));
  dp[0] = 0;
  for (int i = 1; i <= n; i++) {
    dp[i] = dp[i - 1] + 1;
    for (int k = 0; k < dictionarySize; k++) {
      int wl = strlen(dictionary[k]);
      if (i >= wl && strncmp(sentence + i - wl, dictionary[k], wl) == 0) {
        if (dp[i - wl] < dp[i]) dp[i] = dp[i - wl];
      }
    }
  }
  int res = dp[n];
  free(dp);
  return res;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  char *dictionary[] = {"looked", "just", "like", "her", "brother"};
  char sentence[] = "jesslookedjustliketimherbrother";
  printf("Input:  dictionary = [looked, just, like, her, brother], sentence = \"jesslookedjustliketimherbrother\"\n");
  printf("Output: %d\n", respace(dictionary, 5, sentence));
  return EXIT_SUCCESS;
}
