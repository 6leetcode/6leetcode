// -------------------------------solution begin-------------------------------
class Solution {
  public boolean isValidSudoku(char[][] board) {
    boolean[][] rows = new boolean[9][9];
    boolean[][] cols = new boolean[9][9];
    boolean[][] boxes = new boolean[9][9];
    for (int i = 0; i < 9; i++) {
      for (int j = 0; j < 9; j++) {
        char c = board[i][j];
        if (c == '.') {
          continue;
        }
        int d = c - '1';
        int b = (i / 3) * 3 + j / 3;
        if (rows[i][d] || cols[j][d] || boxes[b][d]) {
          return false;
        }
        rows[i][d] = cols[j][d] = boxes[b][d] = true;
      }
    }
    return true;
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
    Solution solution = new Solution();
    System.out.println("Output: " + solution.isValidSudoku(board));
  }
}
