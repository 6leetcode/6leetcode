// -------------------------------solution begin-------------------------------
class Solution {
  public int calculateTime(String keyboard, String word) {
    int[] pos = new int[26];
    for (int i = 0; i < 26; i++) {
      pos[keyboard.charAt(i) - 'a'] = i;
    }
    int ans = 0, cur = 0;
    for (int i = 0; i < word.length(); i++) {
      int next = pos[word.charAt(i) - 'a'];
      ans += Math.abs(cur - next);
      cur = next;
    }
    return ans;
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    String input1 = "abcdefghijklmnopqrstuvwxyz";
    String input2 = "cba";
    System.out.println("Input:  " + input1 + " " + input2);
    Solution solution = new Solution();
    System.out.println("Output: " + solution.calculateTime(input1, input2));
  }
}
