import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

// -------------------------------solution begin-------------------------------
class Solution {
  private boolean onSegment(int[] p, int[] a, int[] b) {
    double cross = (double) (b[0] - a[0]) * (p[1] - a[1]) - (double) (b[1] - a[1]) * (p[0] - a[0]);
    if (Math.abs(cross) > 1e-9) return false;
    return p[0] >= Math.min(a[0], b[0]) && p[0] <= Math.max(a[0], b[0]) && p[1] >= Math.min(a[1], b[1])
        && p[1] <= Math.max(a[1], b[1]);
  }

  public double[] intersection(int[] start1, int[] end1, int[] start2, int[] end2) {
    double x1 = start1[0], y1 = start1[1], x2 = end1[0], y2 = end1[1];
    double x3 = start2[0], y3 = start2[1], x4 = end2[0], y4 = end2[1];
    double d = (x1 - x2) * (y3 - y4) - (y1 - y2) * (x3 - x4);
    if (Math.abs(d) > 1e-12) {
      double t = ((x1 - x3) * (y3 - y4) - (y1 - y3) * (x3 - x4)) / d;
      double u = ((x1 - x3) * (y1 - y2) - (y1 - y3) * (x1 - x2)) / d;
      if (t >= -1e-9 && t <= 1 + 1e-9 && u >= -1e-9 && u <= 1 + 1e-9) {
        return new double[] { x1 + t * (x2 - x1), y1 + t * (y2 - y1) };
      }
      return new double[0];
    }
    List<int[]> candidates = new ArrayList<>();
    if (onSegment(start1, start2, end2)) candidates.add(start1);
    if (onSegment(end1, start2, end2)) candidates.add(end1);
    if (onSegment(start2, start1, end1)) candidates.add(start2);
    if (onSegment(end2, start1, end1)) candidates.add(end2);
    if (candidates.isEmpty()) return new double[0];
    candidates.sort((a, b) -> a[0] != b[0] ? a[0] - b[0] : a[1] - b[1]);
    return new double[] { candidates.get(0)[0], candidates.get(0)[1] };
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    System.out.println("Input:  line1 = {0, 0}, {1, 0}; line2 = {1, 1}, {0, -1}");
    double[] res = new Solution().intersection(new int[] { 0, 0 }, new int[] { 1, 0 }, new int[] { 1, 1 }, new int[] { 0, -1 });
    System.out.println("Output: " + Arrays.toString(res));
  }
}
