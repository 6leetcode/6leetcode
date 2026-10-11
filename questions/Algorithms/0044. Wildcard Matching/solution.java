// -------------------------------solution begin-------------------------------
class Solution {
  public boolean isMatch(String s, String p) {
    int sIdx = 0, pIdx = 0, match = 0, star = -1;
    int sLen = s.length(), pLen = p.length();
    while (sIdx < sLen) {
      if (pIdx < pLen && (p.charAt(pIdx) == '?' || p.charAt(pIdx) == s.charAt(sIdx))) {
        sIdx++;
        pIdx++;
      } else if (pIdx < pLen && p.charAt(pIdx) == '*') {
        star = pIdx;
        match = sIdx;
        pIdx++;
      } else if (star != -1) {
        pIdx = star + 1;
        match++;
        sIdx = match;
      } else {
        return false;
      }
    }
    while (pIdx < pLen && p.charAt(pIdx) == '*') {
      pIdx++;
    }
    return pIdx == pLen;
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    String input1 = "aa";
    String input2 = "*";
    System.out.println("Input:  " + input1 + " " + input2);
    Solution solution = new Solution();
    System.out.println("Output: " + solution.isMatch(input1, input2));
  }
}
