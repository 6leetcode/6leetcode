// -------------------------------solution begin-------------------------------
class Solution {
  private boolean dfs(char[][] board, int i, int j, String word, int idx) {
    if (idx == word.length()) return true;
    if (i < 0 || i >= board.length || j < 0 || j >= board[0].length || board[i][j] != word.charAt(idx)) {
      return false;
    }
    char tmp = board[i][j];
    board[i][j] = '#';
    boolean found = dfs(board, i + 1, j, word, idx + 1) || dfs(board, i - 1, j, word, idx + 1)
        || dfs(board, i, j + 1, word, idx + 1) || dfs(board, i, j - 1, word, idx + 1);
    board[i][j] = tmp;
    return found;
  }

  public boolean exist(char[][] board, String word) {
    for (int i = 0; i < board.length; i++) {
      for (int j = 0; j < board[0].length; j++) {
        if (dfs(board, i, j, word, 0)) return true;
      }
    }
    return false;
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    char[][] board = {
        { 'A', 'B', 'C', 'E' },
        { 'S', 'F', 'C', 'S' },
        { 'A', 'D', 'E', 'E' },
    };
    String word = "ABCCED";
    System.out.println("Input:  " + java.util.Arrays.deepToString(board) + " " + word);
    Solution solution = new Solution();
    System.out.println("Output: " + solution.exist(board, word));
  }
}
