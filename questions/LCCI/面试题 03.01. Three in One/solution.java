import java.util.ArrayList;
import java.util.List;

// -------------------------------solution begin-------------------------------
class TripleInOne {
  private List<Integer> arr;
  private int size;
  private int[] top = new int[3];

  public TripleInOne(int stackSize) {
    this.size = stackSize;
    this.arr = new ArrayList<>();
    for (int i = 0; i < 3 * stackSize; i++) arr.add(0);
  }

  public void push(int stackNum, int value) {
    if (top[stackNum] < size) arr.set(stackNum * size + top[stackNum]++, value);
  }

  public int pop(int stackNum) {
    if (top[stackNum] == 0) return -1;
    return arr.get(stackNum * size + --top[stackNum]);
  }

  public int peek(int stackNum) {
    if (top[stackNum] == 0) return -1;
    return arr.get(stackNum * size + top[stackNum] - 1);
  }

  public boolean isEmpty(int stackNum) {
    return top[stackNum] == 0;
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    System.out.println("Input:  [\"TripleInOne\", \"push\", \"push\", \"pop\", \"pop\", \"pop\", \"isEmpty\"]");
    TripleInOne obj = new TripleInOne(1);
    obj.push(0, 1);
    obj.push(0, 2);
    System.out.printf("Output: [null, null, null, %d, %d, %d, %b]\n", obj.pop(0), obj.pop(0), obj.pop(0), obj.isEmpty(0));
  }
}
