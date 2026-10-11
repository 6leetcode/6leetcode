import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Queue;

// -------------------------------solution begin-------------------------------
class Solution {
  private boolean diffOne(String a, String b) {
    int diff = 0;
    for (int i = 0; i < a.length(); i++) {
      if (a.charAt(i) != b.charAt(i)) diff++;
    }
    return diff == 1;
  }

  public List<String> findLadders(String beginWord, String endWord, List<String> wordList) {
    List<String> words = new ArrayList<>();
    words.add(beginWord);
    words.addAll(wordList);
    int n = words.size();
    int endIdx = -1;
    for (int i = 0; i < n; i++) if (words.get(i).equals(endWord)) endIdx = i;
    if (endIdx == -1) return new ArrayList<>();

    int[] dist = new int[n];
    int[] prev = new int[n];
    for (int i = 0; i < n; i++) {
      dist[i] = -1;
      prev[i] = -1;
    }
    Queue<Integer> queue = new ArrayDeque<>();
    queue.add(0);
    dist[0] = 0;
    int found = -1;
    while (!queue.isEmpty()) {
      int u = queue.poll();
      if (u == endIdx) {
        found = u;
        break;
      }
      for (int v = 0; v < n; v++) {
        if (dist[v] == -1 && diffOne(words.get(u), words.get(v))) {
          dist[v] = dist[u] + 1;
          prev[v] = u;
          queue.add(v);
        }
      }
    }
    if (found == -1) return new ArrayList<>();
    List<String> res = new ArrayList<>();
    for (int cur = found; cur != -1; cur = prev[cur]) res.add(words.get(cur));
    Collections.reverse(res);
    return res;
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    List<String> wordList = new ArrayList<>(List.of("hot", "dot", "dog", "lot", "log", "cog"));
    System.out.println("Input:  beginWord = \"hit\", endWord = \"cog\", wordList = [\"hot\",\"dot\",\"dog\",\"lot\",\"log\",\"cog\"]");
    System.out.println("Output: " + new Solution().findLadders("hit", "cog", wordList));
  }
}
