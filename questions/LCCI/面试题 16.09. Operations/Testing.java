// -------------------------------solution begin-------------------------------
class Operations {
  private int negate(int a) {
    return ~a + 1;
  }

  private int absVal(int a) {
    return a < 0 ? negate(a) : a;
  }

  public Operations() {}

  public int minus(int a, int b) {
    return a + negate(b);
  }

  public int multiply(int a, int b) {
    int res = 0;
    int x = absVal(a), y = absVal(b);
    while (y > 0) {
      if ((y & 1) == 1) res += x;
      x <<= 1;
      y >>= 1;
    }
    if ((a < 0) != (b < 0)) res = negate(res);
    return res;
  }

  public int divide(int a, int b) {
    if (b == 0) return 0;
    long x = absVal(a), y = absVal(b), q = 0;
    while (x >= y) {
      x -= y;
      q++;
    }
    int res = (int) q;
    if ((a < 0) != (b < 0)) res = negate(res);
    return res;
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    System.out.println("Input:  minus(1, 2), multiply(3, 4), divide(5, -2)");
    Operations op = new Operations();
    System.out.printf("Output: [%d, %d, %d]\n", op.minus(1, 2), op.multiply(3, 4), op.divide(5, -2));
  }
}
