#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------------------- solution begin -------------------------------
int evalRPN(char **tokens, int tokensSize) {
  int *stack = (int *)malloc(sizeof(int) * tokensSize);
  int top = 0;
  for (int i = 0; i < tokensSize; i++) {
    char *t = tokens[i];
    if (strcmp(t, "+") == 0 || strcmp(t, "-") == 0 || strcmp(t, "*") == 0 || strcmp(t, "/") == 0) {
      int b = stack[--top];
      int a = stack[--top];
      int r;
      if (t[0] == '+') {
        r = a + b;
      } else if (t[0] == '-') {
        r = a - b;
      } else if (t[0] == '*') {
        r = a * b;
      } else {
        r = a / b;
      }
      stack[top++] = r;
    } else {
      stack[top++] = atoi(t);
    }
  }
  int res = stack[top - 1];
  free(stack);
  return res;
}
// ------------------------------- solution end ---------------------------------

static void run(char **tokens, int size) {
  printf("Input:  [");
  for (int i = 0; i < size; i++) {
    if (i == 0) {
      printf("\"%s\"", tokens[i]);
    } else {
      printf(", \"%s\"", tokens[i]);
    }
  }
  printf("]\n");
  printf("Output: %d\n", evalRPN(tokens, size));
}

int main(int argc, char const *argv[]) {
  char *t1[] = {"2", "1", "+", "3", "*"};
  run(t1, 5);

  char *t2[] = {"4", "13", "5", "/", "+"};
  run(t2, 5);

  char *t3[] = {"10", "6", "9", "3", "+", "-11", "*", "/", "*", "17", "+", "5", "+"};
  run(t3, 13);

  return EXIT_SUCCESS;
}
