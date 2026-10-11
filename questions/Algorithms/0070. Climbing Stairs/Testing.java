// -------------------------------solution begin-------------------------------
class Solution {
  public int climbStairs(int n) {
    int prev = 0, cur = 1;
    for (int i = 1; i <= n; i++) {
      int tmp = cur;
      cur += prev;
      prev = tmp;
    }
    return cur;
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    int input = 10;
    System.out.println("Input:  " + input);
    Solution solution = new Solution();
    System.out.println("Output: " + solution.climbStairs(input));
  }
}
