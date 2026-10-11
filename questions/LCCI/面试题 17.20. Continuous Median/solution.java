import java.util.Collections;
import java.util.PriorityQueue;

// -------------------------------solution begin-------------------------------
class MedianFinder {
  private PriorityQueue<Integer> lower = new PriorityQueue<>(Collections.reverseOrder());
  private PriorityQueue<Integer> upper = new PriorityQueue<>();

  public MedianFinder() {}

  public void addNum(int num) {
    lower.offer(num);
    upper.offer(lower.poll());
    if (lower.size() < upper.size()) lower.offer(upper.poll());
  }

  public double findMedian() {
    if (lower.size() > upper.size()) return lower.peek();
    return (lower.peek() + upper.peek()) / 2.0;
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    System.out.println("Input:  addNum(1), addNum(2), findMedian(), addNum(3), findMedian()");
    MedianFinder obj = new MedianFinder();
    obj.addNum(1);
    obj.addNum(2);
    double a = obj.findMedian();
    obj.addNum(3);
    double b = obj.findMedian();
    System.out.printf("Output: [%s, %s]\n", a, b);
  }
}
