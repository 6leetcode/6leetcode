// -------------------------------solution begin-------------------------------
class Solution {
  public boolean isUnique(String astr) {
    boolean[] seen = new boolean[128];
    for (int i = 0; i < astr.length(); i++) {
      char c = astr.charAt(i);
      if (seen[c]) return false;
      seen[c] = true;
    }
    return true;
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    String input = "leetcode";
    System.out.println("Input:  " + input);
    Solution solution = new Solution();
    System.out.println("Output: " + solution.isUnique(input));
  }
}
