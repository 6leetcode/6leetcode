#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// ------------------------------- solution begin -------------------------------
typedef struct {
  int r, c;
} Pos;

static bool contains(Pos *arr, int n, int r, int c) {
  for (int i = 0; i < n; i++) {
    if (arr[i].r == r && arr[i].c == c) return true;
  }
  return false;
}

char **printKMoves(int K, int *returnSize) {
  Pos black[200000], visited[200000];
  int bn = 0, vn = 0;
  int dr[] = {0, 1, 0, -1};
  int dc[] = {1, 0, -1, 0};
  int dir = 0, r = 0, c = 0;
  visited[vn].r = 0;
  visited[vn].c = 0;
  vn++;
  for (int k = 0; k < K; k++) {
    if (!contains(black, bn, r, c)) {
      black[bn].r = r;
      black[bn].c = c;
      bn++;
      dir = (dir + 1) % 4;
    } else {
      for (int i = 0; i < bn; i++) {
        if (black[i].r == r && black[i].c == c) {
          black[i] = black[bn - 1];
          bn--;
          break;
        }
      }
      dir = (dir + 3) % 4;
    }
    r += dr[dir];
    c += dc[dir];
    if (!contains(visited, vn, r, c)) {
      visited[vn].r = r;
      visited[vn].c = c;
      vn++;
    }
  }
  int minR = 0, maxR = 0, minC = 0, maxC = 0;
  for (int i = 0; i < vn; i++) {
    if (visited[i].r < minR) minR = visited[i].r;
    if (visited[i].r > maxR) maxR = visited[i].r;
    if (visited[i].c < minC) minC = visited[i].c;
    if (visited[i].c > maxC) maxC = visited[i].c;
  }
  int rows = maxR - minR + 1, cols = maxC - minC + 1;
  char **res = (char **)malloc(sizeof(char *) * rows);
  const char letters[] = "RDLU";
  for (int i = 0; i < rows; i++) {
    res[i] = (char *)calloc(cols + 1, 1);
    for (int j = 0; j < cols; j++) {
      int rr = minR + i, cc = minC + j;
      if (rr == r && cc == c) {
        res[i][j] = letters[dir];
      } else if (contains(black, bn, rr, cc)) {
        res[i][j] = 'X';
      } else {
        res[i][j] = '_';
      }
    }
  }
  *returnSize = rows;
  return res;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int K = 0;
  printf("Input:  %d\n", K);
  int size = 0;
  char **res = printKMoves(K, &size);
  printf("Output: [");
  for (int i = 0; i < size; i++) {
    printf("%s\"%s\"", i == 0 ? "" : ", ", res[i]);
    free(res[i]);
  }
  printf("]\n");
  free(res);
  return EXIT_SUCCESS;
}
