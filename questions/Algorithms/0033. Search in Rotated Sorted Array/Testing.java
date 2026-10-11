// -------------------------------solution begin-------------------------------
class Solution {
  public int search(int[] nums, int target) {
    int lo = 0, hi = nums.length - 1;
    while (lo <= hi) {
      int mid = lo + (hi - lo) / 2;
      if (nums[mid] == target) {
        return mid;
      }
      if (nums[lo] <= nums[mid]) {
        if (target >= nums[lo] && target < nums[mid]) {
          hi = mid - 1;
        } else {
          lo = mid + 1;
        }
      } else {
        if (target > nums[mid] && target <= nums[hi]) {
          lo = mid + 1;
        } else {
          hi = mid - 1;
        }
      }
    }
    return -1;
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    int[] input1 = { 4, 5, 6, 7, 0, 1, 2 };
    int input2 = 0;
    System.out.printf("Input:  %s %d\n", ArrayShowInteger(input1), input2);
    Solution solution = new Solution();
    System.out.println("Output: " + solution.search(input1, input2));
  }

  public static String ArrayShowInteger(int[] arr) {
    String res = "[";
    for (int i = 0; i < arr.length; i++) {
      res += (i == 0 ? "" : ", ") + Integer.toString(arr[i]);
    }
    return res + "]";
  }
}
