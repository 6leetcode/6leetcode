import java.util.Arrays;

// -------------------------------solution begin-------------------------------
class Solution {
  public int uniquePathsWithObstacles(int[][] obstacleGrid) {
    int m = obstacleGrid.length, n = obstacleGrid[0].length;
    long[] dp = new long[n];
    dp[0] = obstacleGrid[0][0] == 0 ? 1 : 0;
    for (int j = 1; j < n; j++) dp[j] = obstacleGrid[0][j] == 0 ? dp[j - 1] : 0;
    for (int i = 1; i < m; i++) {
      if (obstacleGrid[i][0] == 1) dp[0] = 0;
      for (int j = 1; j < n; j++) {
        if (obstacleGrid[i][j] == 1) {
          dp[j] = 0;
        } else {
          dp[j] += dp[j - 1];
        }
      }
    }
    return (int) dp[n - 1];
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    int[][] input = { { 0, 0, 0 }, { 0, 1, 0 }, { 0, 0, 0 } };
    System.out.println("Input:  " + Arrays.deepToString(input));
    Solution solution = new Solution();
    System.out.println("Output: " + solution.uniquePathsWithObstacles(input));
  }
}
