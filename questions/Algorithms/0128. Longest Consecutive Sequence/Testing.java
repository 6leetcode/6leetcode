import java.util.HashSet;
import java.util.Set;

// -------------------------------solution begin-------------------------------
class Solution {
  public int longestConsecutive(int[] nums) {
    Set<Integer> set = new HashSet<Integer>();
    for (int num : nums) {
      set.add(num);
    }

    int best = 0;
    for (int num : set) {
      if (!set.contains(num - 1)) {
        int cur = num;
        int len = 1;
        while (set.contains(cur + 1)) {
          cur++;
          len++;
        }
        best = Math.max(best, len);
      }
    }
    return best;
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    int[][] tests = {
        { 100, 4, 200, 1, 3, 2 },
        { 0, 3, 7, 2, 5, 8, 4, 6, 0, 1 },
        { 1, 0, 1, 2 },
    };
    Solution solution = new Solution();
    for (int[] nums : tests) {
      System.out.printf("Input:  %s\n", ArrayShowInteger(nums));
      System.out.printf("Output: %d\n", solution.longestConsecutive(nums));
    }
  }

  public static String ArrayShowInteger(int[] arr) {
    String res = "[";
    for (int i = 0; i < arr.length; i++) {
      if (i == 0) {
        res += Integer.toString(arr[i]);
      } else {
        res += ", " + Integer.toString(arr[i]);
      }
    }
    res += "]";
    return res;
  }
}
