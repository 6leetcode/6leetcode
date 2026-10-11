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
  public TreeNode inorderSuccessor(TreeNode root, TreeNode p) {
    if (p.right != null) {
      TreeNode node = p.right;
      while (node.left != null) node = node.left;
      return node;
    }
    TreeNode succ = null, node = root;
    while (node != null) {
      if (p.val < node.val) {
        succ = node;
        node = node.left;
      } else if (p.val > node.val) {
        node = node.right;
      } else {
        break;
      }
    }
    return succ;
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    TreeNode n2 = new TreeNode(2);
    TreeNode n1 = new TreeNode(1);
    TreeNode n3 = new TreeNode(3);
    n2.left = n1;
    n2.right = n3;
    System.out.println("Input:  root = [2, 1, 3], p = 1");
    TreeNode res = new Solution().inorderSuccessor(n2, n1);
    System.out.println(res == null ? "Output: null" : "Output: " + res.val);
  }
}
