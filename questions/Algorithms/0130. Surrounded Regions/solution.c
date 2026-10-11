#include <stdio.h>
#include <stdlib.h>

// ------------------------------- solution begin -------------------------------
static void dfs(char **board, int rows, int cols, int i, int j) {
  if (i < 0 || i >= rows || j < 0 || j >= cols || board[i][j] != 'O') return;
  board[i][j] = '#';
  dfs(board, rows, cols, i + 1, j);
  dfs(board, rows, cols, i - 1, j);
  dfs(board, rows, cols, i, j + 1);
  dfs(board, rows, cols, i, j - 1);
}

void solve(char **board, int boardSize, int *boardColSize) {
  if (boardSize == 0) return;
  int cols = boardColSize[0];

  for (int i = 0; i < boardSize; i++) {
    dfs(board, boardSize, cols, i, 0);
    dfs(board, boardSize, cols, i, cols - 1);
  }
  for (int j = 0; j < cols; j++) {
    dfs(board, boardSize, cols, 0, j);
    dfs(board, boardSize, cols, boardSize - 1, j);
  }

  for (int i = 0; i < boardSize; i++) {
    for (int j = 0; j < cols; j++) {
      if (board[i][j] == 'O') {
        board[i][j] = 'X';
      } else if (board[i][j] == '#') {
        board[i][j] = 'O';
      }
    }
  }
}
// ------------------------------- solution end ---------------------------------

static void show_board(char **board, int rows, int cols) {
  printf("[");
  for (int i = 0; i < rows; i++) {
    printf("%s[", i == 0 ? "" : ", ");
    for (int j = 0; j < cols; j++) {
      printf("%s%c", j == 0 ? "" : ", ", board[i][j]);
    }
    printf("]");
  }
  printf("]");
}

static char **build_board(char raw[][5], int rows, int cols) {
  char **board = (char **)malloc(sizeof(char *) * rows);
  for (int i = 0; i < rows; i++) {
    board[i] = (char *)malloc(cols + 1);
    for (int j = 0; j < cols; j++) {
      board[i][j] = raw[i][j];
    }
    board[i][cols] = '\0';
  }
  return board;
}

static void free_board(char **board, int rows) {
  for (int i = 0; i < rows; i++) free(board[i]);
  free(board);
}

static void run(char raw[][5], int rows, int cols) {
  char **board = build_board(raw, rows, cols);
  int *colSize = (int *)malloc(sizeof(int) * rows);
  for (int i = 0; i < rows; i++) colSize[i] = cols;

  printf("Input:  ");
  show_board(board, rows, cols);
  printf("\n");

  solve(board, rows, colSize);

  printf("Output: ");
  show_board(board, rows, cols);
  printf("\n");

  free(colSize);
  free_board(board, rows);
}

int main(int argc, char const *argv[]) {
  char t1[4][5] = {"XXXX", "XOOX", "XXOX", "XOXX"};
  char t2[1][5] = {"X"};

  run(t1, 4, 4);
  run(t2, 1, 1);

  return EXIT_SUCCESS;
}
