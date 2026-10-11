// -------------------------------solution begin-------------------------------
class Solution {
  public boolean oneEditAway(String first, String second) {
    int m = first.length(), n = second.length();
    if (Math.abs(m - n) > 1) return false;
    if (m > n) return oneEditAway(second, first);
    for (int i = 0; i < m; i++) {
      if (first.charAt(i) != second.charAt(i)) {
        if (m == n) return first.substring(i + 1).equals(second.substring(i + 1));
        return first.substring(i).equals(second.substring(i + 1));
      }
    }
    return true;
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    String first = "pale", second = "ple";
    System.out.println("Input:  " + first + " " + second);
    Solution solution = new Solution();
    System.out.println("Output: " + solution.oneEditAway(first, second));
  }
}
