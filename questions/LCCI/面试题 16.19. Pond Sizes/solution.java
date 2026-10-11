import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

// -------------------------------solution begin-------------------------------
class Solution {
  private int dfs(int[][] land, int r, int c) {
    if (r < 0 || r >= land.length || c < 0 || c >= land[0].length || land[r][c] != 0) return 0;
    land[r][c] = -1;
    int size = 1;
    for (int dr = -1; dr <= 1; dr++) {
      for (int dc = -1; dc <= 1; dc++) {
        if (dr != 0 || dc != 0) size += dfs(land, r + dr, c + dc);
      }
    }
    return size;
  }

  public int[] pondSizes(int[][] land) {
    List<Integer> res = new ArrayList<>();
    for (int i = 0; i < land.length; i++) {
      for (int j = 0; j < land[0].length; j++) {
        if (land[i][j] == 0) res.add(dfs(land, i, j));
      }
    }
    Collections.sort(res);
    return res.stream().mapToInt(Integer::intValue).toArray();
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    int[][] land = { { 0, 2, 1, 0 }, { 0, 1, 0, 1 }, { 1, 1, 0, 1 }, { 0, 1, 0, 1 } };
    System.out.println("Input:  [[0,2,1,0],[0,1,0,1],[1,1,0,1],[0,1,0,1]]");
    System.out.println("Output: " + java.util.Arrays.toString(new Solution().pondSizes(land)));
  }
}
