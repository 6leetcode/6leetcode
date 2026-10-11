// -------------------------------solution begin-------------------------------
class Solution {
  public int majorityElement(int[] nums) {
    int candidate = nums[0], count = 1;
    for (int i = 1; i < nums.length; i++) {
      if (count == 0) {
        candidate = nums[i];
        count = 1;
      } else if (nums[i] == candidate) {
        count++;
      } else {
        count--;
      }
    }
    return candidate;
  }
}
// -------------------------------solution end---------------------------------

class Testing {
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
