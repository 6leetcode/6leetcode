import java.util.Arrays;
import java.util.HashSet;
import java.util.Set;

// -------------------------------solution begin-------------------------------
class Solution {
  private boolean canForm(String w, Set<String> dict) {
    int n = w.length();
    boolean[] dp = new boolean[n + 1];
    dp[0] = true;
    for (int i = 1; i <= n; i++) {
      for (int j = 0; j < i; j++) {
        if (!dp[j]) continue;
        if (i == n && j == 0) continue;
        if (dict.contains(w.substring(j, i))) {
          dp[i] = true;
          break;
        }
      }
    }
    return dp[n];
  }

  public String longestWord(String[] words) {
    Set<String> dict = new HashSet<>(Arrays.asList(words));
    Arrays.sort(words, (a, b) -> a.length() != b.length() ? b.length() - a.length() : a.compareTo(b));
    for (String w : words) {
      if (canForm(w, dict)) return w;
    }
    return "";
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    String[] words = { "cat", "banana", "dog", "nana", "walk", "walker", "dogwalker" };
    System.out.println("Input:  [\"cat\",\"banana\",\"dog\",\"nana\",\"walk\",\"walker\",\"dogwalker\"]");
    System.out.println("Output: \"" + new Solution().longestWord(words) + "\"");
  }
}
