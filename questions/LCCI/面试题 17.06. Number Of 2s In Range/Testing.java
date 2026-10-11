// -------------------------------solution begin-------------------------------
class Solution {
  public int numberOf2sInRange(int n) {
    long count = 0;
    for (long factor = 1; factor <= n; factor *= 10) {
      long cur = (n / factor) % 10;
      long higher = n / (factor * 10);
      long lower = n % factor;
      if (cur < 2) {
        count += higher * factor;
      } else if (cur == 2) {
        count += higher * factor + lower + 1;
      } else {
        count += (higher + 1) * factor;
      }
    }
    return (int) count;
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    int input = 25;
    System.out.println("Input:  " + input);
    System.out.println("Output: " + new Solution().numberOf2sInRange(input));
  }
}
