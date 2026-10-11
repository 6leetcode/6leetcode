import java.util.Arrays;

// -------------------------------solution begin-------------------------------
class Solution {
  public int missingNumber(int[] nums) {
    int res = nums.length;
    for (int i = 0; i < nums.length; i++) res ^= i ^ nums[i];
    return res;
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    int[] nums = { 9, 6, 4, 2, 3, 5, 7, 0, 1 };
    System.out.println("Input:  " + Arrays.toString(nums));
    System.out.println("Output: " + new Solution().missingNumber(nums));
  }
}
