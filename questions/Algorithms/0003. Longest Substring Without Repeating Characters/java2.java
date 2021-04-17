import java.util.HashMap;

// -------------------------------solution begin-------------------------------
class Solution {
  public int lengthOfLongestSubstring(String s) {
    if (s == null || s.length() == 0) {
      return 0;
    }
    int result = 0;
    int length = 0;
    HashMap<Character, Integer> resultMap = new HashMap<>();
    for (int i = 0; i < s.length(); i++) {
      if (resultMap.containsKey(s.charAt(i))) {
        i = resultMap.get(s.charAt(i));
        resultMap.clear();
        length = 0;
        continue;
      }
      length++;
      resultMap.put(s.charAt(i), i);
      result = Math.max(result, length);
    }
    return result;
  }
}
// -------------------------------solution end---------------------------------

public class java2 {
  public static void main(String[] args) {
    String input = "qwekeek";
    System.out.println("Input:  " + input);
    Solution solution = new Solution();
    System.out.println("Output: " + solution.lengthOfLongestSubstring(input));
  }
}
