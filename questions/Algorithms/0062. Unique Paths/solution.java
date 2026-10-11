// -------------------------------solution begin-------------------------------
class Solution {
  public int uniquePaths(int m, int n) {
    long[] dp = new long[n];
    java.util.Arrays.fill(dp, 1);
    for (int i = 1; i < m; i++) {
      for (int j = 1; j < n; j++) {
        dp[j] += dp[j - 1];
      }
    }
    return (int) dp[n - 1];
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    int m = 3, n = 7;
    System.out.println("Input:  " + m + " " + n);
    Solution solution = new Solution();
    System.out.println("Output: " + solution.uniquePaths(m, n));
  }
}
