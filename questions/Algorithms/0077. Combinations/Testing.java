import java.util.ArrayList;
import java.util.List;

// -------------------------------solution begin-------------------------------
class Solution {
  private void dfs(int n, int k, int start, List<Integer> cur, List<List<Integer>> res) {
    if (cur.size() == k) {
      res.add(new ArrayList<>(cur));
      return;
    }
    for (int i = start; i <= n; i++) {
      cur.add(i);
      dfs(n, k, i + 1, cur, res);
      cur.remove(cur.size() - 1);
    }
  }

  public List<List<Integer>> combine(int n, int k) {
    List<List<Integer>> res = new ArrayList<>();
    dfs(n, k, 1, new ArrayList<>(), res);
    return res;
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    int n = 4, k = 2;
    System.out.println("Input:  " + n + " " + k);
    Solution solution = new Solution();
    System.out.println("Output: " + solution.combine(n, k));
  }
}
