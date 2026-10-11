import java.util.ArrayList;
import java.util.List;

// -------------------------------solution begin-------------------------------
class StackOfPlates {
  private int cap;
  private List<List<Integer>> stacks = new ArrayList<>();

  public StackOfPlates(int cap) {
    this.cap = cap;
  }

  public void push(int val) {
    if (cap == 0) return;
    if (stacks.isEmpty() || stacks.get(stacks.size() - 1).size() == cap) {
      stacks.add(new ArrayList<>());
    }
    stacks.get(stacks.size() - 1).add(val);
  }

  public int pop() {
    if (stacks.isEmpty()) return -1;
    List<Integer> last = stacks.get(stacks.size() - 1);
    int v = last.remove(last.size() - 1);
    if (last.isEmpty()) stacks.remove(stacks.size() - 1);
    return v;
  }

  public int popAt(int index) {
    if (index < 0 || index >= stacks.size()) return -1;
    List<Integer> s = stacks.get(index);
    int v = s.remove(s.size() - 1);
    if (s.isEmpty()) stacks.remove(index);
    return v;
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    System.out.println("Input:  [\"StackOfPlates\", \"push\", \"push\", \"push\", \"popAt\", \"popAt\", \"popAt\"]");
    StackOfPlates obj = new StackOfPlates(2);
    obj.push(1);
    obj.push(2);
    obj.push(3);
    System.out.printf("Output: [null, null, null, null, %d, %d, %d]\n", obj.popAt(0), obj.popAt(0), obj.popAt(0));
  }
}
