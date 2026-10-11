#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------------------- solution begin -------------------------------
int longestValidParentheses(char *s) {
  int n = strlen(s);
  int *stack = (int *)malloc(sizeof(int) * (n + 1));
  int top = -1;
  stack[++top] = -1;
  int best = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] == '(') {
      stack[++top] = i;
    } else {
      top--;
      if (top == -1) {
        stack[++top] = i;
      } else {
        int len = i - stack[top];
        if (len > best) {
          best = len;
        }
      }
    }
  }
  free(stack);
  return best;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  char input[] = "(()";
  printf("Input:  %s\n", input);
  printf("Output: %d\n", longestValidParentheses(input));
  return EXIT_SUCCESS;
}
