import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

// -------------------------------solution begin-------------------------------
class Solution {
  public int[][] insert(int[][] intervals, int[] newInterval) {
    List<int[]> res = new ArrayList<>();
    int i = 0;
    while (i < intervals.length && intervals[i][1] < newInterval[0]) {
      res.add(intervals[i++]);
    }
    int lo = newInterval[0], hi = newInterval[1];
    while (i < intervals.length && intervals[i][0] <= hi) {
      lo = Math.min(lo, intervals[i][0]);
      hi = Math.max(hi, intervals[i][1]);
      i++;
    }
    res.add(new int[] { lo, hi });
    while (i < intervals.length) {
      res.add(intervals[i++]);
    }
    return res.toArray(new int[res.size()][]);
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    int[][] input1 = { { 1, 3 }, { 6, 9 } };
    int[] input2 = { 2, 5 };
    System.out.printf("Input:  %s %s\n", Arrays.deepToString(input1), Arrays.toString(input2));
    Solution solution = new Solution();
    System.out.println("Output: " + Arrays.deepToString(solution.insert(input1, input2)));
  }
}
