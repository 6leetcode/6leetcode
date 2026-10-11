// -------------------------------solution begin-------------------------------
class Solution {
  public boolean detectCapitalUse(String word) {
    int upper = 0, lower = 0;
    for (int i = 0; i < word.length(); i++) {
      if (Character.isLowerCase(word.charAt(i))) {
        lower++;
      } else {
        upper++;
      }
    }
    return upper == word.length() || lower == word.length()
        || (upper == 1 && Character.isUpperCase(word.charAt(0)));
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    String input = "Google";
    System.out.println("Input:  " + input);
    Solution solution = new Solution();
    System.out.println("Output: " + solution.detectCapitalUse(input));
  }
}
