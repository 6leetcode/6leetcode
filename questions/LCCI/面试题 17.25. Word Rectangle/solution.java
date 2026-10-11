import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

// -------------------------------solution begin-------------------------------
class Solution {
  private Map<Integer, List<String>> byLen = new HashMap<>();
  private List<String> rows = new ArrayList<>();
  private List<String> best = new ArrayList<>();
  private int bestArea = 0;
  private int targetW = 0, targetH = 0;

  private boolean prefixOk() {
    for (int c = 0; c < targetW; c++) {
      StringBuilder sb = new StringBuilder();
      for (String row : rows) sb.append(row.charAt(c));
      String prefix = sb.toString();
      boolean ok = false;
      for (String w : byLen.get(targetH)) {
        if (w.startsWith(prefix)) {
          ok = true;
          break;
        }
      }
      if (!ok) return false;
    }
    return true;
  }

  private void backtrack() {
    if (rows.size() == targetH) {
      for (int c = 0; c < targetW; c++) {
        StringBuilder sb = new StringBuilder();
        for (int r = 0; r < targetH; r++) sb.append(rows.get(r).charAt(c));
        if (!byLen.get(targetH).contains(sb.toString())) return;
      }
      if (targetW * targetH > bestArea) {
        bestArea = targetW * targetH;
        best = new ArrayList<>(rows);
      }
      return;
    }
    for (String w : byLen.get(targetW)) {
      rows.add(w);
      if (prefixOk()) backtrack();
      rows.remove(rows.size() - 1);
    }
  }

  public String[] maxRectangle(String[] words) {
    for (String w : words) byLen.computeIfAbsent(w.length(), k -> new ArrayList<>()).add(w);
    for (int w : byLen.keySet()) {
      for (int h : byLen.keySet()) {
        if (w * h <= bestArea) continue;
        targetW = w;
        targetH = h;
        rows.clear();
        backtrack();
      }
    }
    return best.toArray(new String[0]);
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    String[] words = { "this", "real", "hard", "trh", "hea", "iar", "sld" };
    System.out.println("Input:  [\"this\", \"real\", \"hard\", \"trh\", \"hea\", \"iar\", \"sld\"]");
    System.out.println("Output: " + java.util.Arrays.toString(new Solution().maxRectangle(words)));
  }
}
