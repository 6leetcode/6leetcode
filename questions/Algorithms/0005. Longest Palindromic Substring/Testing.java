// -------------------------------solution begin-------------------------------
class Solution {
  public String longestPalindrome(String s) {
    if (s == null || s.length() < 1) {
      return "";
    }
    int start = 0, end = 0;
    for (int i = 0; i < s.length(); i++) {
      int len1 = expand(s, i, i);
      int len2 = expand(s, i, i + 1);
      int len = Math.max(len1, len2);
      if (len > end - start) {
        start = i - (len - 1) / 2;
        end = i + len / 2;
      }
    }
    return s.substring(start, end + 1);
  }

  private int expand(String s, int l, int r) {
    while (l >= 0 && r < s.length() && s.charAt(l) == s.charAt(r)) {
      l--;
      r++;
    }
    return r - l - 1;
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    String input = "babad";
    System.out.println("Input:  " + input);
    Solution solution = new Solution();
    System.out.println("Output: " + solution.longestPalindrome(input));
  }
}
