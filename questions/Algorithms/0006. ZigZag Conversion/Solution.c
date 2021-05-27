#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------------------- solution begin -------------------------------
char *convert(char *s, int numRows) {
  int len;
  int i, j, k = 0;
  char *p;
  int step, up;

  if (!s || !*s || numRows == 1) return s;

  len = strlen(s);
  p = malloc((len + 1) * sizeof(char));
  //assert(p);

  step = (numRows - 1) * 2; // max span

  for (i = 0; i < numRows; i++) {
    j = i; // first letter of each row
    up = 1;
    while (j < len) {
      p[k++] = s[j];
      if (i == 0 || i == numRows - 1) {
        j += step; // full span
      } else if (up) {
        j += step - i * 2; // full span - offset
        up = 0;
      } else {
        j += i * 2; // offset
        up = 1;
      }
    }
  }
  p[k] = 0;
  return p;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  char *input1 = "PAYPALISHIRING";
  int input2 = 3;
  printf("Input:  %s %d\n", input1, input2);
  char *output = convert(input1, input2);
  printf("Output: %s\n", output);
  free(output);
}
