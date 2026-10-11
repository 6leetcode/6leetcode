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
  private boolean validate(TreeNode node, long min, long max) {
    if (node == null) return true;
    if (node.val <= min || node.val >= max) return false;
    return validate(node.left, min, node.val) && validate(node.right, node.val, max);
  }

  public boolean isValidBST(TreeNode root) {
    return validate(root, Long.MIN_VALUE, Long.MAX_VALUE);
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    TreeNode n1 = new TreeNode(2);
    n1.left = new TreeNode(1);
    n1.right = new TreeNode(3);
    System.out.println("Input:  [2, 1, 3]");
    Solution solution = new Solution();
    System.out.println("Output: " + solution.isValidBST(n1));
  }
}
