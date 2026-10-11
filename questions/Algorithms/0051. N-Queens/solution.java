import java.util.ArrayList;
import java.util.List;

// -------------------------------solution begin-------------------------------
class Solution {
  private boolean isSafe(int[] cols, int row, int col) {
    for (int r = 0; r < row; r++) {
      if (cols[r] == col || Math.abs(cols[r] - col) == Math.abs(r - row)) {
        return false;
      }
    }
    return true;
  }

  private void backtrack(int n, int row, int[] cols, List<List<String>> res) {
    if (row == n) {
      List<String> board = new ArrayList<>();
      for (int i = 0; i < n; i++) {
        char[] line = new char[n];
        java.util.Arrays.fill(line, '.');
        line[cols[i]] = 'Q';
        board.add(new String(line));
      }
      res.add(board);
      return;
    }
    for (int col = 0; col < n; col++) {
      if (isSafe(cols, row, col)) {
        cols[row] = col;
        backtrack(n, row + 1, cols, res);
      }
    }
  }

  public List<List<String>> solveNQueens(int n) {
    List<List<String>> res = new ArrayList<>();
    backtrack(n, 0, new int[n], res);
    return res;
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    int input = 4;
    System.out.println("Input:  " + input);
    Solution solution = new Solution();
    System.out.println("Output: " + solution.solveNQueens(input));
  }
}
