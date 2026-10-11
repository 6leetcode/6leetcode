// -------------------------------solution begin-------------------------------
class Solution {
  public int maximum(int a, int b) {
    long diff = (long) a - b;
    int k = (int) (diff >> 63) & 1;
    return a * (1 - k) + b * k;
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    int a = 1, b = 2;
    System.out.println("Input:  a = " + a + ", b = " + b);
    System.out.println("Output: " + new Solution().maximum(a, b));
  }
}
