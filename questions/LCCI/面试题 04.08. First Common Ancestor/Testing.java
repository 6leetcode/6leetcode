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
  public TreeNode lowestCommonAncestor(TreeNode root, TreeNode p, TreeNode q) {
    if (root == null || root == p || root == q) return root;
    TreeNode left = lowestCommonAncestor(root.left, p, q);
    TreeNode right = lowestCommonAncestor(root.right, p, q);
    if (left != null && right != null) return root;
    return left != null ? left : right;
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    TreeNode n3 = new TreeNode(3);
    TreeNode n5 = new TreeNode(5);
    TreeNode n1 = new TreeNode(1);
    n3.left = n5;
    n3.right = n1;
    System.out.println("Input:  root = [3, 5, 1], p = 5, q = 1");
    System.out.println("Output: " + new Solution().lowestCommonAncestor(n3, n5, n1).val);
  }
}
