import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

// -------------------------------solution begin-------------------------------
class Solution {
  public int bestSeqAtIndex(int[] height, int[] weight) {
    int n = height.length;
    int[][] people = new int[n][2];
    for (int i = 0; i < n; i++) {
      people[i][0] = height[i];
      people[i][1] = weight[i];
    }
    Arrays.sort(people, (a, b) -> a[0] != b[0] ? a[0] - b[0] : b[1] - a[1]);
    List<Integer> dp = new ArrayList<>();
    for (int[] p : people) {
      int w = p[1];
      int lo = 0, hi = dp.size();
      while (lo < hi) {
        int mid = lo + (hi - lo) / 2;
        if (dp.get(mid) < w) lo = mid + 1;
        else hi = mid;
      }
      if (lo == dp.size()) dp.add(w);
      else dp.set(lo, w);
    }
    return dp.size();
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    int[] height = { 65, 70, 56, 75, 60, 68 };
    int[] weight = { 100, 150, 90, 190, 95, 110 };
    System.out.println("Input:  height = [65,70,56,75,60,68], weight = [100,150,90,190,95,110]");
    System.out.println("Output: " + new Solution().bestSeqAtIndex(height, weight));
  }
}
