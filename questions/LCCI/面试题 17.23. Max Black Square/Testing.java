// -------------------------------solution begin-------------------------------
class Solution {
  public int maxBlackSquare(int[][] matrix) {
    int n = matrix.length;
    int[][] dp = new int[n][n];
    int best = 0;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < matrix[i].length; j++) {
        if (matrix[i][j] == 1) {
          if (i == 0 || j == 0) {
            dp[i][j] = 1;
          } else {
            dp[i][j] = Math.min(dp[i - 1][j - 1], Math.min(dp[i - 1][j], dp[i][j - 1])) + 1;
          }
          best = Math.max(best, dp[i][j]);
        }
      }
    }
    return best;
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    int[][] matrix = { { 0, 1, 1, 1 }, { 1, 1, 1, 1 }, { 0, 1, 1, 1 }, { 0, 1, 1, 1 } };
    System.out.println("Input:  [[0,1,1,1],[1,1,1,1],[0,1,1,1],[0,1,1,1]]");
    System.out.println("Output: " + new Solution().maxBlackSquare(matrix));
  }
}
