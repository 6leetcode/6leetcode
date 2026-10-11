// -------------------------------solution begin-------------------------------
class Solution {
  public int exchangeBits(int num) {
    return ((num & 0xaaaaaaaa) >>> 1) | ((num & 0x55555555) << 1);
  }
}
// ------------------------------- solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    int input = 2;
    System.out.println("Input:  " + input);
    System.out.println("Output: " + new Solution().exchangeBits(input));
  }
}
