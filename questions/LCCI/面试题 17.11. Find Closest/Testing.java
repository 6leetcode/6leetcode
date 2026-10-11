// -------------------------------solution begin-------------------------------
class Solution {
  public int findClosest(String[] words, String word1, String word2) {
    int best = words.length, p1 = -1, p2 = -1;
    for (int i = 0; i < words.length; i++) {
      if (words[i].equals(word1)) {
        p1 = i;
        if (p2 != -1) best = Math.min(best, i - p2);
      } else if (words[i].equals(word2)) {
        p2 = i;
        if (p1 != -1) best = Math.min(best, i - p1);
      }
    }
    return best;
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    String[] words = { "I", "am", "a", "student", "from", "a", "university", "in", "a", "city" };
    System.out.println("Input:  words = [...], word1 = \"a\", word2 = \"student\"");
    System.out.println("Output: " + new Solution().findClosest(words, "a", "student"));
  }
}
