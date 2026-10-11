// -------------------------------solution begin-------------------------------
class Solution {
  private boolean[][] rows = new boolean[9][9];
  private boolean[][] cols = new boolean[9][9];
  private boolean[][] boxes = new boolean[9][9];
  private int[] emptyI = new int[81];
  private int[] emptyJ = new int[81];
  private int empties = 0;

  public void solveSudoku(char[][] board) {
    for (int i = 0; i < 9; i++) {
      for (int j = 0; j < 9; j++) {
        char c = board[i][j];
        if (c == '.') {
          emptyI[empties] = i;
          emptyJ[empties] = j;
          empties++;
        } else {
          int d = c - '1';
          rows[i][d] = cols[j][d] = boxes[(i / 3) * 3 + j / 3][d] = true;
        }
      }
    }
    solve(board, 0);
  }

  private boolean solve(char[][] board, int idx) {
    if (idx == empties) {
      return true;
    }
    int i = emptyI[idx], j = emptyJ[idx];
    int b = (i / 3) * 3 + j / 3;
    for (int d = 0; d < 9; d++) {
      if (!rows[i][d] && !cols[j][d] && !boxes[b][d]) {
        board[i][j] = (char) ('1' + d);
        rows[i][d] = cols[j][d] = boxes[b][d] = true;
        if (solve(board, idx + 1)) {
          return true;
        }
        rows[i][d] = cols[j][d] = boxes[b][d] = false;
        board[i][j] = '.';
      }
    }
    return false;
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    String[] raw = {
        "..9748...",
        "7........",
        ".2.1.9...",
        "..7...24.",
        ".64.1.59.",
        ".98...3..",
        "...8.3.2.",
        "........6",
        "...2759..",
    };
    char[][] board = new char[9][9];
    StringBuilder input = new StringBuilder();
    for (int i = 0; i < 9; i++) {
      board[i] = raw[i].toCharArray();
      input.append(raw[i]);
    }
    System.out.println("Input:  " + input);
    new Solution().solveSudoku(board);
    StringBuilder output = new StringBuilder();
    for (char[] row : board) {
      output.append(row);
    }
    System.out.println("Output: " + output);
  }
}
