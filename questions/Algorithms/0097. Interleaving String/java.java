// -------------------------------solution begin-------------------------------
class Solution {
  public boolean isInterleave(String s1, String s2, String s3) {
    int n = s1.length(), m = s2.length(), t = s3.length();

    if (n + m != t) {
      return false;
    }

    boolean[][] f = new boolean[n + 1][m + 1];

    f[0][0] = true;
    for (int i = 0; i <= n; ++i) {
      for (int j = 0; j <= m; ++j) {
        int p = i + j - 1;
        if (i > 0) {
          f[i][j] = f[i][j] || (f[i - 1][j] && s1.charAt(i - 1) == s3.charAt(p));
        }
        if (j > 0) {
          f[i][j] = f[i][j] || (f[i][j - 1] && s2.charAt(j - 1) == s3.charAt(p));
        }
      }
    }

    return f[n][m];
  }
}
// -------------------------------solution end---------------------------------

public class java {
  public static void main(String[] args) {
    String input1 = "aabcc";
    String input2 = "dbbca";
    String input3 = "aadbbbaccc";
    System.out.printf("Input:  %s, %s, %s\n", input1, input2, input3);
    Solution solution = new Solution();
    System.out.printf("Output: %s\n", solution.isInterleave(input1, input2, input3) ? "true" : "false");
  }
}
