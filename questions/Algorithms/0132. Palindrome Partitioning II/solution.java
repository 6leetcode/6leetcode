// -------------------------------solution begin-------------------------------
class Solution {
  public int minCut(String s) {
    int n = s.length();
    if (n <= 1) return 0;

    boolean[][] pal = new boolean[n][n];
    for (int i = n - 1; i >= 0; i--) {
      for (int j = i; j < n; j++) {
        if (s.charAt(i) == s.charAt(j) && (j - i < 2 || pal[i + 1][j - 1])) {
          pal[i][j] = true;
        }
      }
    }

    int[] dp = new int[n];
    for (int i = 0; i < n; i++) {
      if (pal[0][i]) {
        dp[i] = 0;
        continue;
      }
      dp[i] = i;
      for (int j = 1; j <= i; j++) {
        if (pal[j][i]) {
          dp[i] = Math.min(dp[i], dp[j - 1] + 1);
        }
      }
    }
    return dp[n - 1];
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    String[] tests = { "aab", "a", "ab" };
    Solution solution = new Solution();
    for (String s : tests) {
      System.out.println("Input:  " + s);
      System.out.println("Output: " + solution.minCut(s));
    }
  }
}
