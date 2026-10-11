// -------------------------------solution begin-------------------------------
class Solution {
  public String minWindow(String s, String t) {
    int[] need = new int[128];
    int[] have = new int[128];
    int required = 0;
    for (int i = 0; i < t.length(); i++) {
      if (need[t.charAt(i)] == 0) required++;
      need[t.charAt(i)]++;
    }
    int matched = 0, left = 0, start = 0, minLen = Integer.MAX_VALUE;
    for (int right = 0; right < s.length(); right++) {
      char c = s.charAt(right);
      have[c]++;
      if (need[c] > 0 && have[c] == need[c]) matched++;
      while (matched == required) {
        if (right - left + 1 < minLen) {
          minLen = right - left + 1;
          start = left;
        }
        char lc = s.charAt(left);
        if (need[lc] > 0 && have[lc] == need[lc]) matched--;
        have[lc]--;
        left++;
      }
    }
    return minLen == Integer.MAX_VALUE ? "" : s.substring(start, start + minLen);
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    String input1 = "ADOBECODEBANC", input2 = "ABC";
    System.out.println("Input:  " + input1 + " " + input2);
    Solution solution = new Solution();
    System.out.println("Output: " + solution.minWindow(input1, input2));
  }
}
