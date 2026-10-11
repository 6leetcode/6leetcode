// -------------------------------solution begin-------------------------------
class Solution {
  private int search(int[] nums, int lo, int hi) {
    if (lo > hi) return -1;
    int mid = lo + (hi - lo) / 2;
    if (nums[mid] == mid) return mid;
    int res = search(nums, lo, Math.min(mid - 1, nums[mid]));
    if (res != -1) return res;
    return search(nums, Math.max(mid + 1, nums[mid]), hi);
  }

  public int findMagicIndex(int[] nums) {
    return search(nums, 0, nums.length - 1);
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    int[] nums = { 1, 1, 1 };
    System.out.println("Input:  [1, 1, 1]");
    System.out.println("Output: " + new Solution().findMagicIndex(nums));
  }
}
