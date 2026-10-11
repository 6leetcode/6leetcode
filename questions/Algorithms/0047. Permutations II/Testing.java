import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

// -------------------------------solution begin-------------------------------
class Solution {
  private void backtrack(int[] nums, boolean[] used, List<Integer> cur, List<List<Integer>> res) {
    if (cur.size() == nums.length) {
      res.add(new ArrayList<>(cur));
      return;
    }
    for (int i = 0; i < nums.length; i++) {
      if (used[i]) {
        continue;
      }
      if (i > 0 && nums[i] == nums[i - 1] && !used[i - 1]) {
        continue;
      }
      used[i] = true;
      cur.add(nums[i]);
      backtrack(nums, used, cur, res);
      cur.remove(cur.size() - 1);
      used[i] = false;
    }
  }

  public List<List<Integer>> permuteUnique(int[] nums) {
    Arrays.sort(nums);
    List<List<Integer>> res = new ArrayList<>();
    backtrack(nums, new boolean[nums.length], new ArrayList<>(), res);
    return res;
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    int[] input = { 1, 1, 2 };
    System.out.printf("Input:  %s\n", ArrayShowInteger(input));
    Solution solution = new Solution();
    System.out.println("Output: " + solution.permuteUnique(input));
  }

  public static String ArrayShowInteger(int[] arr) {
    String res = "[";
    for (int i = 0; i < arr.length; i++) {
      res += (i == 0 ? "" : ", ") + Integer.toString(arr[i]);
    }
    return res + "]";
  }
}
