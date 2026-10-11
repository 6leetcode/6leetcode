import java.util.Arrays;

// -------------------------------solution begin-------------------------------
class Solution {
  public int minPathSum(int[][] grid) {
    int m = grid.length, n = grid[0].length;
    int[] dp = new int[n];
    dp[0] = grid[0][0];
    for (int j = 1; j < n; j++) dp[j] = dp[j - 1] + grid[0][j];
    for (int i = 1; i < m; i++) {
      dp[0] += grid[i][0];
      for (int j = 1; j < n; j++) {
        dp[j] = Math.min(dp[j], dp[j - 1]) + grid[i][j];
      }
    }
    return dp[n - 1];
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    int[][] input = { { 1, 3, 1 }, { 1, 5, 1 }, { 4, 2, 1 } };
    System.out.println("Input:  " + Arrays.deepToString(input));
    Solution solution = new Solution();
    System.out.println("Output: " + solution.minPathSum(input));
  }
}
