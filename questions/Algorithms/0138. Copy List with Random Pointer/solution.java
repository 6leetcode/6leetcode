import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

// -------------------------------solution begin-------------------------------
class Node {
  int val;
  Node next;
  Node random;

  public Node(int val) {
    this.val = val;
    this.next = null;
    this.random = null;
  }
}

class Solution {
  public Node copyRandomList(Node head) {
    if (head == null) {
      return null;
    }
    Map<Node, Node> mapping = new HashMap<Node, Node>();
    for (Node cur = head; cur != null; cur = cur.next) {
      mapping.put(cur, new Node(cur.val));
    }
    for (Node cur = head; cur != null; cur = cur.next) {
      mapping.get(cur).next = cur.next != null ? mapping.get(cur.next) : null;
      mapping.get(cur).random = cur.random != null ? mapping.get(cur.random) : null;
    }
    return mapping.get(head);
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    int[] vals = { 7, 13, 11, 10, 1 };
    int[] randoms = { -1, 0, 4, 2, 0 };
    int size = vals.length;

    Node[] nodes = new Node[size];
    for (int i = 0; i < size; i++) {
      nodes[i] = new Node(vals[i]);
    }
    for (int i = 0; i < size; i++) {
      if (i + 1 < size) {
        nodes[i].next = nodes[i + 1];
      }
      if (randoms[i] >= 0) {
        nodes[i].random = nodes[randoms[i]];
      }
    }

    System.out.println("Input:  [[7, null], [13, 0], [11, 4], [10, 2], [1, 0]]");
    Node clone = new Solution().copyRandomList(nodes[0]);

    List<Node> list = new ArrayList<Node>();
    for (Node cur = clone; cur != null; cur = cur.next) {
      list.add(cur);
    }

    StringBuilder sb = new StringBuilder("Output: [");
    for (int i = 0; i < list.size(); i++) {
      if (i > 0) {
        sb.append(", ");
      }
      int index = list.indexOf(list.get(i).random);
      sb.append("[").append(list.get(i).val).append(", ");
      sb.append(index < 0 ? "null" : String.valueOf(index)).append("]");
    }
    sb.append("]");
    System.out.println(sb.toString());
  }
}
