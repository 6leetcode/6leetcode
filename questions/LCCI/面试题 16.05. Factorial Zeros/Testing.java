// -------------------------------solution begin-------------------------------
class Solution {
  public int trailingZeroes(int n) {
    int count = 0;
    while (n >= 5) {
      n /= 5;
      count += n;
    }
    return count;
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    int input = 5;
    System.out.println("Input:  " + input);
    System.out.println("Output: " + new Solution().trailingZeroes(input));
  }
}
