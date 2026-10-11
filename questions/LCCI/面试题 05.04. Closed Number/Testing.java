import java.util.Arrays;

// -------------------------------solution begin-------------------------------
class Solution {
  private int nextBigger(int num) {
    int c = num, c0 = 0, c1 = 0;
    while (c != 0 && (c & 1) == 0) {
      c0++;
      c >>= 1;
    }
    while ((c & 1) == 1) {
      c1++;
      c >>= 1;
    }
    if (c0 + c1 >= 31) return -1;
    int p = c0 + c1;
    num |= (1 << p);
    num &= ~((1 << p) - 1);
    num |= (1 << (c1 - 1)) - 1;
    return num;
  }

  private int nextSmaller(int num) {
    int c = num, c0 = 0, c1 = 0;
    while ((c & 1) == 1) {
      c1++;
      c >>= 1;
    }
    if (c == 0) return -1;
    while (c != 0 && (c & 1) == 0) {
      c0++;
      c >>= 1;
    }
    int p = c0 + c1;
    num &= ~((1 << (p + 1)) - 1);
    num |= ((1 << (c1 + 1)) - 1) << (c0 - 1);
    return num;
  }

  public int[] findClosedNumbers(int num) {
    return new int[] { nextBigger(num), nextSmaller(num) };
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    int input = 2;
    System.out.println("Input:  " + input);
    System.out.println("Output: " + Arrays.toString(new Solution().findClosedNumbers(input)));
  }
}
