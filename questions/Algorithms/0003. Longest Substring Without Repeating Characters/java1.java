import java.util.HashSet;
import java.util.Set;

class Solution {
    public int lengthOfLongestSubstring(String s) {
        int result = 0;
        for (int i = 0; i < s.length(); i++) {
            for (int j = i + 1; j <= s.length(); j++) {
                String substring = s.substring(i, j);
                if (hasRepeat(substring)) {
                    break;
                } else if (substring.length() > result) {
                    result = substring.length();
                }
            }
        }
        return result;
    }

    private boolean hasRepeat(String substring) {
        Set<Character> charList = new HashSet<>();
        for (int i = 0; i < substring.length(); i++) {
            if (charList.contains(substring.charAt(i))) {
                return true;
            }
            charList.add(substring.charAt(i));
        }
        return false;
    }
}

public class java1 {
    public static void main(String[] args) {
        Solution solution = new Solution();
        String input = "qwekeek";
        System.out.println("Input:  " + input);
        System.out.println("Output: " + solution.lengthOfLongestSubstring(input));
    }
}