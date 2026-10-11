import java.util.ArrayList;
import java.util.List;

// -------------------------------solution begin-------------------------------
class Solution {
  public double[] cutSquares(int[] square1, int[] square2) {
    double c1x = square1[0] + square1[2] / 2.0, c1y = square1[1] + square1[2] / 2.0;
    double c2x = square2[0] + square2[2] / 2.0, c2y = square2[1] + square2[2] / 2.0;
    if (Math.abs(c1x - c2x) < 1e-12) {
      double bottom = Math.min(square1[1], square2[1]);
      double top = Math.max(square1[1] + square1[2], square2[1] + square2[2]);
      return new double[] { c1x, bottom, c1x, top };
    }
    double k = (c2y - c1y) / (c2x - c1x);
    double b = c1y - k * c1x;
    List<double[]> pts = new ArrayList<>();
    for (int[] sq : new int[][] { square1, square2 }) {
      double x0 = sq[0], y0 = sq[1], side = sq[2];
      for (double x : new double[] { x0, x0 + side }) {
        double y = k * x + b;
        if (y >= y0 - 1e-6 && y <= y0 + side + 1e-6) pts.add(new double[] { x, y });
      }
      if (Math.abs(k) > 1e-12) {
        for (double y : new double[] { y0, y0 + side }) {
          double x = (y - b) / k;
          if (x >= x0 - 1e-6 && x <= x0 + side + 1e-6) pts.add(new double[] { x, y });
        }
      }
    }
    pts.sort((a, c) -> a[0] != c[0] ? Double.compare(a[0], c[0]) : Double.compare(a[1], c[1]));
    return new double[] { pts.get(0)[0], pts.get(0)[1], pts.get(pts.size() - 1)[0], pts.get(pts.size() - 1)[1] };
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    System.out.println("Input:  square1 = {-1, -1, 2}, square2 = {0, -1, 2}");
    double[] res = new Solution().cutSquares(new int[] { -1, -1, 2 }, new int[] { 0, -1, 2 });
    System.out.printf("Output: {%s, %s, %s, %s}\n", res[0], res[1], res[2], res[3]);
  }
}
