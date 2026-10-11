import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

// -------------------------------solution begin-------------------------------
class Solution {
  public int[][] merge(int[][] intervals) {
    if (intervals.length == 0) {
      return new int[0][];
    }
    Arrays.sort(intervals, (a, b) -> a[0] - b[0]);
    List<int[]> merged = new ArrayList<>();
    for (int[] iv : intervals) {
      if (merged.isEmpty() || merged.get(merged.size() - 1)[1] < iv[0]) {
        merged.add(new int[] { iv[0], iv[1] });
      } else {
        merged.get(merged.size() - 1)[1] = Math.max(merged.get(merged.size() - 1)[1], iv[1]);
      }
    }
    return merged.toArray(new int[merged.size()][]);
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    int[][] input = { { 1, 4 }, { 4, 5 } };
    System.out.println("Input:  " + Arrays.deepToString(input));
    Solution solution = new Solution();
    System.out.println("Output: " + Arrays.deepToString(solution.merge(input)));
  }
}
