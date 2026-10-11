import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.List;
import java.util.Queue;

// -------------------------------solution begin-------------------------------
class TreeNode {
  int val;
  TreeNode left;
  TreeNode right;

  TreeNode(int x) {
    val = x;
  }
}

class ListNode {
  int val;
  ListNode next;

  ListNode(int x) {
    val = x;
  }
}

class Solution {
  public ListNode[] listOfDepth(TreeNode tree) {
    List<ListNode> res = new ArrayList<>();
    if (tree == null) return new ListNode[0];
    Queue<TreeNode> q = new ArrayDeque<>();
    q.add(tree);
    while (!q.isEmpty()) {
      int levelSize = q.size();
      ListNode dummy = new ListNode(0);
      ListNode lt = dummy;
      for (int i = 0; i < levelSize; i++) {
        TreeNode node = q.poll();
        lt.next = new ListNode(node.val);
        lt = lt.next;
        if (node.left != null) q.add(node.left);
        if (node.right != null) q.add(node.right);
      }
      res.add(dummy.next);
    }
    return res.toArray(new ListNode[0]);
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    TreeNode root = new TreeNode(1);
    root.left = new TreeNode(2);
    root.right = new TreeNode(3);
    root.left.left = new TreeNode(4);
    root.left.right = new TreeNode(5);
    root.right.right = new TreeNode(7);
    root.left.left.left = new TreeNode(8);
    System.out.println("Input:  [1, 2, 3, 4, 5, null, 7, 8]");
    ListNode[] res = new Solution().listOfDepth(root);
    StringBuilder sb = new StringBuilder("Output: [");
    for (int i = 0; i < res.length; i++) {
      if (i > 0) sb.append(", ");
      sb.append("[");
      boolean first = true;
      for (ListNode p = res[i]; p != null; p = p.next) {
        if (!first) sb.append(", ");
        first = false;
        sb.append(p.val);
      }
      sb.append("]");
    }
    sb.append("]");
    System.out.println(sb);
  }
}
