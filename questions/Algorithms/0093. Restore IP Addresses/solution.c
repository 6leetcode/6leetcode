#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------------------- solution begin -------------------------------
static void dfs(const char *s, int n, int segId, int segStart, int *segments, char **res, int *size) {
  if (segId == 4) {
    if (segStart == n) {
      char *ip = (char *)malloc(16);
      sprintf(ip, "%d.%d.%d.%d", segments[0], segments[1], segments[2], segments[3]);
      res[(*size)++] = ip;
    }
    return;
  }
  if (segStart == n) {
    return;
  }
  if (s[segStart] == '0') {
    segments[segId] = 0;
    dfs(s, n, segId + 1, segStart + 1, segments, res, size);
  }
  int addr = 0;
  for (int segEnd = segStart; segEnd < n; segEnd++) {
    addr = addr * 10 + (s[segEnd] - '0');
    if (addr > 0 && addr <= 255) {
      segments[segId] = addr;
      dfs(s, n, segId + 1, segEnd + 1, segments, res, size);
    } else {
      break;
    }
  }
}

char **restoreIpAddresses(char *s, int *returnSize) {
  int n = strlen(s);
  char **res = (char **)malloc(sizeof(char *) * 100);
  int *segments = (int *)malloc(sizeof(int) * 4);
  *returnSize = 0;
  dfs(s, n, 0, 0, segments, res, returnSize);
  free(segments);
  return res;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  char input[] = "25525511135";
  printf("Input:  %s\n", input);
  int size = 0;
  char **res = restoreIpAddresses(input, &size);
  printf("Output: [");
  for (int i = 0; i < size; i++) {
    printf("%s%s", i == 0 ? "" : ", ", res[i]);
    free(res[i]);
  }
  printf("]\n");
  free(res);
  return EXIT_SUCCESS;
}
