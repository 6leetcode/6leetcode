import java.util.HashMap;
import java.util.Map;

// -------------------------------solution begin-------------------------------
class Solution {
  public int maxPoints(int[][] points) {
    int n = points.length;
    if (n < 3) {
      return n;
    }

    int best = 1;
    for (int i = 0; i < n; i++) {
      Map<Long, Integer> cnt = new HashMap<Long, Integer>();
      for (int j = i + 1; j < n; j++) {
        int dy = points[j][1] - points[i][1];
        int dx = points[j][0] - points[i][0];
        int g = gcd(dy, dx);
        if (g == 0) {
          g = 1;
        }
        dy /= g;
        dx /= g;
        if (dx < 0 || (dx == 0 && dy < 0)) {
          dy = -dy;
          dx = -dx;
        }
        long key = (((long) dy) << 32) ^ (dx & 0xffffffffL);
        int c = cnt.getOrDefault(key, 0) + 1;
        cnt.put(key, c);
        best = Math.max(best, c + 1);
      }
    }
    return best;
  }

  private int gcd(int a, int b) {
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    while (b != 0) {
      int t = a % b;
      a = b;
      b = t;
    }
    return a;
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    run(new int[][] { { 1, 1 }, { 2, 2 }, { 3, 3 } });
    run(new int[][] { { 1, 1 }, { 3, 2 }, { 5, 3 }, { 4, 1 }, { 2, 3 }, { 1, 4 } });
  }

  public static void run(int[][] points) {
    StringBuilder sb = new StringBuilder("[");
    for (int i = 0; i < points.length; i++) {
      sb.append(i == 0 ? "" : ", ");
      sb.append("[").append(points[i][0]).append(", ").append(points[i][1]).append("]");
    }
    sb.append("]");
    System.out.println("Input:  " + sb.toString());
    System.out.println("Output: " + new Solution().maxPoints(points));
  }
}
