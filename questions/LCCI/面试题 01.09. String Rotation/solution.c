#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------------------- solution begin -------------------------------
bool isFlipedString(char *s1, char *s2) {
  int n1 = strlen(s1), n2 = strlen(s2);
  if (n1 != n2) return false;
  if (n1 == 0) return true;
  char *doubled = (char *)malloc(n2 * 2 + 1);
  strcpy(doubled, s2);
  strcat(doubled, s2);
  bool found = strstr(doubled, s1) != NULL;
  free(doubled);
  return found;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  char s1[] = "waterbottle", s2[] = "erbottlewat";
  printf("Input:  %s %s\n", s1, s2);
  printf("Output: %s\n", isFlipedString(s1, s2) ? "true" : "false");
  return 0;
}
