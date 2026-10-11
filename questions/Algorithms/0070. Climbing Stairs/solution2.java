// -------------------------------solution begin-------------------------------
class Solution {
  public int climbStairs(int n) {
    // with this formal `$\frac{\frac{1+\sqrt{5}^{n}}{2}-\frac{1-\sqrt{5}^{n}}{2}}{\sqrt{5}}$`
    double s = Math.sqrt(5);
    return (int) Math.floor((Math.pow((1 + s) / 2, n + 1) + Math.pow((1 - s) / 2, n + 1)) / s + 0.5);
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    int input = 10;
    System.out.println("Input:  " + input);
    Solution solution = new Solution();
    System.out.println("Output: " + solution.climbStairs(input));
  }
}
