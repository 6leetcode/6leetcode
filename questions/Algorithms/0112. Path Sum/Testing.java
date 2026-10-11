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
  private boolean check(TreeNode node, int targetSum, int current) {
    if (node == null) {
      return false;
    }
    current += node.val;
    if (node.left == null && node.right == null) {
      return current == targetSum;
    }
    return check(node.left, targetSum, current) || check(node.right, targetSum, current);
  }

  public boolean hasPathSum(TreeNode root, int targetSum) {
    return check(root, targetSum, 0);
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    TreeNode root1 = new TreeNode(5);
    root1.left = new TreeNode(4);
    root1.right = new TreeNode(8);
    root1.left.left = new TreeNode(11);
    root1.left.left.left = new TreeNode(7);
    root1.left.left.right = new TreeNode(2);
    root1.right.left = new TreeNode(13);
    root1.right.right = new TreeNode(4);
    root1.right.right.right = new TreeNode(1);

    TreeNode root2 = new TreeNode(1);
    root2.left = new TreeNode(2);
    root2.right = new TreeNode(3);

    TreeNode root3 = new TreeNode(1);
    root3.left = new TreeNode(2);

    Solution solution = new Solution();

    System.out.println("Input:  [5, 4, 8, 11, null, 13, 4, 7, 2, null, null, null, 1], targetSum = 22");
    System.out.println("Output: " + solution.hasPathSum(root1, 22));

    System.out.println("Input:  [1, 2, 3], targetSum = 5");
    System.out.println("Output: " + solution.hasPathSum(root2, 5));

    System.out.println("Input:  [], targetSum = 0");
    System.out.println("Output: " + solution.hasPathSum(null, 0));

    System.out.println("Input:  [1, 2], targetSum = 3");
    System.out.println("Output: " + solution.hasPathSum(root3, 3));
  }
}
