import java.util.ArrayList;
import java.util.List;

// -------------------------------solution begin-------------------------------
class Solution {
  public int[][] multiSearch(String big, String[] smalls) {
    int[][] res = new int[smalls.length][];
    for (int i = 0; i < smalls.length; i++) {
      List<Integer> pos = new ArrayList<>();
      String s = smalls[i];
      if (s.length() > 0) {
        for (int j = 0; j + s.length() <= big.length(); j++) {
          if (big.startsWith(s, j)) pos.add(j);
        }
      }
      res[i] = pos.stream().mapToInt(Integer::intValue).toArray();
    }
    return res;
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    String big = "mississippi";
    String[] smalls = { "is", "ppi", "hi", "sis", "i", "ssippi" };
    System.out.println("Input:  big = \"mississippi\", smalls = [\"is\",\"ppi\",\"hi\",\"sis\",\"i\",\"ssippi\"]");
    int[][] res = new Solution().multiSearch(big, smalls);
    System.out.println("Output: " + java.util.Arrays.deepToString(res));
  }
}
