import java.util.ArrayList;
import java.util.List;

// -------------------------------solution begin-------------------------------
class Solution {
  public List<List<Integer>> generate(int numRows) {
    List<List<Integer>> ans = new ArrayList<>();
    for (int i = 0; i < numRows; i++) {
      List<Integer> row = new ArrayList<>();
      for (int j = 0; j <= i; j++) {
        if (j == 0 || j == i) {
          row.add(1);
        } else {
          row.add(ans.get(i - 1).get(j - 1) + ans.get(i - 1).get(j));
        }
      }
      ans.add(row);
    }
    return ans;
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    int input = 5;
    System.out.println("Input:  " + input);
    Solution solution = new Solution();
    System.out.println("Output: " + solution.generate(input));
  }
}
