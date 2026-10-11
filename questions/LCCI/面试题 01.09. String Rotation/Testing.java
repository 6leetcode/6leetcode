// -------------------------------solution begin-------------------------------
class Solution {
  public boolean isFlipedString(String s1, String s2) {
    if (s1.length() != s2.length()) return false;
    return (s2 + s2).contains(s1);
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    String s1 = "waterbottle", s2 = "erbottlewat";
    System.out.println("Input:  " + s1 + " " + s2);
    Solution solution = new Solution();
    System.out.println("Output: " + solution.isFlipedString(s1, s2));
  }
}
