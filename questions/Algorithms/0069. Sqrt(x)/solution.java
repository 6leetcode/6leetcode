// -------------------------------solution begin-------------------------------
class Solution {
  public int mySqrt(int x) {
    int r = (int) Math.sqrt(x);
    while ((long) (r + 1) * (r + 1) <= x) {
      r++;
    }
    while ((long) r * r > x) {
      r--;
    }
    return r;
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    int input = 8;
    System.out.println("Input:  " + input);
    Solution solution = new Solution();
    System.out.println("Output: " + solution.mySqrt(input));
  }
}
