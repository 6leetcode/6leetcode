// -------------------------------solution begin-------------------------------
class Solution {
  public int divide(int dividend, int divisor) {
    if (dividend == Integer.MIN_VALUE && divisor == -1) {
      return Integer.MAX_VALUE;
    }
    long a = Math.abs((long) dividend);
    long b = Math.abs((long) divisor);
    int sign = ((dividend > 0) ^ (divisor > 0)) ? -1 : 1;
    long res = 0;
    while (a >= b) {
      long temp = b, multiple = 1;
      while (a >= (temp << 1)) {
        temp <<= 1;
        multiple <<= 1;
      }
      a -= temp;
      res += multiple;
    }
    return (int) (sign * res);
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    int input1 = 10, input2 = 3;
    System.out.println("Input:  " + input1 + " " + input2);
    Solution solution = new Solution();
    System.out.println("Output: " + solution.divide(input1, input2));
  }
}
