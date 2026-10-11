// -------------------------------solution begin-------------------------------
class Solution {
  private int count = 0;

  private boolean isSafe(int[] cols, int row, int col) {
    for (int r = 0; r < row; r++) {
      if (cols[r] == col || Math.abs(cols[r] - col) == Math.abs(r - row)) {
        return false;
      }
    }
    return true;
  }

  private void backtrack(int n, int row, int[] cols) {
    if (row == n) {
      count++;
      return;
    }
    for (int col = 0; col < n; col++) {
      if (isSafe(cols, row, col)) {
        cols[row] = col;
        backtrack(n, row + 1, cols);
      }
    }
  }

  public int totalNQueens(int n) {
    backtrack(n, 0, new int[n]);
    return count;
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    int input = 4;
    System.out.println("Input:  " + input);
    Solution solution = new Solution();
    System.out.println("Output: " + solution.totalNQueens(input));
  }
}
