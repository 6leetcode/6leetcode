// -------------------------------solution begin-------------------------------
class Solution {
  public boolean isPalindrome(String s) {
    int left = 0;
    int right = s.length() - 1;

    while (left < right) {
      while (left < right && !Character.isLetterOrDigit(s.charAt(left))) {
        left++;
      }
      while (left < right && !Character.isLetterOrDigit(s.charAt(right))) {
        right--;
      }
      if (Character.toLowerCase(s.charAt(left)) != Character.toLowerCase(s.charAt(right))) {
        return false;
      }
      left++;
      right--;
    }

    return true;
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    String[] inputs = new String[] {
        "A man, a plan, a canal: Panama",
        "race a car",
        " ",
        "0P"
    };

    Solution solution = new Solution();

    for (String s : inputs) {
      System.out.println("Input:  \"" + s + "\"");
      System.out.println("Output: " + solution.isPalindrome(s));
    }
  }
}
