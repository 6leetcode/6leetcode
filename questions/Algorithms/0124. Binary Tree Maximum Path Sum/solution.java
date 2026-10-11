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
  private int best;

  private int gain(TreeNode node) {
    if (node == null) {
      return 0;
    }
    int left = Math.max(0, gain(node.left));
    int right = Math.max(0, gain(node.right));
    best = Math.max(best, node.val + left + right);
    return node.val + Math.max(left, right);
  }

  public int maxPathSum(TreeNode root) {
    best = Integer.MIN_VALUE;
    gain(root);
    return best;
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    TreeNode root1 = new TreeNode(1);
    root1.left = new TreeNode(2);
    root1.right = new TreeNode(3);

    TreeNode root2 = new TreeNode(-10);
    root2.left = new TreeNode(9);
    root2.right = new TreeNode(20);
    root2.right.left = new TreeNode(15);
    root2.right.right = new TreeNode(7);

    TreeNode root3 = new TreeNode(-3);

    TreeNode root4 = new TreeNode(2);
    root4.left = new TreeNode(-1);
    root4.right = new TreeNode(-2);

    Solution solution = new Solution();

    System.out.println("Input:  [1, 2, 3]");
    System.out.println("Output: " + solution.maxPathSum(root1));

    System.out.println("Input:  [-10, 9, 20, null, null, 15, 7]");
    System.out.println("Output: " + solution.maxPathSum(root2));

    System.out.println("Input:  [-3]");
    System.out.println("Output: " + solution.maxPathSum(root3));

    System.out.println("Input:  [2, -1, -2]");
    System.out.println("Output: " + solution.maxPathSum(root4));
  }
}
