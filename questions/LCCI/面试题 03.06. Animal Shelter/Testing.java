import java.util.ArrayDeque;
import java.util.Deque;

// -------------------------------solution begin-------------------------------
class AnimalShelf {
  private static class Entry {
    int num, order;
    Entry(int num, int order) {
      this.num = num;
      this.order = order;
    }
  }

  private Deque<Entry> cats = new ArrayDeque<>();
  private Deque<Entry> dogs = new ArrayDeque<>();
  private int order = 0;

  public AnimalShelf() {}

  public void enqueue(int[] animal) {
    if (animal[1] == 0) cats.addLast(new Entry(animal[0], order++));
    else dogs.addLast(new Entry(animal[0], order++));
  }

  public int[] dequeueAny() {
    if (cats.isEmpty() && dogs.isEmpty()) return new int[] { -1, -1 };
    if (dogs.isEmpty() || (!cats.isEmpty() && cats.peekFirst().order < dogs.peekFirst().order)) {
      return new int[] { cats.pollFirst().num, 0 };
    }
    return new int[] { dogs.pollFirst().num, 1 };
  }

  public int[] dequeueDog() {
    if (dogs.isEmpty()) return new int[] { -1, -1 };
    return new int[] { dogs.pollFirst().num, 1 };
  }

  public int[] dequeueCat() {
    if (cats.isEmpty()) return new int[] { -1, -1 };
    return new int[] { cats.pollFirst().num, 0 };
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    System.out.println("Input:  [\"AnimalShelf\", \"enqueue\", \"enqueue\", \"enqueue\", \"dequeueDog\", \"dequeueCat\", \"dequeueAny\"]");
    AnimalShelf obj = new AnimalShelf();
    obj.enqueue(new int[] { 0, 0 });
    obj.enqueue(new int[] { 1, 0 });
    obj.enqueue(new int[] { 2, 1 });
    int[] r1 = obj.dequeueDog();
    int[] r2 = obj.dequeueCat();
    int[] r3 = obj.dequeueAny();
    System.out.printf("Output: [null, null, null, null, [%d,%d], [%d,%d], [%d,%d]]\n",
        r1[0], r1[1], r2[0], r2[1], r3[0], r3[1]);
  }
}
