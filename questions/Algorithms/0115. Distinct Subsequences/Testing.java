// -------------------------------solution begin-------------------------------
class Solution {
  public int numDistinct(String s, String t) {
    int m = t.length();
    long[] dp = new long[m + 1];
    dp[0] = 1;
    for (int i = 0; i < s.length(); i++) {
      for (int j = m; j >= 1; j--) {
        if (s.charAt(i) == t.charAt(j - 1)) {
          dp[j] += dp[j - 1];
        }
      }
    }
    return (int) dp[m];
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    String[][] cases = {
        { "rabbbit", "rabbit" },
        { "babgbag", "bag" },
        { "ddd", "dd" },
    };
    Solution solution = new Solution();
    for (String[] c : cases) {
      System.out.printf("Input:  \"%s\", \"%s\"\n", c[0], c[1]);
      System.out.printf("Output: %d\n", solution.numDistinct(c[0], c[1]));
    }
  }
}
