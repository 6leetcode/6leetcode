import java.util.Arrays;

// -------------------------------solution begin-------------------------------
class Solution {
  public int maxSubArray(int[] nums) {
    int pre = 0, maxAns = nums[0];
    for (int x : nums) {
      pre = Math.max(pre + x, x);
      maxAns = Math.max(maxAns, pre);
    }
    return maxAns;
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    int[] nums = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };
    System.out.println("Input:  " + Arrays.toString(nums));
    System.out.println("Output: " + new Solution().maxSubArray(nums));
  }
}
