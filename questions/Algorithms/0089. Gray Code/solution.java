import java.util.ArrayList;
import java.util.List;

// -------------------------------solution begin-------------------------------
class Solution {
  public List<Integer> grayCode(int n) {
    List<Integer> res = new ArrayList<>();
    for (int i = 0; i < (1 << n); i++) {
      res.add((i >> 1) ^ i);
    }
    return res;
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    int input = 2;
    System.out.println("Input:  " + input);
    Solution solution = new Solution();
    System.out.println("Output: " + solution.grayCode(input));
  }
}
