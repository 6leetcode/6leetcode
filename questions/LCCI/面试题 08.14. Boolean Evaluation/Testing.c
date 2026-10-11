#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------------------- solution begin -------------------------------
static long long memo[40][40][2];
static bool computed[40][40][2];

static long long solve(char *s, int i, int j, int want) {
  if (i == j) return (s[i] - '0') == want ? 1 : 0;
  if (computed[i][j][want]) return memo[i][j][want];
  long long total = 0;
  for (int k = i + 1; k < j; k += 2) {
    char op = s[k];
    long long l0 = solve(s, i, k - 1, 0), l1 = solve(s, i, k - 1, 1);
    long long r0 = solve(s, k + 1, j, 0), r1 = solve(s, k + 1, j, 1);
    long long t, f;
    if (op == '&') {
      t = l1 * r1;
      f = (l0 + l1) * (r0 + r1) - t;
    } else if (op == '|') {
      f = l0 * r0;
      t = (l0 + l1) * (r0 + r1) - f;
    } else {
      t = l0 * r1 + l1 * r0;
      f = l0 * r0 + l1 * r1;
    }
    total += want ? t : f;
  }
  computed[i][j][want] = true;
  memo[i][j][want] = total;
  return total;
}

int countEval(char *s, int result) {
  memset(computed, 0, sizeof(computed));
  return (int)solve(s, 0, strlen(s) - 1, result);
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  char s[] = "1^0|0|1";
  int result = 0;
  printf("Input:  s = %s, result = %d\n", s, result);
  printf("Output: %d\n", countEval(s, result));
  return EXIT_SUCCESS;
}
