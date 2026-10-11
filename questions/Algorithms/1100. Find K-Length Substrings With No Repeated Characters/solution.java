// -------------------------------solution begin-------------------------------
class Solution {
  public int numKLenSubstrNoRepeats(String S, int k) {
    int n = S.length();
    if (n < k) {
      return 0;
    }
    int[] count = new int[26];
    int distinct = 0, ans = 0;
    for (int i = 0; i < n; i++) {
      int idx = S.charAt(i) - 'a';
      if (count[idx] == 0) {
        distinct++;
      }
      count[idx]++;
      if (i >= k) {
        int rm = S.charAt(i - k) - 'a';
        count[rm]--;
        if (count[rm] == 0) {
          distinct--;
        }
      }
      if (i >= k - 1 && distinct == k) {
        ans++;
      }
    }
    return ans;
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    String input1 = "havefunonleetcode";
    int input2 = 5;
    System.out.println("Input:  " + input1 + " " + input2);
    Solution solution = new Solution();
    System.out.println("Output: " + solution.numKLenSubstrNoRepeats(input1, input2));
  }
}
