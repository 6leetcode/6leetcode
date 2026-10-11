import java.util.ArrayDeque;
import java.util.Deque;

// -------------------------------solution begin-------------------------------
class SortedStack {
  private Deque<Integer> data = new ArrayDeque<>();

  public SortedStack() {}

  public void push(int val) {
    Deque<Integer> tmp = new ArrayDeque<>();
    while (!data.isEmpty() && data.peek() < val) tmp.push(data.pop());
    data.push(val);
    while (!tmp.isEmpty()) data.push(tmp.pop());
  }

  public void pop() {
    if (!data.isEmpty()) data.pop();
  }

  public int peek() {
    return data.isEmpty() ? -1 : data.peek();
  }

  public boolean isEmpty() {
    return data.isEmpty();
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    System.out.println("Input:  [\"SortedStack\", \"push\", \"push\", \"peek\", \"pop\", \"peek\"]");
    SortedStack obj = new SortedStack();
    obj.push(1);
    obj.push(2);
    int a = obj.peek();
    obj.pop();
    int b = obj.peek();
    System.out.printf("Output: [null, null, null, %d, null, %d]\n", a, b);
  }
}
