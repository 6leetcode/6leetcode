import java.util.List;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.Set;

/**
 * @author lss Date: 2019-08-14 Time: 20:09
 **/

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
        List<String> inputStringList = new ArrayList<>();
        inputStringList.add("qwekeek");
        inputStringList.add("a");
        inputStringList.add("");
        inputStringList.add("aaweki");
        for (int i = 0; i < inputStringList.size(); i++) {
            System.out.println("Input["+(i+1)+"]:" + inputStringList.get(i));
            System.out.println("Onput["+(i+1)+"]:" + solution.lengthOfLongestSubstring(inputStringList.get(i)));
        }
    }
}
