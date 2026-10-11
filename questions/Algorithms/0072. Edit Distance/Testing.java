// -------------------------------solution begin-------------------------------
class Solution {
  public int minDistance(String word1, String word2) {
    int m = word1.length(), n = word2.length();
    int[] dp = new int[n + 1];
    for (int j = 0; j <= n; j++) dp[j] = j;
    for (int i = 1; i <= m; i++) {
      int prev = dp[0];
      dp[0] = i;
      for (int j = 1; j <= n; j++) {
        int tmp = dp[j];
        if (word1.charAt(i - 1) == word2.charAt(j - 1)) {
          dp[j] = prev;
        } else {
          dp[j] = 1 + Math.min(prev, Math.min(dp[j], dp[j - 1]));
        }
        prev = tmp;
      }
    }
    return dp[n];
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    String word1 = "horse", word2 = "ros";
    System.out.println("Input:  " + word1 + " " + word2);
    Solution solution = new Solution();
    System.out.println("Output: " + solution.minDistance(word1, word2));
  }
}
