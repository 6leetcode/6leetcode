import java.util.LinkedList;

// -------------------------------solution begin-------------------------------
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
// -------------------------------solution end---------------------------------

public class java4 {
    public static void main(String[] args) {
        String input = "qwekeek";
        System.out.println("Input:  " + input);
        Solution solution = new Solution();
        System.out.println("Output: " + solution.lengthOfLongestSubstring(input));
    }
}
