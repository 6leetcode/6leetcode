// -------------------------------solution begin-------------------------------
class Solution {
  private boolean win(String[] board, char ch) {
    int n = board.length;
    for (int i = 0; i < n; i++) {
      boolean row = true, col = true;
      for (int j = 0; j < n; j++) {
        if (board[i].charAt(j) != ch) row = false;
        if (board[j].charAt(i) != ch) col = false;
      }
      if (row || col) return true;
    }
    boolean d1 = true, d2 = true;
    for (int i = 0; i < n; i++) {
      if (board[i].charAt(i) != ch) d1 = false;
      if (board[i].charAt(n - 1 - i) != ch) d2 = false;
    }
    return d1 || d2;
  }

  public String tictactoe(String[] board) {
    if (win(board, 'X')) return "X";
    if (win(board, 'O')) return "O";
    for (String row : board)
      for (int i = 0; i < row.length(); i++)
        if (row.charAt(i) == ' ') return "Pending";
    return "Draw";
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    String[] board = { "O X", " XO", "X O" };
    System.out.println("Input:  [\"O X\", \" XO\", \"X O\"]");
    System.out.println("Output: " + new Solution().tictactoe(board));
  }
}
