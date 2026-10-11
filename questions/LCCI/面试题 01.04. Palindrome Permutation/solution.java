// -------------------------------solution begin-------------------------------
class Solution {
  public boolean canPermutePalindrome(String s) {
    int[] count = new int[128];
    for (int i = 0; i < s.length(); i++) {
      count[s.charAt(i)] ^= 1;
    }
    int odd = 0;
    for (int c : count) {
      odd += c;
    }
    return odd <= 1;
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    String input = "tactcoa";
    System.out.println("Input:  " + input);
    Solution solution = new Solution();
    System.out.println("Output: " + solution.canPermutePalindrome(input));
  }
}
