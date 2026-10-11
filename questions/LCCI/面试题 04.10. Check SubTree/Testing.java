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
  private boolean same(TreeNode a, TreeNode b) {
    if (a == null && b == null) return true;
    if (a == null || b == null) return false;
    return a.val == b.val && same(a.left, b.left) && same(a.right, b.right);
  }

  public boolean checkSubTree(TreeNode t1, TreeNode t2) {
    if (t2 == null) return true;
    if (t1 == null) return false;
    return same(t1, t2) || checkSubTree(t1.left, t2) || checkSubTree(t1.right, t2);
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    TreeNode a3 = new TreeNode(3);
    TreeNode a4 = new TreeNode(4);
    TreeNode a5 = new TreeNode(5);
    a3.left = a4;
    a3.right = a5;
    a4.left = new TreeNode(1);
    a4.right = new TreeNode(2);
    TreeNode b4 = new TreeNode(4);
    b4.left = new TreeNode(1);
    b4.right = new TreeNode(2);
    System.out.println("Input:  t1 = [3,4,5,1,2], t2 = [4,1,2]");
    System.out.println("Output: " + new Solution().checkSubTree(a3, b4));
  }
}
