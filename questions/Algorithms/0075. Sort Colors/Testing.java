import java.util.Arrays;

// -------------------------------solution begin-------------------------------
class Solution {
  public void sortColors(int[] nums) {
    int ptr = 0;
    for (int i = 0; i < nums.length; i++) {
      if (nums[i] == 0) {
        int t = nums[i];
        nums[i] = nums[ptr];
        nums[ptr] = t;
        ptr++;
      }
    }
    for (int i = ptr; i < nums.length; i++) {
      if (nums[i] == 1) {
        int t = nums[i];
        nums[i] = nums[ptr];
        nums[ptr] = t;
        ptr++;
      }
    }
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    int[] input = { 2, 0, 2, 1, 1, 0 };
    System.out.println("Input:  " + Arrays.toString(input));
    new Solution().sortColors(input);
    System.out.println("Output: " + Arrays.toString(input));
  }
}
