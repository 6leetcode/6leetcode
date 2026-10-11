#include <stdbool.h>
#include <stdio.h>
#include <string.h>

// ------------------------------- solution begin -------------------------------
static bool check(char *pattern, char *value, int la, int lb) {
  int n = strlen(value);
  const char *a = NULL, *b = NULL;
  int aLen = -1, bLen = -1, pos = 0;
  for (int i = 0; pattern[i]; i++) {
    if (pattern[i] == 'a') {
      if (pos + la > n) return false;
      if (a == NULL) {
        a = value + pos;
        aLen = la;
      } else if (aLen != la || strncmp(a, value + pos, la) != 0) {
        return false;
      }
      pos += la;
    } else {
      if (pos + lb > n) return false;
      if (b == NULL) {
        b = value + pos;
        bLen = lb;
      } else if (bLen != lb || strncmp(b, value + pos, lb) != 0) {
        return false;
      }
      pos += lb;
    }
  }
  if (pos != n) return false;
  if (a && b && aLen == bLen && strncmp(a, b, aLen) == 0) return false;
  return true;
}

bool patternMatching(char *pattern, char *value) {
  int n = strlen(value), np = strlen(pattern);
  if (np == 0) return n == 0;
  int na = 0, nb = 0;
  for (int i = 0; i < np; i++) {
    if (pattern[i] == 'a') {
      na++;
    } else {
      nb++;
    }
  }
  for (int la = 0; la <= n; la++) {
    if (na * la > n) break;
    int rem = n - na * la;
    if (nb == 0) {
      if (rem == 0 && check(pattern, value, la, 0)) return true;
    } else {
      if (rem % nb != 0) continue;
      int lb = rem / nb;
      if (check(pattern, value, la, lb)) return true;
    }
  }
  return false;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  char pattern[] = "abba", value[] = "dogcatcatdog";
  printf("Input:  pattern = %s, value = %s\n", pattern, value);
  printf("Output: %s\n", patternMatching(pattern, value) ? "true" : "false");
  return 0;
}
