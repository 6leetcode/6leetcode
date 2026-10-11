// -------------------------------solution begin-------------------------------
class Solution {
  public int multiply(int A, int B) {
    if (A < B) return multiply(B, A);
    if (B == 0) return 0;
    if (B == 1) return A;
    if ((B & 1) == 1) return A + multiply(A, B - 1);
    return multiply(A << 1, B >> 1);
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    int A = 3, B = 4;
    System.out.println("Input:  A = " + A + ", B = " + B);
    System.out.println("Output: " + new Solution().multiply(A, B));
  }
}
