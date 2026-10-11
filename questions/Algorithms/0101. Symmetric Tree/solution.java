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
  public boolean isSymmetric(TreeNode root) {
    return isMirror(root, root);
  }

  private boolean isMirror(TreeNode a, TreeNode b) {
    if (a == null && b == null) {
      return true;
    }
    if (a == null || b == null) {
      return false;
    }
    return a.val == b.val && isMirror(a.left, b.right) && isMirror(a.right, b.left);
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    TreeNode node1 = new TreeNode(1);
    TreeNode node2 = new TreeNode(2);
    TreeNode node3 = new TreeNode(2);
    node1.left = node2;
    node1.right = node3;
    System.out.println("Input:  [1, 2, 2]");
    Solution solution = new Solution();
    System.out.println("Output: " + solution.isSymmetric(node1));
  }
}
