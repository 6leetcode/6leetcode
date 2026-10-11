// -------------------------------solution begin-------------------------------
class Solution {
  public int searchInsert(int[] nums, int target) {
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
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    int[] input1 = { 1, 3, 5, 6 };
    int input2 = 5;
    System.out.printf("Input:  %s %d\n", ArrayShowInteger(input1), input2);
    Solution solution = new Solution();
    System.out.println("Output: " + solution.searchInsert(input1, input2));
  }

  public static String ArrayShowInteger(int[] arr) {
    String res = "[";
    for (int i = 0; i < arr.length; i++) {
      res += (i == 0 ? "" : ", ") + Integer.toString(arr[i]);
    }
    return res + "]";
  }
}
