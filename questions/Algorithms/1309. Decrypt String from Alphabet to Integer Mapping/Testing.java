// -------------------------------solution begin-------------------------------
class Solution {
  public String freqAlphabets(String s) {
    StringBuilder sb = new StringBuilder();
    int n = s.length();
    for (int i = 0; i < n; i++) {
      if (i + 2 < n && s.charAt(i + 2) == '#') {
        int num = (s.charAt(i) - '0') * 10 + (s.charAt(i + 1) - '0');
        sb.append((char) ('a' + num - 1));
        i += 2;
      } else {
        sb.append((char) ('a' + (s.charAt(i) - '0') - 1));
      }
    }
    return sb.toString();
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    String input = "12345678910#11#12#13#14#15#16#17#18#19#20#21#22#23#24#25#26#";
    System.out.println("Input:  " + input);
    Solution solution = new Solution();
    System.out.println("Output: " + solution.freqAlphabets(input));
  }
}
