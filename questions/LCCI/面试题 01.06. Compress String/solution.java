// -------------------------------solution begin-------------------------------
class Solution {
  public String compressString(String S) {
    StringBuilder sb = new StringBuilder();
    int n = S.length();
    for (int i = 0; i < n;) {
      int j = i;
      while (j < n && S.charAt(j) == S.charAt(i)) j++;
      sb.append(S.charAt(i)).append(j - i);
      i = j;
    }
    String res = sb.toString();
    return res.length() < S.length() ? res : S;
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    String input = "aabcccccaaa";
    System.out.println("Input:  " + input);
    Solution solution = new Solution();
    System.out.println("Output: " + solution.compressString(input));
  }
}
