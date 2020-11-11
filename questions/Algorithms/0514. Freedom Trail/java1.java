import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

// ------------------------------- solution begin -------------------------------
class Solution {
  public int findRotateSteps(String ring, String key) {
    int n = ring.length(), m = key.length();
    @SuppressWarnings("unchecked")
    ArrayList<Integer>[] pos = new ArrayList[26];
    for (int i = 0; i < 26; ++i) {
      pos[i] = new ArrayList<Integer>();
    }
    for (int i = 0; i < n; ++i) {
      pos[ring.charAt(i) - 'a'].add(i);
    }
    int[][] dp = new int[m][n];
    for (int i = 0; i < m; ++i) {
      Arrays.fill(dp[i], 0x3f3f3f);
    }
    for (int i : pos[key.charAt(0) - 'a']) {
      dp[0][i] = Math.min(i, n - i) + 1;
    }
    for (int i = 1; i < m; ++i) {
      for (int j : pos[key.charAt(i) - 'a']) {
        for (int k : pos[key.charAt(i - 1) - 'a']) {
          dp[i][j] = Math.min(dp[i][j], dp[i - 1][k] + Math.min(Math.abs(j - k), n - Math.abs(j - k)) + 1);
        }
      }
    }
    return Arrays.stream(dp[m - 1]).min().getAsInt();
  }
}
// ------------------------------- solution end ---------------------------------

public class java1 {
  public static void main(String[] args) {
    Solution solution = new Solution();
    String input1 = "godding";
    String input2 = "gd";
    System.out.printf("Input:  %s %s\n", input1, input2);
    System.out.printf("Output: %d\n", solution.findRotateSteps(input1, input2));
  }
}
