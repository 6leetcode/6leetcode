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
  public int maxDepth(TreeNode root) {
    if (root == null) {
      return 0;
    }
    return 1 + Math.max(maxDepth(root.left), maxDepth(root.right));
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    Solution solution = new Solution();

    TreeNode t1 = new TreeNode(3);
    t1.left = new TreeNode(9);
    t1.right = new TreeNode(20);
    t1.right.left = new TreeNode(15);
    t1.right.right = new TreeNode(7);
    System.out.println("Input:  [3, 9, 20, null, null, 15, 7]");
    System.out.println("Output: " + solution.maxDepth(t1));

    TreeNode t2 = new TreeNode(1);
    t2.right = new TreeNode(2);
    System.out.println("Input:  [1, null, 2]");
    System.out.println("Output: " + solution.maxDepth(t2));
  }
}
