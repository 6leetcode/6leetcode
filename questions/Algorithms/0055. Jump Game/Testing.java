// -------------------------------solution begin-------------------------------
class Solution {
  public boolean canJump(int[] nums) {
    int rightmost = 0;
    for (int i = 0; i < nums.length; i++) {
      if (i <= rightmost) {
        rightmost = Math.max(rightmost, i + nums[i]);
        if (rightmost >= nums.length - 1) {
          return true;
        }
      }
    }
    return false;
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    int[] input = { 3, 2, 1, 0, 4 };
    System.out.println("Input:  " + ArrayShowInteger(input));
    Solution solution = new Solution();
    System.out.println("Output: " + solution.canJump(input));
  }

  public static String ArrayShowInteger(int[] arr) {
    String res = "[";
    for (int i = 0; i < arr.length; i++) {
      res += (i == 0 ? "" : ", ") + Integer.toString(arr[i]);
    }
    return res + "]";
  }
}
