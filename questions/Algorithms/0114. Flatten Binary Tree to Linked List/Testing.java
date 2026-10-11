import java.util.ArrayList;
import java.util.Deque;
import java.util.LinkedList;
import java.util.List;

// -------------------------------solution begin-------------------------------
class TreeNode {
  int val;
  TreeNode left;
  TreeNode right;

  TreeNode(int x) {
    val = x;
  }
}

class Solution {
  public void flatten(TreeNode root) {
    TreeNode cur = root;
    while (cur != null) {
      if (cur.left != null) {
        TreeNode prev = cur.left;
        while (prev.right != null) prev = prev.right;
        prev.right = cur.right;
        cur.right = cur.left;
        cur.left = null;
      }
      cur = cur.right;
    }
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    TreeNode n1 = new TreeNode(1);
    n1.left = new TreeNode(2);
    n1.right = new TreeNode(5);
    n1.left.left = new TreeNode(3);
    n1.left.right = new TreeNode(4);
    n1.right.right = new TreeNode(6);
    System.out.printf("Input:  root = %s\n", treeShow(n1));
    new Solution().flatten(n1);
    System.out.printf("Output: %s\n", treeShow(n1));

    TreeNode n0 = new TreeNode(0);
    System.out.printf("Input:  root = %s\n", treeShow(n0));
    new Solution().flatten(n0);
    System.out.printf("Output: %s\n", treeShow(n0));

    TreeNode empty = null;
    System.out.printf("Input:  root = %s\n", treeShow(empty));
    new Solution().flatten(empty);
    System.out.printf("Output: %s\n", treeShow(empty));
  }

  static String treeShow(TreeNode root) {
    if (root == null) return "[]";
    List<String> parts = new ArrayList<>();
    Deque<TreeNode> queue = new LinkedList<>();
    queue.add(root);
    while (!queue.isEmpty()) {
      TreeNode node = queue.poll();
      if (node == null) {
        parts.add("null");
      } else {
        parts.add(Integer.toString(node.val));
        queue.add(node.left);
        queue.add(node.right);
      }
    }
    while (!parts.isEmpty() && parts.get(parts.size() - 1).equals("null")) {
      parts.remove(parts.size() - 1);
    }
    StringBuilder sb = new StringBuilder("[");
    for (int i = 0; i < parts.size(); i++) {
      if (i > 0) sb.append(", ");
      sb.append(parts.get(i));
    }
    return sb.append("]").toString();
  }
}
