// -------------------------------solution begin-------------------------------
class Solution {
  public int findString(String[] words, String s) {
    int lo = 0, hi = words.length - 1;
    while (lo <= hi) {
      int mid = lo + (hi - lo) / 2;
      int m = mid;
      while (m < hi && words[m].isEmpty()) m++;
      if (words[m].isEmpty()) {
        hi = mid - 1;
        continue;
      }
      int cmp = words[m].compareTo(s);
      if (cmp == 0) return m;
      if (cmp < 0) {
        lo = m + 1;
      } else {
        hi = mid - 1;
      }
    }
    return -1;
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    String[] words = { "at", "", "", "", "ball", "", "", "car", "", "", "dad", "", "" };
    String s = "ball";
    System.out.println("Input:  [\"at\", \"\", \"\", \"\", \"ball\", \"\", \"\", \"car\", \"\", \"\", \"dad\", \"\", \"\"], s = \"ball\"");
    System.out.println("Output: " + new Solution().findString(words, s));
  }
}
