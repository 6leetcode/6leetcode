import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

// -------------------------------solution begin-------------------------------
class Solution {
  public String[] findLongestSubarray(String[] array) {
    Map<Integer, Integer> first = new HashMap<>();
    first.put(0, -1);
    int sum = 0, bestLen = 0, bestStart = 0;
    for (int i = 0; i < array.length; i++) {
      char c = array[i].charAt(0);
      sum += (c >= '0' && c <= '9') ? -1 : 1;
      if (first.containsKey(sum)) {
        int len = i - first.get(sum);
        if (len > bestLen) {
          bestLen = len;
          bestStart = first.get(sum) + 1;
        }
      } else {
        first.put(sum, i);
      }
    }
    List<String> res = new ArrayList<>();
    for (int i = bestStart; i < bestStart + bestLen; i++) res.add(array[i]);
    return res.toArray(new String[0]);
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    String[] array = { "A", "1", "B", "C", "D", "2", "3", "4", "E", "5", "F", "G", "6", "7", "H", "I", "J", "K", "L", "M" };
    System.out.println("Input:  [\"A\",\"1\",\"B\",\"C\",\"D\",\"2\",\"3\",\"4\",\"E\",\"5\",\"F\",\"G\",\"6\",\"7\",\"H\",\"I\",\"J\",\"K\",\"L\",\"M\"]");
    System.out.println("Output: " + java.util.Arrays.toString(new Solution().findLongestSubarray(array)));
  }
}
