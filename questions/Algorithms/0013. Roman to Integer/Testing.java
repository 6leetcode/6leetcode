import java.util.HashMap;
import java.util.Map;

// -------------------------------solution begin-------------------------------
class Solution {
  public int romanToInt(String s) {
    Map<Character, Integer> value = new HashMap<>();
    value.put('I', 1);
    value.put('V', 5);
    value.put('X', 10);
    value.put('L', 50);
    value.put('C', 100);
    value.put('D', 500);
    value.put('M', 1000);

    int result = 0;
    for (int i = 0; i < s.length(); i++) {
      int curr = value.get(s.charAt(i));
      if (i + 1 < s.length() && curr < value.get(s.charAt(i + 1))) {
        result -= curr;
      } else {
        result += curr;
      }
    }
    return result;
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    String input = "MCMXCIV";
    System.out.println("Input:  " + input);
    Solution solution = new Solution();
    System.out.println("Output: " + solution.romanToInt(input));
  }
}
