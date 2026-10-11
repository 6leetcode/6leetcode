// -------------------------------solution begin-------------------------------
class Solution {
  public boolean isPowerOfThree(int n) {
    return n > 0 && 1162261467 % n == 0;
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    int input = 27;
    System.out.println("Input:  " + input);
    Solution solution = new Solution();
    System.out.println("Output: " + solution.isPowerOfThree(input));
  }
}
