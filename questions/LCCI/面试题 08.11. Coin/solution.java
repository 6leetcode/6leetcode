// -------------------------------solution begin-------------------------------
class Solution {
  public int waysToChange(int n) {
    final long MOD = 1000000007;
    int[] coins = { 1, 5, 10, 25 };
    long[] dp = new long[n + 1];
    dp[0] = 1;
    for (int coin : coins) {
      for (int i = coin; i <= n; i++) {
        dp[i] = (dp[i] + dp[i - coin]) % MOD;
      }
    }
    return (int) dp[n];
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    int input = 10;
    System.out.println("Input:  " + input);
    System.out.println("Output: " + new Solution().waysToChange(input));
  }
}
