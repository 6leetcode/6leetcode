import java.util.Arrays;

// -------------------------------solution begin-------------------------------
class Solution {
  public void moveZeroes(int[] nums) {
    int left = 0;
    for (int right = 0; right < nums.length; right++) {
      if (nums[right] != 0) {
        int t = nums[left];
        nums[left] = nums[right];
        nums[right] = t;
        left++;
      }
    }
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    int[] input = { 0, 1, 0, 3, 12 };
    System.out.println("Input:  " + Arrays.toString(input));
    new Solution().moveZeroes(input);
    System.out.println("Output: " + Arrays.toString(input));
  }
}
