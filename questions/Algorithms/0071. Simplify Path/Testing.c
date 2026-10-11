#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------------------- solution begin -------------------------------
char *simplifyPath(char *path) {
  int n = strlen(path);
  char **stack = (char **)malloc(sizeof(char *) * (n + 1));
  int top = 0;
  char *token = strtok(path, "/");
  while (token) {
    if (strcmp(token, ".") == 0) {
      // skip
    } else if (strcmp(token, "..") == 0) {
      if (top > 0) top--;
    } else {
      stack[top++] = token;
    }
    token = strtok(NULL, "/");
  }
  char *res = (char *)malloc(n + 2);
  int p = 0;
  for (int i = 0; i < top; i++) {
    res[p++] = '/';
    int l = strlen(stack[i]);
    memcpy(res + p, stack[i], l);
    p += l;
  }
  if (top == 0) res[p++] = '/';
  res[p] = '\0';
  free(stack);
  return res;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  char input[] = "/a/./b/../../c/";
  printf("Input:  %s\n", input);
  char *res = simplifyPath(input);
  printf("Output: %s\n", res);
  free(res);
  return EXIT_SUCCESS;
}
