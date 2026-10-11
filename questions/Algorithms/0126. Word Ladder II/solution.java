import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;
import java.util.Map;
import java.util.Set;

// -------------------------------solution begin-------------------------------
class Solution {
  private Map<String, List<String>> parents = new HashMap<>();

  private void dfs(String word, String beginWord, List<String> path, List<List<String>> res) {
    if (word.equals(beginWord)) {
      List<String> r = new ArrayList<>(path);
      Collections.reverse(r);
      res.add(r);
      return;
    }
    List<String> ps = parents.getOrDefault(word, Collections.emptyList());
    for (String p : ps) {
      path.add(p);
      dfs(p, beginWord, path, res);
      path.remove(path.size() - 1);
    }
  }

  public List<List<String>> findLadders(String beginWord, String endWord, List<String> wordList) {
    List<List<String>> res = new ArrayList<>();
    Set<String> dict = new HashSet<>(wordList);
    if (!dict.contains(endWord)) {
      return res;
    }

    parents.clear();
    Set<String> visited = new HashSet<>();
    visited.add(beginWord);
    List<String> level = new ArrayList<>();
    level.add(beginWord);
    boolean found = false;

    while (!level.isEmpty() && !found) {
      List<String> next = new ArrayList<>();
      Set<String> nextSet = new HashSet<>();
      for (String word : level) {
        char[] arr = word.toCharArray();
        for (int j = 0; j < arr.length; j++) {
          char origin = arr[j];
          for (char c = 'a'; c <= 'z'; c++) {
            if (c == origin) {
              continue;
            }
            arr[j] = c;
            String cand = new String(arr);
            if (dict.contains(cand) && !visited.contains(cand)) {
              if (nextSet.add(cand)) {
                next.add(cand);
              }
              parents.computeIfAbsent(cand, k -> new ArrayList<>()).add(word);
              if (cand.equals(endWord)) {
                found = true;
              }
            }
          }
          arr[j] = origin;
        }
      }
      visited.addAll(next);
      level = next;
    }

    if (!found) {
      return res;
    }

    List<String> path = new ArrayList<>();
    path.add(endWord);
    dfs(endWord, beginWord, path, res);
    return res;
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    Solution solution = new Solution();

    List<String> list1 = Arrays.asList("hot", "dot", "dog", "lot", "log", "cog");
    List<String> list2 = Arrays.asList("hot", "dot", "dog", "lot", "log");

    System.out.println("Input:  beginWord = \"hit\", endWord = \"cog\", wordList = " + showWords(list1));
    System.out.println("Output: " + showPaths(solution.findLadders("hit", "cog", list1)));

    System.out.println("Input:  beginWord = \"hit\", endWord = \"cog\", wordList = " + showWords(list2));
    System.out.println("Output: " + showPaths(solution.findLadders("hit", "cog", list2)));
  }

  public static String showWords(List<String> list) {
    StringBuilder sb = new StringBuilder("[");
    for (int i = 0; i < list.size(); i++) {
      if (i > 0) {
        sb.append(", ");
      }
      sb.append("\"").append(list.get(i)).append("\"");
    }
    return sb.append("]").toString();
  }

  public static String showPaths(List<List<String>> paths) {
    StringBuilder sb = new StringBuilder("[");
    for (int i = 0; i < paths.size(); i++) {
      if (i > 0) {
        sb.append(", ");
      }
      sb.append("[");
      List<String> path = paths.get(i);
      for (int j = 0; j < path.size(); j++) {
        if (j > 0) {
          sb.append(", ");
        }
        sb.append("\"").append(path.get(j)).append("\"");
      }
      sb.append("]");
    }
    return sb.append("]").toString();
  }
}
