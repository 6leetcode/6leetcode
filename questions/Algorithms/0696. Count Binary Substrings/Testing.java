// -------------------------------solution begin-------------------------------
class Solution {
  public int countBinarySubstrings(String s) {
    int n = 0, pre = 0, curr = 1;
    for (int i = 0; i < s.length() - 1; i++) {
      if (s.charAt(i) == s.charAt(i + 1)) {
        curr++;
      } else {
        pre = curr;
        curr = 1;
      }
      if (pre >= curr) {
        n++;
      }
    }
    return n;
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    String input = "00110011";
    System.out.println("Input:  " + input);
    Solution solution = new Solution();
    System.out.println("Output: " + solution.countBinarySubstrings(input));
  }
}
