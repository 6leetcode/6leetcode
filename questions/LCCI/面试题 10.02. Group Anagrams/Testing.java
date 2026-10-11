import java.util.ArrayList;
import java.util.Arrays;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;

// -------------------------------solution begin-------------------------------
class Solution {
  public List<List<String>> groupAnagrams(String[] strs) {
    Map<String, List<String>> groups = new LinkedHashMap<>();
    for (String s : strs) {
      char[] chars = s.toCharArray();
      Arrays.sort(chars);
      String key = new String(chars);
      groups.computeIfAbsent(key, k -> new ArrayList<>()).add(s);
    }
    return new ArrayList<>(groups.values());
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    String[] input = { "eat", "tea", "tan", "ate", "nat", "bat" };
    System.out.println("Input:  [\"eat\", \"tea\", \"tan\", \"ate\", \"nat\", \"bat\"]");
    System.out.println("Output: " + new Solution().groupAnagrams(input));
  }
}
