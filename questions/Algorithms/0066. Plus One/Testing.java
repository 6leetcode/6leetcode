import java.util.Arrays;

// -------------------------------solution begin-------------------------------
class Solution {
  public int[] plusOne(int[] digits) {
    int carry = 1;
    for (int i = digits.length - 1; i >= 0; i--) {
      int sum = digits[i] + carry;
      digits[i] = sum % 10;
      carry = sum / 10;
    }
    if (carry == 1) {
      int[] res = new int[digits.length + 1];
      res[0] = 1;
      System.arraycopy(digits, 0, res, 1, digits.length);
      return res;
    }
    return digits;
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    int[] input = { 9, 9 };
    System.out.println("Input:  " + Arrays.toString(input));
    Solution solution = new Solution();
    System.out.println("Output: " + Arrays.toString(solution.plusOne(input)));
  }
}
