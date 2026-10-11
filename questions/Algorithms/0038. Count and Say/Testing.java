// -------------------------------solution begin-------------------------------
class Solution {
  public String countAndSay(int n) {
    String cur = "1";
    for (int k = 1; k < n; k++) {
      StringBuilder sb = new StringBuilder();
      for (int i = 0; i < cur.length();) {
        int j = i;
        while (j < cur.length() && cur.charAt(j) == cur.charAt(i)) {
          j++;
        }
        sb.append(j - i).append(cur.charAt(i));
        i = j;
      }
      cur = sb.toString();
    }
    return cur;
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    int input = 4;
    System.out.println("Input:  " + input);
    Solution solution = new Solution();
    System.out.println("Output: " + solution.countAndSay(input));
  }
}
