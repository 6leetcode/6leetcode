import java.util.Arrays;

// -------------------------------solution begin-------------------------------
class Solution {
  public int majorityElement(int[] nums) {
    Arrays.sort(nums);
    return nums[nums.length / 2];
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    int[] input = { -1, -1, 2147483647 };
    System.out.println("Input:  " + ArrayShowInteger(input));
    Solution solution = new Solution();
    System.out.println("Output: " + solution.majorityElement(input));
  }

  public static String ArrayShowInteger(int[] arr) {
    String res = "[";
    for (int i = 0; i < arr.length; i++) {
      res += (i == 0 ? "" : ", ") + Integer.toString(arr[i]);
    }
    return res + "]";
  }
}
