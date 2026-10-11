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
  public boolean isSameTree(TreeNode p, TreeNode q) {
    if (p == null && q == null) {
      return true;
    }
    if (p == null || q == null) {
      return false;
    }
    return p.val == q.val && isSameTree(p.left, q.left) && isSameTree(p.right, q.right);
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    TreeNode node1 = new TreeNode(1);
    TreeNode node2 = new TreeNode(2);
    TreeNode node3 = new TreeNode(3);
    node1.left = node2;
    node1.right = node3;
    System.out.println("Input:  [1, 2, 3]");
    Solution solution = new Solution();
    System.out.println("Output: " + solution.isSameTree(node1, node1));
  }
}
