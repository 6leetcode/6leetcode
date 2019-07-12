#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lengthOfLongestSubstring(char *s) {
  int offset[128];
  int max_len = 0;
  int len     = 0;

  memset(offset, 0xff, sizeof(offset));
  for (int i = 0; i < strlen(s); i++) {
    if (offset[(int)*(s + i)] == -1) {
      len++;
    } else {
      if (i - offset[(int)*(s + i)] > len) {
        len++;
      } else {
        len = i - offset[(int)*(s + i)];
      }
    }
    if (len > max_len) {
      max_len = len;
    }
    offset[(int)*(s + i)] = i;
  }

  return max_len;
}

int main(int argc, char **argv) {
  char *input = "12321";
  printf("Input:  %s\n", input);
  printf("Output: %d\n", lengthOfLongestSubstring(input));
  return EXIT_SUCCESS;
}
