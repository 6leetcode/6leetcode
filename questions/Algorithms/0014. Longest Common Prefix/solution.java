// -------------------------------solution begin-------------------------------
class Solution {
  public String longestCommonPrefix(String[] strs) {
    if (strs.length == 0) {
      return "";
    }
    String prefix = strs[0];
    for (int i = 1; i < strs.length; i++) {
      while (!strs[i].startsWith(prefix)) {
        prefix = prefix.substring(0, prefix.length() - 1);
        if (prefix.isEmpty()) {
          return "";
        }
      }
    }
    return prefix;
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    String[] input = new String[] { "flower", "flow", "flight" };
    System.out.println("Input:  [" + String.join(" ", input) + "]");
    Solution solution = new Solution();
    System.out.println("Output: " + solution.longestCommonPrefix(input));
  }
}
