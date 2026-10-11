// -------------------------------solution begin-------------------------------
class Node {
  public int val;
  public Node left;
  public Node right;
  public Node next;

  public Node() {
  }

  public Node(int _val) {
    val = _val;
  }

  public Node(int _val, Node _left, Node _right, Node _next) {
    val = _val;
    left = _left;
    right = _right;
    next = _next;
  }
}

class Solution {
  public Node connect(Node root) {
    Node cur = root;
    while (cur != null) {
      Node dummy = new Node(0);
      Node tail = dummy;
      for (Node node = cur; node != null; node = node.next) {
        if (node.left != null) {
          tail.next = node.left;
          tail = tail.next;
        }
        if (node.right != null) {
          tail.next = node.right;
          tail = tail.next;
        }
      }
      cur = dummy.next;
    }
    return root;
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    Node root = new Node(1);
    root.left = new Node(2);
    root.right = new Node(3);
    root.left.left = new Node(4);
    root.left.right = new Node(5);
    root.right.right = new Node(7);

    Solution solution = new Solution();
    System.out.println("Input:  [1, 2, 3, 4, 5, null, 7]");
    System.out.print("Output: ");
    show(solution.connect(root));

    System.out.println("Input:  []");
    System.out.print("Output: ");
    show(solution.connect(null));
  }

  static Node firstOfNextLevel(Node cur) {
    while (cur != null) {
      if (cur.left != null) return cur.left;
      if (cur.right != null) return cur.right;
      cur = cur.next;
    }
    return null;
  }

  static void show(Node root) {
    StringBuilder sb = new StringBuilder("[");
    boolean first = true;
    Node cur = root;
    while (cur != null) {
      Node node = cur;
      while (node != null) {
        if (!first) sb.append(",");
        sb.append(node.val);
        first = false;
        node = node.next;
      }
      if (!first) sb.append(",");
      sb.append("#");
      first = false;
      cur = firstOfNextLevel(cur);
    }
    sb.append("]");
    System.out.println(sb.toString());
  }
}
