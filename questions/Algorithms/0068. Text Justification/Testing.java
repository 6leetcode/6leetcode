import java.util.ArrayList;
import java.util.List;

// -------------------------------solution begin-------------------------------
class Solution {
  public List<String> fullJustify(String[] words, int maxWidth) {
    List<String> res = new ArrayList<>();
    int i = 0, n = words.length;
    while (i < n) {
      int j = i, len = 0;
      while (j < n && len + words[j].length() + (j - i) <= maxWidth) {
        len += words[j].length();
        j++;
      }
      int count = j - i;
      StringBuilder line = new StringBuilder();
      if (j == n || count == 1) {
        for (int k = i; k < j; k++) {
          if (k > i) line.append(' ');
          line.append(words[k]);
        }
        while (line.length() < maxWidth) line.append(' ');
      } else {
        int totalChars = 0;
        for (int k = i; k < j; k++) totalChars += words[k].length();
        int gaps = count - 1;
        int spaces = maxWidth - totalChars;
        int base = spaces / gaps, extra = spaces % gaps;
        for (int k = i; k < j; k++) {
          line.append(words[k]);
          if (k != j - 1) {
            int sp = base + (k - i < extra ? 1 : 0);
            for (int t = 0; t < sp; t++) line.append(' ');
          }
        }
      }
      res.add(line.toString());
      i = j;
    }
    return res;
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    String[] input = { "This", "is", "an", "example", "of", "text", "justification." };
    int maxWidth = 16;
    System.out.println("Input:  " + java.util.Arrays.toString(input) + " " + maxWidth);
    Solution solution = new Solution();
    System.out.println("Output: " + solution.fullJustify(input, maxWidth));
  }
}
