// -------------------------------solution begin-------------------------------
class Solution {
  public boolean search(int[] nums, int target) {
    int lo = 0, hi = nums.length - 1;
    while (lo <= hi) {
      int mid = lo + (hi - lo) / 2;
      if (nums[mid] == target) return true;
      if (nums[lo] == nums[mid] && nums[mid] == nums[hi]) {
        lo++;
        hi--;
      } else if (nums[lo] <= nums[mid]) {
        if (nums[lo] <= target && target < nums[mid]) {
          hi = mid - 1;
        } else {
          lo = mid + 1;
        }
      } else {
        if (nums[mid] < target && target <= nums[hi]) {
          lo = mid + 1;
        } else {
          hi = mid - 1;
        }
      }
    }
    return false;
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    int[] input = { 2, 5, 6, 0, 0, 1, 2 };
    int target = 0;
    System.out.println("Input:  " + ArrayShowInteger(input) + " " + target);
    Solution solution = new Solution();
    System.out.println("Output: " + solution.search(input, target));
  }

  public static String ArrayShowInteger(int[] arr) {
    String res = "[";
    for (int i = 0; i < arr.length; i++) {
      res += (i == 0 ? "" : ", ") + Integer.toString(arr[i]);
    }
    return res + "]";
  }
}
