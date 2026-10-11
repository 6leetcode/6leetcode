#include <stdbool.h>
#include <stdio.h>
#include <string.h>

// ------------------------------- solution begin -------------------------------
bool parseBoolExpr(char *expression) {
  char stack[10000];
  int top = 0;
  for (int i = 0; expression[i]; i++) {
    char c = expression[i];
    if (c == 't' || c == 'f' || c == '(' || c == '!' || c == '&' || c == '|') {
      stack[top++] = c;
    } else if (c == ')') {
      char temp[10000];
      int t = 0;
      while (stack[top - 1] != '(') {
        temp[t++] = stack[--top];
      }
      top--;
      char op = stack[--top];
      char res;
      if (op == '!') {
        res = temp[0] == 'f' ? 't' : 'f';
      } else if (op == '&') {
        res = 't';
        for (int j = 0; j < t; j++) {
          if (temp[j] == 'f') {
            res = 'f';
            break;
          }
        }
      } else {
        res = 'f';
        for (int j = 0; j < t; j++) {
          if (temp[j] == 't') {
            res = 't';
            break;
          }
        }
      }
      stack[top++] = res;
    }
  }
  return stack[0] == 't';
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  char input[] = "|(&(t,f,t),!(t))";
  printf("Input:  %s\n", input);
  printf("Output: %s\n", parseBoolExpr(input) ? "true" : "false");
  return 0;
}
