// -------------------------------solution begin-------------------------------
class Solution {
  public int numberOfSubstrings(String s) {
    int a = 0, b = 0, c = 0, l = 0, ans = 0;
    for (int r = 0; r < s.length(); r++) {
      if (s.charAt(r) == 'a') a++;
      if (s.charAt(r) == 'b') b++;
      if (s.charAt(r) == 'c') c++;
      while (a > 1 || b > 1 || c > 1) {
        if (s.charAt(l) == 'a' && a > 1) {
          a--;
          l++;
        } else if (s.charAt(l) == 'b' && b > 1) {
          b--;
          l++;
        } else if (s.charAt(l) == 'c' && c > 1) {
          c--;
          l++;
        } else {
          break;
        }
      }
      if (a > 0 && b > 0 && c > 0) {
        ans += l + 1;
      }
    }
    return ans;
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    String input = "abcabc";
    System.out.println("Input:  " + input);
    Solution solution = new Solution();
    System.out.println("Output: " + solution.numberOfSubstrings(input));
  }
}
