import java.util.ArrayList;
import java.util.List;

// -------------------------------solution begin-------------------------------
class Solution {
  public List<String> letterCombinations(String digits) {
    List<String> res = new ArrayList<>();
    if (digits.isEmpty()) {
      return res;
    }
    String[] map = { "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };
    res.add("");
    for (int i = 0; i < digits.length(); i++) {
      List<String> next = new ArrayList<>();
      String letters = map[digits.charAt(i) - '2'];
      for (String prefix : res) {
        for (int j = 0; j < letters.length(); j++) {
          next.add(prefix + letters.charAt(j));
        }
      }
      res = next;
    }
    return res;
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    String input = "23";
    System.out.println("Input:  " + input);
    Solution solution = new Solution();
    System.out.println("Output: " + solution.letterCombinations(input));
  }
}
