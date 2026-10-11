import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

// -------------------------------solution begin-------------------------------
class Node {
  public int val;
  public List<Node> neighbors;

  public Node() {
    val = 0;
    neighbors = new ArrayList<Node>();
  }

  public Node(int _val) {
    val = _val;
    neighbors = new ArrayList<Node>();
  }
}

class Solution {
  private Map<Node, Node> visited = new HashMap<Node, Node>();

  public Node cloneGraph(Node node) {
    if (node == null) {
      return null;
    }
    if (visited.containsKey(node)) {
      return visited.get(node);
    }
    Node clone = new Node(node.val);
    visited.put(node, clone);
    for (Node neighbor : node.neighbors) {
      clone.neighbors.add(cloneGraph(neighbor));
    }
    return clone;
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    Node n1 = new Node(1);
    Node n2 = new Node(2);
    Node n3 = new Node(3);
    Node n4 = new Node(4);
    n1.neighbors.add(n2);
    n1.neighbors.add(n4);
    n2.neighbors.add(n1);
    n2.neighbors.add(n3);
    n3.neighbors.add(n2);
    n3.neighbors.add(n4);
    n4.neighbors.add(n1);
    n4.neighbors.add(n3);

    System.out.println("Input:  [[2, 4], [1, 3], [2, 4], [1, 3]]");
    System.out.println("Output: " + printGraph(new Solution().cloneGraph(n1)));
  }

  static String printGraph(Node node) {
    Map<Integer, Node> byVal = new HashMap<Integer, Node>();
    collect(node, byVal);
    int max = 0;
    for (int v : byVal.keySet()) {
      if (v > max) {
        max = v;
      }
    }
    StringBuilder sb = new StringBuilder("[");
    for (int v = 1; v <= max; v++) {
      if (v > 1) {
        sb.append(", ");
      }
      sb.append("[");
      Node cur = byVal.get(v);
      for (int i = 0; i < cur.neighbors.size(); i++) {
        if (i > 0) {
          sb.append(", ");
        }
        sb.append(cur.neighbors.get(i).val);
      }
      sb.append("]");
    }
    return sb.append("]").toString();
  }

  static void collect(Node node, Map<Integer, Node> byVal) {
    if (node == null || byVal.containsKey(node.val)) {
      return;
    }
    byVal.put(node.val, node);
    for (Node neighbor : node.neighbors) {
      collect(neighbor, byVal);
    }
  }
}
