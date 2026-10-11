// -------------------------------solution begin-------------------------------
class Solution {
  public int reverseBits(int num) {
    int best = 0, prev = 0, cur = 0;
    for (int i = 0; i < 32; i++) {
      if (((num >> i) & 1) == 1) {
        cur++;
      } else {
        best = Math.max(best, prev + cur + 1);
        prev = cur;
        cur = 0;
      }
    }
    best = Math.max(best, prev + cur + 1);
    return Math.min(best, 32);
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    int input = 1775;
    System.out.println("Input:  " + input);
    System.out.println("Output: " + new Solution().reverseBits(input));
  }
}
