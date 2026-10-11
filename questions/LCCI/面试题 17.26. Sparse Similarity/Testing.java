import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.TreeMap;

// -------------------------------solution begin-------------------------------
class Solution {
  public List<String> computeSimilarities(int[][] docs) {
    Map<Integer, List<Integer>> wordDocs = new HashMap<>();
    for (int i = 0; i < docs.length; i++) {
      for (int w : docs[i]) wordDocs.computeIfAbsent(w, k -> new ArrayList<>()).add(i);
    }
    Map<String, Integer> inter = new TreeMap<>();
    for (List<Integer> ids : wordDocs.values()) {
      for (int a = 0; a < ids.size(); a++) {
        for (int b = a + 1; b < ids.size(); b++) {
          int i = ids.get(a), j = ids.get(b);
          String key = String.format("%05d,%05d", i, j);
          inter.put(key, inter.getOrDefault(key, 0) + 1);
        }
      }
    }
    List<String> res = new ArrayList<>();
    for (Map.Entry<String, Integer> e : inter.entrySet()) {
      String[] parts = e.getKey().split(",");
      int i = Integer.parseInt(parts[0]), j = Integer.parseInt(parts[1]);
      int c = e.getValue();
      int uni = docs[i].length + docs[j].length - c;
      res.add(String.format("%d,%d: %.4f", i, j, (double) c / uni));
    }
    return res;
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    int[][] docs = { { 14, 15, 100, 9, 3 }, { 32, 1, 9, 3, 5 }, { 15, 29, 2, 6, 8, 7 }, { 7, 10 } };
    System.out.println("Input:  [[14,15,100,9,3],[32,1,9,3,5],[15,29,2,6,8,7],[7,10]]");
    System.out.println("Output: " + new Solution().computeSimilarities(docs));
  }
}
