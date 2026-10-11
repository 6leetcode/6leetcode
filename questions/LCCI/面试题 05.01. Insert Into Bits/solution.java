// -------------------------------solution begin-------------------------------
class Solution {
  public int insertBits(int N, int M, int i, int j) {
    int mask = ((1 << (j - i + 1)) - 1) << i;
    N &= ~mask;
    N |= (M << i);
    return N;
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    int N = 1024, M = 19, i = 2, j = 6;
    System.out.println("Input:  N = 10000000000, M = 10011, i = 2, j = 6");
    System.out.println("Output: " + new Solution().insertBits(N, M, i, j));
  }
}
