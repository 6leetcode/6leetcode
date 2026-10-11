import java.util.ArrayList;
import java.util.List;

// -------------------------------solution begin-------------------------------
class Solution {
  private boolean dfs(List<List<Integer>> adj, int node, int target, boolean[] visited) {
    if (node == target) return true;
    if (visited[node]) return false;
    visited[node] = true;
    for (int next : adj.get(node)) {
      if (dfs(adj, next, target, visited)) return true;
    }
    return false;
  }

  public boolean findWhetherExistsPath(int n, int[][] graph, int start, int target) {
    List<List<Integer>> adj = new ArrayList<>();
    for (int i = 0; i <= n; i++) adj.add(new ArrayList<>());
    for (int[] e : graph) adj.get(e[0]).add(e[1]);
    return dfs(adj, start, target, new boolean[n + 1]);
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    int[][] graph = { { 0, 1 }, { 0, 2 }, { 1, 2 }, { 1, 2 } };
    System.out.println("Input:  n = 3, graph = [[0,1],[0,2],[1,2],[1,2]], start = 0, target = 2");
    Solution solution = new Solution();
    System.out.println("Output: " + solution.findWhetherExistsPath(3, graph, 0, 2));
  }
}
