import java.util.Arrays;
import java.util.HashSet;
import java.util.Set;

// -------------------------------solution begin-------------------------------
class Solution {
  public int[] shortestSeq(int[] big, int[] small) {
    Set<Integer> need = new HashSet<>();
    for (int x : small) need.add(x);
    int bestLen = big.length + 1, bestL = -1, bestR = -1;
    for (int l = 0; l < big.length; l++) {
      if (!need.contains(big[l])) continue;
      Set<Integer> seen = new HashSet<>();
      int r = l;
      for (; r < big.length; r++) {
        if (need.contains(big[r]) && !seen.contains(big[r])) {
          seen.add(big[r]);
          if (seen.size() == need.size()) break;
        }
      }
      if (seen.size() == need.size() && r - l + 1 < bestLen) {
        bestLen = r - l + 1;
        bestL = l;
        bestR = r;
      }
    }
    if (bestL == -1) return new int[0];
    return new int[] { bestL, bestR };
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    int[] big = { 7, 5, 9, 0, 2, 1, 3, 5, 7, 9, 1, 1, 5, 8, 8, 9, 7 };
    int[] small = { 1, 5, 9 };
    System.out.printf("Input:  big = %s, small = %s\n", Arrays.toString(big), Arrays.toString(small));
    System.out.println("Output: " + Arrays.toString(new Solution().shortestSeq(big, small)));
  }
}
