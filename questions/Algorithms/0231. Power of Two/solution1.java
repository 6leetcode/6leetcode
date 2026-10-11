// -------------------------------solution begin-------------------------------
class Solution {
  public boolean isPowerOfTwo(int n) {
    int cnt = 0; // num of bits 1
    for (; n > 0; n >>= 1) {
      if ((n & 1) == 1) {
        cnt++;
        if (cnt > 1) return false;
      }
    }
    return cnt == 1;
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    int input = 16;
    System.out.println("Input:  " + input);
    Solution solution = new Solution();
    System.out.println("Output: " + solution.isPowerOfTwo(input));
  }
}
