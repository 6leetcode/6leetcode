// -------------------------------solution begin-------------------------------
class Solution {
  public boolean isPowerOfTwo(int n) {
    return n > 0 && (n & (n - 1)) == 0;
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    int input = 16;
    System.out.println("Input:  " + input);
    Solution solution = new Solution();
    System.out.println("Output: " + solution.isPowerOfTwo(input));
  }
}
