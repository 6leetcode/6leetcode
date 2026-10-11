// -------------------------------solution begin-------------------------------
class Solution {
  public boolean isUgly(int num) {
    if (num < 1) {
      return false;
    }
    for (int f : new int[] { 2, 3, 5 }) {
      while (num % f == 0) {
        num /= f;
      }
    }
    return num == 1;
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    int input = 14;
    System.out.println("Input:  " + input);
    Solution solution = new Solution();
    System.out.println("Output: " + solution.isUgly(input));
  }
}
