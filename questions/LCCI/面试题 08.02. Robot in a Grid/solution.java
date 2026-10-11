import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;

// -------------------------------solution begin-------------------------------
class Solution {
  private boolean dfs(int[][] g, int r, int c, boolean[][] visited, List<List<Integer>> path) {
    if (r >= g.length || c >= g[0].length || g[r][c] == 1 || visited[r][c]) return false;
    visited[r][c] = true;
    if ((r == g.length - 1 && c == g[0].length - 1) || dfs(g, r + 1, c, visited, path)
        || dfs(g, r, c + 1, visited, path)) {
      path.add(Arrays.asList(r, c));
      return true;
    }
    return false;
  }

  public List<List<Integer>> pathWithObstacles(int[][] obstacleGrid) {
    int rows = obstacleGrid.length, cols = obstacleGrid[0].length;
    boolean[][] visited = new boolean[rows][cols];
    List<List<Integer>> path = new ArrayList<>();
    if (!dfs(obstacleGrid, 0, 0, visited, path)) return new ArrayList<>();
    Collections.reverse(path);
    return path;
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    int[][] input = { { 0, 0, 0 }, { 0, 1, 0 }, { 0, 0, 0 } };
    System.out.println("Input:  [[0,0,0],[0,1,0],[0,0,0]]");
    System.out.println("Output: " + new Solution().pathWithObstacles(input));
  }
}
