import java.util.Arrays;

// -------------------------------solution begin-------------------------------
class Solution {
  public int[] bestLine(int[][] points) {
    int bestCount = 2, bestI = 0, bestJ = 1;
    for (int i = 0; i < points.length; i++) {
      for (int j = i + 1; j < points.length; j++) {
        long dx = points[j][0] - points[i][0];
        long dy = points[j][1] - points[i][1];
        int count = 2;
        for (int k = 0; k < points.length; k++) {
          if (k == i || k == j) continue;
          long ddx = points[k][0] - points[i][0];
          long ddy = points[k][1] - points[i][1];
          if (dx * ddy == dy * ddx) count++;
        }
        if (count > bestCount) {
          bestCount = count;
          bestI = i;
          bestJ = j;
        }
      }
    }
    return new int[] { bestI, bestJ };
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    int[][] points = { { 0, 0 }, { 1, 1 }, { 1, 0 }, { 2, 0 } };
    System.out.println("Input:  [[0,0],[1,1],[1,0],[2,0]]");
    System.out.println("Output: " + Arrays.toString(new Solution().bestLine(points)));
  }
}
