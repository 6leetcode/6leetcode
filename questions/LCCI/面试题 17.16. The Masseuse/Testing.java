import java.util.Arrays;

// -------------------------------solution begin-------------------------------
class Solution {
  public int massage(int[] nums) {
    int prev = 0, cur = 0;
    for (int x : nums) {
      int tmp = cur;
      cur = Math.max(cur, prev + x);
      prev = tmp;
    }
    return cur;
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    int[] nums = { 1, 2, 3, 1 };
    System.out.println("Input:  " + Arrays.toString(nums));
    System.out.println("Output: " + new Solution().massage(nums));
  }
}
