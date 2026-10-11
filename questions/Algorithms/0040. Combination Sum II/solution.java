import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

// -------------------------------solution begin-------------------------------
class Solution {
  private void dfs(int[] candidates, int target, int start, List<Integer> cur, List<List<Integer>> res) {
    if (target == 0) {
      res.add(new ArrayList<>(cur));
      return;
    }
    for (int i = start; i < candidates.length; i++) {
      if (candidates[i] > target) {
        break;
      }
      if (i > start && candidates[i] == candidates[i - 1]) {
        continue;
      }
      cur.add(candidates[i]);
      dfs(candidates, target - candidates[i], i + 1, cur, res);
      cur.remove(cur.size() - 1);
    }
  }

  public List<List<Integer>> combinationSum2(int[] candidates, int target) {
    Arrays.sort(candidates);
    List<List<Integer>> res = new ArrayList<>();
    dfs(candidates, target, 0, new ArrayList<>(), res);
    return res;
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    int[] input1 = { 10, 1, 2, 7, 6, 1, 5 };
    int input2 = 8;
    System.out.printf("Input:  %s %d\n", ArrayShowInteger(input1), input2);
    Solution solution = new Solution();
    System.out.println("Output: " + solution.combinationSum2(input1, input2));
  }

  public static String ArrayShowInteger(int[] arr) {
    String res = "[";
    for (int i = 0; i < arr.length; i++) {
      res += (i == 0 ? "" : ", ") + Integer.toString(arr[i]);
    }
    return res + "]";
  }
}
