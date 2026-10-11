#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// ------------------------------- solution begin -------------------------------
bool isIsomorphic(char *s, char *t) {
  char a[128] = {0};
  char b[128] = {0};
  while (*s) {
    if (a[(int)(*s)] == 0 && b[(int)(*t)] == 0) {
      a[(int)(*s)] = *t;
      b[(int)(*t)] = *s;
    } else if (a[(int)(*s)] == *t && b[(int)(*t)] == *s) {
    } else {
      return false;
    }
    s++;
    t++;
  }
  return true;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  char input1[] = "egg";
  char input2[] = "add";
  printf("Input:  %s %s\n", input1, input2);
  printf("Output: %s\n", isIsomorphic(input1, input2) ? "true" : "false");
  return EXIT_SUCCESS;
}
