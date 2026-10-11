// -------------------------------solution begin-------------------------------
class Solution {
  public String replaceSpaces(String S, int length) {
    StringBuilder sb = new StringBuilder();
    for (int i = 0; i < length; i++) {
      char c = S.charAt(i);
      if (c == ' ') {
        sb.append("%20");
      } else {
        sb.append(c);
      }
    }
    return sb.toString();
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    String input = "Mr John Smith ";
    int length = 13;
    System.out.println("Input:  \"" + input + "\", " + length);
    Solution solution = new Solution();
    System.out.println("Output: \"" + solution.replaceSpaces(input, length) + "\"");
  }
}
