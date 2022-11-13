// -------------------------------solution begin-------------------------------
class Solution {
  private double fastPow(double x, long n) {
    if (n == 0) {
      return 1.0;
    }
    double half = fastPow(x, n / 2);
    if (n % 2 == 0) {
      return half * half;
    } else {
      return half * half * x;
    }
  }

  public double myPow(double x, int n) {
    long N = n;
    if (N < 0) {
      x = 1 / x;
      N = -N;
    }

    return fastPow(x, N);
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    Solution solution = new Solution();
    double x = 2;
    int n = -8;
    System.out.printf("Input:  %f, %d\n", x, n);
    double result = solution.myPow(x, n);
    System.out.printf("Output: %f\n", result);
  }
}
