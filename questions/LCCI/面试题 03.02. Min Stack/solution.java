import java.util.ArrayDeque;
import java.util.Deque;

// -------------------------------solution begin-------------------------------
class MinStack {
  private Deque<Integer> data = new ArrayDeque<>();
  private Deque<Integer> mins = new ArrayDeque<>();

  public MinStack() {}

  public void push(int x) {
    data.push(x);
    mins.push(mins.isEmpty() ? x : Math.min(x, mins.peek()));
  }

  public void pop() {
    data.pop();
    mins.pop();
  }

  public int top() {
    return data.peek();
  }

  public int getMin() {
    return mins.peek();
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    System.out.println("Input:  [\"MinStack\", \"push\", \"push\", \"push\", \"getMin\", \"pop\", \"top\", \"getMin\"]");
    MinStack obj = new MinStack();
    obj.push(-2);
    obj.push(0);
    obj.push(-3);
    int a = obj.getMin();
    obj.pop();
    int b = obj.top();
    int c = obj.getMin();
    System.out.printf("Output: [null, null, null, null, %d, null, %d, %d]\n", a, b, c);
  }
}
