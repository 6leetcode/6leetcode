import java.util.Arrays;

// -------------------------------solution begin-------------------------------
class Solution {
  private int idx(char c) {
    if (c == 'R') return 0;
    if (c == 'Y') return 1;
    if (c == 'G') return 2;
    return 3;
  }

  public int[] masterMind(String solution, String guess) {
    int hits = 0;
    int[] sCount = new int[4], gCount = new int[4];
    for (int i = 0; i < solution.length(); i++) {
      if (solution.charAt(i) == guess.charAt(i)) {
        hits++;
      } else {
        sCount[idx(solution.charAt(i))]++;
        gCount[idx(guess.charAt(i))]++;
      }
    }
    int pseudo = 0;
    for (int i = 0; i < 4; i++) pseudo += Math.min(sCount[i], gCount[i]);
    return new int[] { hits, pseudo };
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    System.out.println("Input:  solution = RGBY, guess = GGRR");
    System.out.println("Output: " + Arrays.toString(new Solution().masterMind("RGBY", "GGRR")));
  }
}
