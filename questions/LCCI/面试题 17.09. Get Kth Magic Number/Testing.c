#include <stdio.h>
#include <stdlib.h>

// ------------------------------- solution begin -------------------------------
int getKthMagicNumber(int k) {
  long long *dp = (long long *)malloc(sizeof(long long) * k);
  dp[0] = 1;
  int i3 = 0, i5 = 0, i7 = 0;
  for (int i = 1; i < k; i++) {
    long long n3 = dp[i3] * 3, n5 = dp[i5] * 5, n7 = dp[i7] * 7;
    long long m = n3;
    if (n5 < m) m = n5;
    if (n7 < m) m = n7;
    dp[i] = m;
    if (m == n3) i3++;
    if (m == n5) i5++;
    if (m == n7) i7++;
  }
  int res = (int)dp[k - 1];
  free(dp);
  return res;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int input = 5;
  printf("Input:  %d\n", input);
  printf("Output: %d\n", getKthMagicNumber(input));
  return EXIT_SUCCESS;
}
