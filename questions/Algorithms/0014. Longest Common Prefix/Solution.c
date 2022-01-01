#include <stdio.h>
#include <stdlib.h>

// ------------------------------- solution begin -------------------------------
char *longestCommonPrefix(char **strs, int strsSize) {
  if (strsSize == 0) {
    return "";
  }

  int i, count = 0;
  char *result = malloc(1000);
  while (strs[0][count] != '\0') {
    char c = strs[0][count];
    for (i = 1; i < strsSize; i++) {
      if (c != strs[i][count]) {
        break;
      }
    }

    if (i == strsSize) {
      result[count++] = c;
    } else {
      break;
    }
  }
  result[count++] = '\0';
  return result;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  char *input1[] = {"flower", "flow", "flight"};
  int input2 = 3;
  printf("Input:  [%s", input1[0]);
  for (size_t i = 1; i < input2; i++) {
    printf(" %s", input1[i]);
  }
  printf("] %d\n", input2);

  char *output = longestCommonPrefix(input1, input2);
  printf("Output: %s\n", output);
  free(output);
  return EXIT_SUCCESS;
}
