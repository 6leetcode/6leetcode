import java.util.Arrays;

// -------------------------------solution begin-------------------------------
class Solution {
  public int majorityElement(int[] nums) {
    int candidate = nums[0], count = 0;
    for (int x : nums) {
      if (count == 0) candidate = x;
      count += x == candidate ? 1 : -1;
    }
    int c = 0;
    for (int x : nums) if (x == candidate) c++;
    return c > nums.length / 2 ? candidate : -1;
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    int[] nums = { 1, 2, 5, 9, 5, 9, 5, 5, 5 };
    System.out.println("Input:  " + Arrays.toString(nums));
    System.out.println("Output: " + new Solution().majorityElement(nums));
  }
}
