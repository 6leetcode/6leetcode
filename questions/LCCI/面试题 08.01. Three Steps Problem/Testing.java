// -------------------------------solution begin-------------------------------
class Solution {
  public int waysToStep(int n) {
    final long MOD = 1000000007;
    if (n == 1) return 1;
    if (n == 2) return 2;
    if (n == 3) return 4;
    long a = 1, b = 2, c = 4;
    for (int i = 4; i <= n; i++) {
      long d = (a + b + c) % MOD;
      a = b;
      b = c;
      c = d;
    }
    return (int) c;
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    int input = 5;
    System.out.println("Input:  " + input);
    System.out.println("Output: " + new Solution().waysToStep(input));
  }
}
