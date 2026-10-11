import java.util.ArrayList;
import java.util.List;

// -------------------------------solution begin-------------------------------
class Solution {
  public int[] divingBoard(int shorter, int longer, int k) {
    List<Integer> res = new ArrayList<>();
    if (k == 0) return new int[0];
    if (shorter == longer) {
      return new int[] { shorter * k };
    }
    for (int i = 0; i <= k; i++) {
      res.add(shorter * (k - i) + longer * i);
    }
    return res.stream().mapToInt(Integer::intValue).toArray();
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    int shorter = 1, longer = 2, k = 3;
    System.out.printf("Input:  shorter = %d, longer = %d, k = %d\n", shorter, longer, k);
    System.out.println("Output: " + java.util.Arrays.toString(new Solution().divingBoard(shorter, longer, k)));
  }
}
