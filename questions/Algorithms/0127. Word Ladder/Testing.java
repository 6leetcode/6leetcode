import java.util.Arrays;
import java.util.HashSet;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;
import java.util.Set;

// -------------------------------solution begin-------------------------------
class Solution {
  public int ladderLength(String beginWord, String endWord, List<String> wordList) {
    Set<String> dict = new HashSet<>(wordList);
    if (!dict.contains(endWord)) {
      return 0;
    }

    Queue<String> queue = new LinkedList<>();
    queue.offer(beginWord);
    int level = 1;

    while (!queue.isEmpty()) {
      int size = queue.size();
      for (int i = 0; i < size; i++) {
        String word = queue.poll();
        if (word.equals(endWord)) {
          return level;
        }
        char[] arr = word.toCharArray();
        for (int j = 0; j < arr.length; j++) {
          char origin = arr[j];
          for (char c = 'a'; c <= 'z'; c++) {
            if (c == origin) {
              continue;
            }
            arr[j] = c;
            String cand = new String(arr);
            if (dict.remove(cand)) {
              queue.offer(cand);
            }
          }
          arr[j] = origin;
        }
      }
      level++;
    }

    return 0;
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    Solution solution = new Solution();

    List<String> list1 = Arrays.asList("hot", "dot", "dog", "lot", "log", "cog");
    List<String> list2 = Arrays.asList("hot", "dot", "dog", "lot", "log");
    List<String> list3 = Arrays.asList("hot", "dog", "dot");

    System.out.println("Input:  beginWord = \"hit\", endWord = \"cog\", wordList = " + showWords(list1));
    System.out.println("Output: " + solution.ladderLength("hit", "cog", list1));

    System.out.println("Input:  beginWord = \"hit\", endWord = \"cog\", wordList = " + showWords(list2));
    System.out.println("Output: " + solution.ladderLength("hit", "cog", list2));

    System.out.println("Input:  beginWord = \"hot\", endWord = \"dog\", wordList = " + showWords(list3));
    System.out.println("Output: " + solution.ladderLength("hot", "dog", list3));
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
}
