// -------------------------------solution begin-------------------------------
class Solution {
  public String addBinary(String a, String b) {
    StringBuilder sb = new StringBuilder();
    int i = a.length() - 1, j = b.length() - 1, carry = 0;
    while (i >= 0 || j >= 0 || carry > 0) {
      int sum = carry;
      if (i >= 0) {
        sum += a.charAt(i) - '0';
        i--;
      }
      if (j >= 0) {
        sum += b.charAt(j) - '0';
        j--;
      }
      sb.append(sum % 2);
      carry = sum / 2;
    }
    return sb.reverse().toString();
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    String input1 = "1011";
    String input2 = "111";
    System.out.println("Input:  " + input1 + " " + input2);
    Solution solution = new Solution();
    System.out.println("Output: " + solution.addBinary(input1, input2));
  }
}
