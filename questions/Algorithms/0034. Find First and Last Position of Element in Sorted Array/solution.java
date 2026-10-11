// -------------------------------solution begin-------------------------------
class Solution {
  private int lowerBound(int[] nums, int target) {
    int lo = 0, hi = nums.length;
    while (lo < hi) {
      int mid = lo + (hi - lo) / 2;
      if (nums[mid] < target) {
        lo = mid + 1;
      } else {
        hi = mid;
      }
    }
    return lo;
  }

  public int[] searchRange(int[] nums, int target) {
    int lo = lowerBound(nums, target);
    int hi = lowerBound(nums, target + 1) - 1;
    if (lo < nums.length && nums[lo] == target) {
      return new int[] { lo, hi };
    }
    return new int[] { -1, -1 };
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    int[] input1 = { 5, 7, 7, 8, 8, 10 };
    int input2 = 8;
    System.out.printf("Input:  %s %d\n", ArrayShowInteger(input1), input2);
    Solution solution = new Solution();
    System.out.println("Output: " + ArrayShowInteger(solution.searchRange(input1, input2)));
  }

  public static String ArrayShowInteger(int[] arr) {
    String res = "[";
    for (int i = 0; i < arr.length; i++) {
      res += (i == 0 ? "" : ", ") + Integer.toString(arr[i]);
    }
    return res + "]";
  }
}
