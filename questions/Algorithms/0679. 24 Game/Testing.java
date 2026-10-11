// -------------------------------solution begin-------------------------------
class Solution {
  public boolean judgePoint24(int[] nums) {
    double[] a = new double[nums.length];
    for (int i = 0; i < nums.length; i++) {
      a[i] = nums[i];
    }
    return solve(a);
  }

  private boolean solve(double[] a) {
    if (a.length == 1) {
      return Math.abs(a[0] - 24) < 1e-6;
    }
    for (int i = 0; i < a.length; i++) {
      for (int j = 0; j < a.length; j++) {
        if (i == j) {
          continue;
        }
        double[] rest = new double[a.length - 2];
        int t = 0;
        for (int k = 0; k < a.length; k++) {
          if (k != i && k != j) {
            rest[t++] = a[k];
          }
        }
        double x = a[i], y = a[j];
        double[] cands = { x + y, x - y, x * y };
        for (double v : cands) {
          if (next(rest, v)) {
            return true;
          }
        }
        if (Math.abs(y) > 1e-6 && next(rest, x / y)) {
          return true;
        }
      }
    }
    return false;
  }

  private boolean next(double[] rest, double v) {
    double[] nb = new double[rest.length + 1];
    System.arraycopy(rest, 0, nb, 0, rest.length);
    nb[rest.length] = v;
    return solve(nb);
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    int[] input = { 3, 3, 8, 8 };
    System.out.println("Input:  [3, 3, 8, 8]");
    Solution solution = new Solution();
    System.out.println("Output: " + solution.judgePoint24(input));
  }
}
