#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define N 9

bool isValidSudoku(char **board, int boardSize, int *boardColSize) {
  for (int i = 0; i < boardSize; i++) {
    bool t[N] = {false};
    for (int j = 0; j < boardColSize[i]; j++) {
      if (board[i][j] != '.') {
        int m = board[i][j] - 49;
        if (t[m]) {
          return false;
        } else {
          t[m] = true;
        }
      }
    }
  }
  for (int i = 0; i < boardSize; i++) {
    bool t[N] = {false};
    for (int j = 0; j < boardColSize[i]; j++) {
      if (board[j][i] != '.') {
        int m = board[j][i] - 49;
        if (t[m]) {
          return false;
        } else {
          t[m] = true;
        }
      }
    }
  }
  for (int i = 0; i < boardSize; i++) {
    bool t[N] = {false};
    for (int j = 0; j < boardColSize[i]; j++) {
      int x = i / 3 * 3 + j / 3;
      int y = (i % 3) * 3 + j % 3;
      if (board[x][y] != '.') {
        int m = board[x][y] - 49;
        if (t[m]) {
          return false;
        } else {
          t[m] = true;
        }
      }
    }
  }
  return true;
}

int main(int argc, char const *argv[]) {
  char board[N][N] = {
      {'.', '.', '9', '7', '4', '8', '.', '.', '.'},
      {'7', '.', '.', '.', '.', '.', '.', '.', '.'},
      {'.', '2', '.', '1', '.', '9', '.', '.', '.'},
      {'.', '.', '7', '.', '.', '.', '2', '4', '.'},
      {'.', '6', '4', '.', '1', '.', '5', '9', '.'},
      {'.', '9', '8', '.', '.', '.', '3', '.', '.'},
      {'.', '.', '.', '8', '.', '3', '.', '2', '.'},
      {'.', '.', '.', '.', '.', '.', '.', '.', '6'},
      {'.', '.', '.', '2', '7', '5', '9', '.', '.'},
  };
  char **new_board = (char **)malloc(sizeof(char *) * N);
  for (int i = 0; i < N; i++) {
    new_board[i] = (char *)malloc(sizeof(char) * N);
    for (int j = 0; j < N; j++) {
      new_board[i][j] = board[i][j];
    }
  }

  printf("Input:  ");
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      printf("%c", board[i][j]);
    }
  }
  printf("\n");

  int col[N] = {0};

  for (int i = 0; i < N; i++) {
    col[i] = N;
  };

  printf("Output: %s\n", isValidSudoku(new_board, N, col) ? "true" : "false");

  for (int i = 0; i < N; i++) {
    free(new_board[i]);
  }
  free(new_board);
  // free(matrixColSize);

  return 0;
}
