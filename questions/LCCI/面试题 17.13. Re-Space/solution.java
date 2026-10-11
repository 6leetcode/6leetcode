// -------------------------------solution begin-------------------------------
class Solution {
  public int respace(String[] dictionary, String sentence) {
    int n = sentence.length();
    int[] dp = new int[n + 1];
    for (int i = 1; i <= n; i++) {
      dp[i] = dp[i - 1] + 1;
      for (String w : dictionary) {
        int wl = w.length();
        if (i >= wl && sentence.regionMatches(i - wl, w, 0, wl)) {
          dp[i] = Math.min(dp[i], dp[i - wl]);
        }
      }
    }
    return dp[n];
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    String[] dictionary = { "looked", "just", "like", "her", "brother" };
    String sentence = "jesslookedjustliketimherbrother";
    System.out.println("Input:  dictionary = [looked, just, like, her, brother], sentence = \"jesslookedjustliketimherbrother\"");
    System.out.println("Output: " + new Solution().respace(dictionary, sentence));
  }
}
