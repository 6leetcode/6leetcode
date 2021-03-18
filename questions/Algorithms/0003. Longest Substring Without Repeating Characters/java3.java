import java.util.HashMap;

// ------------------------------- solution begin -------------------------------
class Solution {
    public int lengthOfLongestSubstring(String s) {
        if (s == null || s.length() == 0) {
            return 0;
        }
        int result = 0;
        int start = 0;
        int length = 0;
        HashMap<Character, Integer> indexMap = new HashMap<>();
        for (int i = 0; i < s.length(); i++) {
            if (indexMap.containsKey(s.charAt(i)) && indexMap.get(s.charAt(i)) >= start) {
                start = indexMap.get(s.charAt(i)) + 1;
            }
            length = i - start + 1;
            indexMap.put(s.charAt(i), i);
            result = Math.max(length, result);
        }
        return result;
    }
}
// ------------------------------- solution end ---------------------------------

public class java3 {
    public static void main(String[] args) {
        Solution solution = new Solution();
        String input = "qwekeek";
        System.out.println("Input:  " + input);
        System.out.println("Output: " + solution.lengthOfLongestSubstring(input));
    }
}
