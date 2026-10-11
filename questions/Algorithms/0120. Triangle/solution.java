import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

// -------------------------------solution begin-------------------------------
class Solution {
  public int minimumTotal(List<List<Integer>> triangle) {
    int n = triangle.size();
    int[] dp = new int[n];
    for (int j = 0; j < n; j++) {
      dp[j] = triangle.get(n - 1).get(j);
    }
    for (int i = n - 2; i >= 0; i--) {
      for (int j = 0; j <= i; j++) {
        dp[j] = triangle.get(i).get(j) + Math.min(dp[j], dp[j + 1]);
      }
    }
    return dp[0];
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    List<List<List<Integer>>> cases = new ArrayList<>();
    cases.add(Arrays.asList(
        Arrays.asList(2),
        Arrays.asList(3, 4),
        Arrays.asList(6, 5, 7),
        Arrays.asList(4, 1, 8, 3)));
    cases.add(Arrays.asList(Arrays.asList(-10)));

    Solution solution = new Solution();
    for (List<List<Integer>> triangle : cases) {
      System.out.println("Input:  " + triangle);
      System.out.println("Output: " + solution.minimumTotal(triangle));
    }
  }
}
