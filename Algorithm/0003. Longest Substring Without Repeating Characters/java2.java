import java.util.List;
import java.util.ArrayList;
import java.util.HashMap;

/**
 * @author lss Date: 2019-08-14 Time: 20:09
 **/

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

public class java2 {
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
