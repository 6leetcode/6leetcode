import java.util.ArrayList;
import java.util.List;

// -------------------------------solution begin-------------------------------
class Solution {
  public List<String> generatePossibleNextMoves(String s) {
    List<String> res = new ArrayList<>();
    for (int i = 0; i + 1 < s.length(); i++) {
      if (s.charAt(i) == '+' && s.charAt(i + 1) == '+') {
        char[] t = s.toCharArray();
        t[i] = '-';
        t[i + 1] = '-';
        res.add(new String(t));
      }
    }
    return res;
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    String input = "++++";
    System.out.println("Input:  " + input);
    Solution solution = new Solution();
    System.out.println("Output: " + solution.generatePossibleNextMoves(input));
  }
}
