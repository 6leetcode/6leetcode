import java.util.ArrayList;
import java.util.List;

// -------------------------------solution begin-------------------------------
class Solution {
  public List<Integer> getRow(int rowIndex) {
    List<Integer> row = new ArrayList<>();
    row.add(1);
    for (int i = 1; i <= rowIndex; i++) {
      row.add(1);
      for (int j = i - 1; j >= 1; j--) {
        row.set(j, row.get(j) + row.get(j - 1));
      }
    }
    return row;
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    int[] cases = { 3, 0, 1, 4 };
    Solution solution = new Solution();
    for (int input : cases) {
      System.out.println("Input:  " + input);
      System.out.println("Output: " + solution.getRow(input));
    }
  }
}
