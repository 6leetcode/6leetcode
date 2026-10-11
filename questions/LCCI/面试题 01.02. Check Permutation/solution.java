// -------------------------------solution begin-------------------------------
class Solution {
  public boolean CheckPermutation(String s1, String s2) {
    if (s1.length() != s2.length()) return false;
    int[] count = new int[128];
    for (int i = 0; i < s1.length(); i++) {
      count[s1.charAt(i)]++;
      count[s2.charAt(i)]--;
    }
    for (int c : count) {
      if (c != 0) return false;
    }
    return true;
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    String s1 = "abc", s2 = "bca";
    System.out.println("Input:  " + s1 + " " + s2);
    Solution solution = new Solution();
    System.out.println("Output: " + solution.CheckPermutation(s1, s2));
  }
}
