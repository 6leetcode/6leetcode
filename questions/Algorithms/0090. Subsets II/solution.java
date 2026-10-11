import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

// -------------------------------solution begin-------------------------------
class Solution {
  private void dfs(int[] nums, int start, List<Integer> cur, List<List<Integer>> res) {
    res.add(new ArrayList<>(cur));
    for (int i = start; i < nums.length; i++) {
      if (i > start && nums[i] == nums[i - 1]) continue;
      cur.add(nums[i]);
      dfs(nums, i + 1, cur, res);
      cur.remove(cur.size() - 1);
    }
  }

  public List<List<Integer>> subsetsWithDup(int[] nums) {
    Arrays.sort(nums);
    List<List<Integer>> res = new ArrayList<>();
    dfs(nums, 0, new ArrayList<>(), res);
    return res;
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    int[] input = { 1, 2, 2 };
    System.out.println("Input:  [1, 2, 2]");
    Solution solution = new Solution();
    System.out.println("Output: " + solution.subsetsWithDup(input));
  }
}
