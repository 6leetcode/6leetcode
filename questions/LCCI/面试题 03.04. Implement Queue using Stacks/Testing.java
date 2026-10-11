import java.util.ArrayDeque;
import java.util.Deque;

// -------------------------------solution begin-------------------------------
class MyQueue {
  private Deque<Integer> in = new ArrayDeque<>();
  private Deque<Integer> out = new ArrayDeque<>();

  public MyQueue() {}

  public void push(int x) {
    in.push(x);
  }

  private void transfer() {
    if (out.isEmpty()) {
      while (!in.isEmpty()) out.push(in.pop());
    }
  }

  public int pop() {
    transfer();
    return out.pop();
  }

  public int peek() {
    transfer();
    return out.peek();
  }

  public boolean empty() {
    return in.isEmpty() && out.isEmpty();
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    System.out.println("Input:  [\"MyQueue\", \"push\", \"push\", \"peek\", \"pop\", \"empty\"]");
    MyQueue obj = new MyQueue();
    obj.push(1);
    obj.push(2);
    int p = obj.peek();
    int q = obj.pop();
    boolean e = obj.empty();
    System.out.printf("Output: [null, null, null, %d, %d, %b]\n", p, q, e);
  }
}
