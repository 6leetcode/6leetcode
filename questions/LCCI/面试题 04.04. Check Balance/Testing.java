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
  private int height(TreeNode node) {
    if (node == null) return 0;
    int l = height(node.left);
    if (l == -1) return -1;
    int r = height(node.right);
    if (r == -1) return -1;
    if (Math.abs(l - r) > 1) return -1;
    return 1 + Math.max(l, r);
  }

  public boolean isBalanced(TreeNode root) {
    return height(root) != -1;
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    TreeNode root = new TreeNode(3);
    root.left = new TreeNode(9);
    root.right = new TreeNode(20);
    root.right.left = new TreeNode(15);
    root.right.right = new TreeNode(7);
    System.out.println("Input:  [3, 9, 20, null, null, 15, 7]");
    System.out.println("Output: " + new Solution().isBalanced(root));
  }
}
