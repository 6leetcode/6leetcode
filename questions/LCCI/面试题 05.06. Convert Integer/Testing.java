// -------------------------------solution begin-------------------------------
class Solution {
  public int convertInteger(int A, int B) {
    return Integer.bitCount(A ^ B);
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    int A = 29, B = 15;
    System.out.println("Input:  A = " + A + ", B = " + B);
    System.out.println("Output: " + new Solution().convertInteger(A, B));
  }
}
