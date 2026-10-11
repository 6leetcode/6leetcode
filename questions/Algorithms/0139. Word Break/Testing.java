import java.util.Arrays;
import java.util.List;

// -------------------------------solution begin-------------------------------
class Solution {
  public boolean wordBreak(String s, List<String> wordDict) {
    int n = s.length();
    boolean[] dp = new boolean[n + 1];
    dp[0] = true;
    for (int i = 1; i <= n; i++) {
      for (String w : wordDict) {
        int len = w.length();
        if (i >= len && dp[i - len] && s.startsWith(w, i - len)) {
          dp[i] = true;
          break;
        }
      }
    }
    return dp[n];
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    run("leetcode", Arrays.asList("leet", "code"));
    run("applepenapple", Arrays.asList("apple", "pen"));
    run("catsandog", Arrays.asList("cats", "dog", "sand", "and", "cat"));
  }

  static void run(String s, List<String> dict) {
    System.out.printf("Input:  s = \"%s\", wordDict = %s\n", s, dict);
    Solution solution = new Solution();
    System.out.printf("Output: %b\n", solution.wordBreak(s, dict));
  }
}
