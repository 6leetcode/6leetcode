import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

// -------------------------------solution begin-------------------------------
class Solution {
  public List<List<Integer>> pairSums(int[] nums, int target) {
    Arrays.sort(nums);
    List<List<Integer>> res = new ArrayList<>();
    int i = 0, j = nums.length - 1;
    while (i < j) {
      int sum = nums[i] + nums[j];
      if (sum < target) {
        i++;
      } else if (sum > target) {
        j--;
      } else {
        res.add(Arrays.asList(nums[i], nums[j]));
        i++;
        j--;
      }
    }
    return res;
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    int[] nums = { 5, 6, 5, 6 };
    int target = 11;
    System.out.println("Input:  nums = [5,6,5,6], target = 11");
    System.out.println("Output: " + new Solution().pairSums(nums, target));
  }
}
