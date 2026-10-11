// -------------------------------solution begin-------------------------------
class Solution {
  public void reverseString(char[] s) {
    for (int i = 0, j = s.length - 1; i < j; i++, j--) {
      char temp = s[i];
      s[i] = s[j];
      s[j] = temp;
    }
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    char[] input = { 'h', 'e', 'l', 'l', 'o' };
    System.out.println("Input:  " + new String(input));
    new Solution().reverseString(input);
    System.out.println("Output: " + new String(input));
  }
}
