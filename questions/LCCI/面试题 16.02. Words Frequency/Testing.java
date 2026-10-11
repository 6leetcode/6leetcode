import java.util.HashMap;
import java.util.Map;

// -------------------------------solution begin-------------------------------
class WordsFrequency {
  private Map<String, Integer> freq = new HashMap<>();

  public WordsFrequency(String[] book) {
    for (String w : book) freq.put(w, freq.getOrDefault(w, 0) + 1);
  }

  public int get(String word) {
    return freq.getOrDefault(word, 0);
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    String[] book = { "i", "have", "an", "apple", "he", "have", "a", "pen" };
    System.out.println("Input:  book = [i, have, an, apple, he, have, a, pen]");
    WordsFrequency obj = new WordsFrequency(book);
    System.out.printf("Output: [%d, %d, %d, %d, %d]\n",
        obj.get("you"), obj.get("have"), obj.get("an"), obj.get("apple"), obj.get("pen"));
  }
}
