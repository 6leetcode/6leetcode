// -------------------------------solution begin-------------------------------
class Solution {
  private int rows;
  private int cols;

  private void dfs(char[][] board, int i, int j) {
    if (i < 0 || i >= rows || j < 0 || j >= cols || board[i][j] != 'O') return;
    board[i][j] = '#';
    dfs(board, i + 1, j);
    dfs(board, i - 1, j);
    dfs(board, i, j + 1);
    dfs(board, i, j - 1);
  }

  public void solve(char[][] board) {
    if (board == null || board.length == 0) return;
    rows = board.length;
    cols = board[0].length;

    for (int i = 0; i < rows; i++) {
      dfs(board, i, 0);
      dfs(board, i, cols - 1);
    }
    for (int j = 0; j < cols; j++) {
      dfs(board, 0, j);
      dfs(board, rows - 1, j);
    }

    for (int i = 0; i < rows; i++) {
      for (int j = 0; j < cols; j++) {
        if (board[i][j] == 'O') {
          board[i][j] = 'X';
        } else if (board[i][j] == '#') {
          board[i][j] = 'O';
        }
      }
    }
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    Solution solution = new Solution();

    char[][] t1 = {
        { 'X', 'X', 'X', 'X' },
        { 'X', 'O', 'O', 'X' },
        { 'X', 'X', 'O', 'X' },
        { 'X', 'O', 'X', 'X' },
    };
    System.out.println("Input:  " + java.util.Arrays.deepToString(t1));
    solution.solve(t1);
    System.out.println("Output: " + java.util.Arrays.deepToString(t1));

    char[][] t2 = { { 'X' } };
    System.out.println("Input:  " + java.util.Arrays.deepToString(t2));
    solution.solve(t2);
    System.out.println("Output: " + java.util.Arrays.deepToString(t2));
  }
}
