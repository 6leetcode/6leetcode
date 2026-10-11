// -------------------------------solution begin-------------------------------
class Solution {
  public boolean isMatch(String s, String p) {
    if (p.isEmpty()) {
      return s.isEmpty();
    }

    boolean firstMatch = !s.isEmpty() && (s.charAt(0) == p.charAt(0) || p.charAt(0) == '.');

    if (p.length() >= 2 && p.charAt(1) == '*') {
      return isMatch(s, p.substring(2)) || (firstMatch && isMatch(s.substring(1), p));
    }
    return firstMatch && isMatch(s.substring(1), p.substring(1));
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    String input1 = "aab";
    String input2 = "c*a*b";
    System.out.println("Input:  " + input1 + " " + input2);
    Solution solution = new Solution();
    System.out.println("Output: " + solution.isMatch(input1, input2));
  }
}
