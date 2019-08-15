import java.util.List;
import java.util.ArrayList;
import java.util.LinkedList;

/**
 * @author lss Date: 2019-08-14 Time: 20:09
 **/

class Solution {
    public int lengthOfLongestSubstring(String s) {
        int result = 0;
        LinkedList<Character> linkedList = new LinkedList<>();
        for (int i = 0; i < s.length(); i++) {
            while (linkedList.contains(s.charAt(i))) {
                linkedList.removeFirst();
            }
            linkedList.add(s.charAt(i));
            result = Math.max(result, linkedList.size());
        }
        return result;
    }
}

public class java4 {
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
